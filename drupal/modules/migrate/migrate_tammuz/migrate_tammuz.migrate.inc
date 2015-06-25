<?php

/**
 * @file
 *   A tammuz info migration.
 */


/*
 * You must implement hook_migrate_api(), setting the API level to 2, for
 * your migration classes to be recognized by the Migrate module.
 */



class TammuzMigration extends Migration
{
      public function __construct($arguments) {
	parent::__construct($arguments);
	
	$porting_dir = dirname(__FILE__) . "/porting/";
        $this->bundle = $this->machineName;
	$inifile = $porting_dir . $arguments['ini_file'];
	$ini = parse_ini_file($inifile , true);
	$this->settings = $ini[$this->bundle];
	
	$csv_path = $this->settings['csv'];
	if (empty($csv_path))
	{
	    throw new MigrateException(t("empty csv file path"));
	}

	if($csv_path[0] != "/"){ //relative
	    $csv_path = $porting_dir . "/" . $csv_path;
	}
	$this->csv_path = $csv_path;
	if (!isset($this->csv_path) || !is_readable($this->csv_path))
	{
	    throw new MigrateException(t("can't read from csv file '" . $this->csv_path  . "'"));
	}

      }
}


function migrate_tammuz_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'tammuz' => array(
        'title' => t('Tammuz Objects'),
      ),
    ),
    'migrations' => array(
      'ip' => array(
        'class_name' => 'IndividualsMigration',
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
        'class_name' => 'IndividualsMigration',
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

	'address' => array(
	    'class_name' => 'AddressesMigration',
	    'group_name' => 'tammuz',
	    'ini_file' => 'porting.ini',
	    'keys' => array(
				'id' => array('type' => 'varchar',
						   'length' => 255,
						   'not null' => TRUE,
						   'description' => "donor's unique id",
						  ),
			    ),
	),      


	'im' => array(
	    'class_name' => 'InstantMessagingMigration',
	    'group_name' => 'tammuz',
	    'ini_file' => 'porting.ini',
	    'keys' => array(
				'id' => array('type' => 'varchar',
						   'length' => 255,
						   'not null' => TRUE,
						   'description' => "donor's unique id",
						  ),
			    ),
	),      
    ),
      
  );
  return $api;
}
