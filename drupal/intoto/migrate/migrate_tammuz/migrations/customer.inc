<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * A migration that is reused for each source CSV file.
 */
class CustomersMigration extends IntotoMigration {
	public function __construct($arguments) {
		parent::__construct($arguments);
		//  print "creating CustomersMigration for type $bundle<br>\n";
		$this->description = t('Import ' . $this->bundle . ' from CSV file.');

		$this->destination = new MigrateDestinationCRMCoreContact($this->bundle);
	}
	public function AddFieldMappings()
	{
		$this->addFieldMapping('field_customer_number', 'customer_id');
	}
	
	public function DestinationKey()
	{
		return MigrateDestinationCRMCoreContact::getKeySchema();
	}
	

	public function csvcolumns() {
		// Note: Remember that columns are zero based
		//customer_id	id	name_first	name_last	email	phone	dob
		$columns = array();
		return $columns;
	}
	

	public function prepareRow($row) {
		$row->last_change = time();   // now is the update time of change
		if (strlen(trim($row->customer_id)) == 0){
			return FALSE;
		}
//		$row->name_first = "FIRST";   
//		$row->name_last = "LAST";   
//		$row->name_first = utf8_encode (utf8_decode ($row->name_first));
//		$row->name_last = utf8_encode (utf8_decode($row->name_last));

//		drush_print(print_r($row, true));
		//drush_print(print_r($row->email, true));

		//splitting first name / last name
/*		$name_less_spaces = trim(preg_replace('!\s+!', ' ', $row->name));
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
			$this->queueMessage("Needs to review first/last name: " . $row->name);
		}
*/		
//		$date = $this->translateDate($row->date_of_birth);
//		if (!empty($row->date_of_birth) && !$date )
//		{
//			$this->queueMessage("bad birth date: " . $row->date_of_birth);
//		}
//		else{
//			$row->date_of_birth = $date;
//		}

//		$date = $this->translateDate($row->date_of_death);
//		if (!empty($row->date_of_death) && !$date )
//		{
//			$this->queueMessage("bad death date: " . $row->date_of_death);
//		}
//		else{
//			$row->date_of_death = $date;
//		}
	}
}
