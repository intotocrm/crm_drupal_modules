<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



class IntotoMigration extends Migration
{
	public static $debug = 0;
	public function __construct($arguments) {
		parent::__construct($arguments);
		$porting_dir = 	drupal_get_path('module', 'migrate_tammuz') . "/porting/";
		$this->bundle = isset($arguments['bundle']) ? $arguments['bundle'] : $this->machineName;
		$inifile = $porting_dir . $arguments['ini_file'];
		$ini = parse_ini_file($inifile , true);
		if (!$ini)
		{
			$this->error("can't read ini in '$inifile'");
		}

		// the name of the group is the same as the name of the main contact type, to make life easier.
		$this->base_migrate = $this->group->getName();
		$ini_section = isset($arguments['ini_section']) ? $arguments['ini_section'] : $this->base_migrate;
		$this->settings = $ini[$ini_section ];
		
		if (isset($arguments['dependency']) )
		{
			$this->dependencies = $arguments[dependency];
		}
		else
		{
			//dependency is the main contact type. for example, ip_address (field collection) is dependent on ip.
			if ($this->base_migrate != $this->machineName) { //dont depend on yourself
				$this->dependencies = array($this->base_migrate);
			}
		}

		$csv_path = $this->settings['csv'];

		self::$debug = $this->settings['debug'];
		if (empty($csv_path))
		{
			$this->error(t("empty csv file path"));
		}

		if($csv_path[0] != "/"){ //relative
			$csv_path = $porting_dir . "/" . $csv_path;
		}
		$this->csv_path = $csv_path;
		if (!isset($this->csv_path) || !is_readable($this->csv_path))
		{
			throw new MigrateException(t("can't read from csv file '" . $this->csv_path  . "'"));
		}
		$this->source = new MigrateSourceCSV($this->csv_path, array(), array('header_rows' => 1));
		
	    $this->source_keys = $arguments['keys'];
		
		
	    $this->map = new MigrateSQLMap($this->machineName, $this->source_keys, $this->DestinationKey() );
		
		$this->AddFieldMappings();
	}
	
	
	public function AddFieldMappings()
	{
		throw new MigrateException(t("use of abstract class method AddFieldMapping()"));
	}
	
	public function DestinationKey()
	{
		throw new MigrateException(t("use of abstract class method DestinationKey()"));
	}

	function message($text)
	{
		$this->queueMessage($text);
	}

	static function error($text)
	{
		throw new MigrateException($text);
	}

	function debug($text)
	{
		if (self::$debug)
		{
			print("debug: $text\n");
		}
	}

	function print_me($what)
	{
		print_r($what) ;
		print "\n";
		return $what;
	}
}
