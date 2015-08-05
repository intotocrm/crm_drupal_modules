<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



class IntotoMigration extends Migration
{
	public function __construct($arguments) {
		parent::__construct($arguments);

		$porting_dir = dirname(__FILE__) . "/../porting/";
		$this->bundle = $this->machineName;
		$inifile = $porting_dir . $arguments['ini_file'];
//		drush_print("*** bundle: " . $this->bundle );
//		drush_print("*** ini file: " . $inifile);
		$ini = parse_ini_file($inifile , true);

		//dependency is the main contact type. for example, ip_address (field collection) is dependent on ip.
		// the name of the group is the same as the name of the main contact type, to make life easier.
		$this->base_migrate = $this->group->getName();
		$this->settings = $ini[$this->base_migrate];
		if ($this->base_migrate != $this->machineName) { //dont depend on yourself
			$this->dependencies = array($this->base_migrate);
		}

		if (isset($arguments['depend']))
		{
			foreach($arguments['depend'] as $dependency)
			{
				$this->dependencies[] = $dependency;
			}
		}

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
		$this->source = new MigrateSourceCSV($this->csv_path, $this->csvcolumns(), array('header_rows' => 1, 'delimiter'=>"\t"));
		
	    $this->source_keys = $arguments['keys'];
		
		
	    $this->map = new MigrateSQLMap($this->machineName, $this->source_keys, $this->DestinationKey() );
		
		$this->AddFieldMappings();
	}
	
	
	public function AddFieldMappings()
	{
		throw new MigrateException(t("use of abstract class method AddFieldMapping()"));
	}

	public function csvcolumns()
	{
		throw new MigrateException(t("use of abstract class method csvcolumns()"));
	}
	
	public function DestinationKey()
	{
		throw new MigrateException(t("use of abstract class method DestinationKey()"));
	}

	public function print_me($what)
	{
		print_r($what) ;
		print "\n";
		return $what;
	}
}
