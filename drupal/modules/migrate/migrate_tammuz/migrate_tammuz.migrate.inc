<?php

/**
 * @file
 *   A tammuz info migration.
 */


/*
 * You must implement hook_migrate_api(), setting the API level to 2, for
 * your migration classes to be recognized by the Migrate module.
 */



/**
 * A migration that is reused for each source CSV file.
 */
class MigrateIndividuals extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $bundle = $this->machineName;
  //  print "creating MigrateIndividual for type $bundle<br>\n";
    $this->description = t('Import ' . $bundle . ' from CSV file.');


    $inifile = dirname(__FILE__) . "/porting/" . $arguments['ini_file'];
    $ini = parse_ini_file($inifile , true);
    $settings = $ini[$bundle];

    $csv_path = $settings['csv'];
    if (empty($csv_path))
    {
	throw new MigrateException(t("empty csv file path"));
    }
    
    if($csv_path[0] != "/"){ //relative
	$csv_path = dirname ($inifile) . "/" . $csv_path;
    }
    
//    print_r($csv_path);print "***\n\n";
    
    
    $source_keys = $arguments['keys'];
    
    if (!isset($csv_path) || !is_readable($csv_path))
    {
	throw new MigrateException(t("can't read from csv file '" . (isset($csv_path) ? $csv_path : "") . "'"));
    }
    $this->source = new MigrateSourceCSV($csv_path, array(), array('header_rows' => 1)); //$this->csvcolumns()
//
    $this->destination = new MigrateDestinationCRMCoreContact($bundle);

    $this->map = new MigrateSQLMap($this->machineName, $source_keys, MigrateDestinationCRMCoreContact::getKeySchema());
    
//    $this->prepareUpdate();
    
    
//    $this->addFieldMapping('changed', 'last_change');

    $this->addFieldMapping('field_email', 'email')
	  ->defaultValue(NULL)
	  ->callbacks('trim', array($this, 'valid_email_address'));
    $this->addFieldMapping('field_facebook_user_name', 'facebook_user_name');
    $this->addFieldMapping('contact_name')
	->defaultValue("");
    $this->addFieldMapping('contact_name:given', 'name_first');
    $this->addFieldMapping('contact_name:family', 'name_last');
    


//
//    $this->addFieldMapping('title', 'title')
//         ->description('See prepareRow().');
//    $this->addFieldMapping('field_start_date', 'start_date');
//    $this->addFieldMapping('field_park', 'park_id');
//    $this->addFieldMapping('field_visiting_team', 'visiting_team');
//    $this->addFieldMapping('field_home_team', 'home_team');
//    $this->addFieldMapping('field_home_game_number', 'home_game_number');
//    $this->addFieldMapping('field_home_score', 'home_score');
//    $this->addFieldMapping('field_visiting_score', 'visiting_score');
//    $this->addFieldMapping('field_outs', 'outs');
//    $this->addFieldMapping('field_attendance', 'attendance');
//    $this->addFieldMapping('field_duration', 'duration')
//         ->defaultValue(NULL);
//    $this->addFieldMapping('field_home_pitcher', 'home_pitcher');
//    $this->addFieldMapping('field_visiting_pitcher', 'visiting_pitcher');
//    $this->addFieldMapping('field_home_batters', 'home_batters')
//         ->separator(',')
//         ->description('See prepareRow().');
//    $this->addFieldMapping('field_visiting_batters', 'visiting_batters')
//         ->separator(',')
//         ->description('See prepareRow().');
//    for ($i=1; $i <= 9; $i++ ) {
//      $this->addFieldMapping(NULL, "visiting_batter_$i")
//           ->description('Not needed since we use the multi-value field: visiting_batters.');
//      $this->addFieldMapping(NULL, "home_batter_$i")
//           ->description('Not needed since we use the multi-value field: home_batters.');
//    }
  }

  protected function csvcolumns() {
    // Note: Remember that columns are zero based
      $columns = array();
    return $columns;
  }

  public function prepareRow($row) {
      $row->last_change = time();   // now is the update time of change
      
      //print_r($row);

      //splitting first name / last name
      $name_less_spaces = trim(preg_replace('!\s+!', ' ', $row->name));
      if (empty($name_less_spaces))
      {
	    $this->queueMessage("missing name for contact");
      }else
      {
	$name_split = explode(" ", $name_less_spaces);
	$row->name_first = ucfirst(strtolower(array_shift($name_split)));
	$row->name_last = ucfirst(strtolower(array_shift($name_split)));

      }
      if (count($name_split) > 0)
      {
	    $this->queueMessage("Needs to review first/last name");
      }
  }
  
    function print_me($what)
    {
	print_r($what) ;
	print "\n";
	return $what;
    }
    
    function  valid_email_address($email)
    {
	if (!isset($email) || strlen($email) == 0) {
		return NULL;
	}
	    if(! filter_var($email, FILTER_VALIDATE_EMAIL))
	{
	    $msg = "bad email $email";
	    $this->saveMessage($msg);
	    print "$msg\n";
	    return NULL;
	}
	return $email;
    }
}



function migrate_tammuz_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'tammuz_objects' => array(
        'title' => t('Tammuz Objects'),
      ),
    ),
    'migrations' => array(
      'ip' => array(
        'class_name' => 'MigrateIndividuals',
        'group_name' => 'tammuz',
	'ini_file' => 'porting.ini',
	'keys' => array(
			    'customer_number' => array('type' => 'int',
					       'not null' => TRUE,
					       'description' => 'Tammuz existing customer ID',
					      ),
			    'name' => array('type' => 'varchar',
					       'length' => 255,
					       'not null' => TRUE,
					       'description' => "person's name",
					      ),

			)
	  
      ),
	
      'egg_donor' => array(
        'class_name' => 'MigrateIndividuals',
        'group_name' => 'tammuz',
	'ini_file' => 'porting.ini',
	'keys' => array(
			    'id' => array('type' => 'varchar',
					       'length' => 255,
					       'not null' => TRUE,
					       'description' => "donor's unique id",
					      ),
			)
      ),
	
	//
	//  ...
	//
	
    ),
  );
  return $api;
}
