<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * A migration that is reused for each source CSV file.
 */
class IndividualsMigration extends TammuzMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
  //  print "creating MigrateIndividual for type $bundle<br>\n";
    $this->description = t('Import ' . $this->bundle . ' from CSV file.');


//    print_r($csv_path);print "***\n\n";
    
    
    $source_keys = $arguments['keys'];
    $this->source = new MigrateSourceCSV($this->csv_path, array(), array('header_rows' => 1)); //$this->csvcolumns()
//
    $this->destination = new MigrateDestinationCRMCoreContact($this->bundle);

    $this->map = new MigrateSQLMap($this->machineName, $source_keys, MigrateDestinationCRMCoreContact::getKeySchema());
    
//    $this->prepareUpdate();
    
    
//    $this->addFieldMapping('changed', 'last_change');

    $this->addFieldMapping('field_email', 'email')
	  ->defaultValue(NULL)
	  ->callbacks('trim', array($this, 'valid_email_address'));
    $this->addFieldMapping('field_facebook_user_name', 'facebook_user_name');

    
    $this->addFieldMapping('contact_name','name_first');  //based on migrate_extra (see name.inc)
//    $this->addFieldMapping('contact_name:given', 'name_first');
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
	
	print_r(array("first"=>$row->name_first,
		"last"=>$row->name_last));

      }
      if (count($name_split) > 0)
      {
	    $this->queueMessage("Needs to review first/last name: " . $row->name);
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
	    return NULL;
	}
	return $email;
    }
}
