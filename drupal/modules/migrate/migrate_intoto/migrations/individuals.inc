<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * A migration that is reused for each source CSV file.
 */
class IndividualsMigration extends IntotoMigration {
	public function __construct($arguments) {
		parent::__construct($arguments);
		//  print "creating MigrateIndividual for type $bundle<br>\n";
		$this->description = t('Import ' . $this->bundle . ' from CSV file.');

		$this->destination = new MigrateDestinationCRMCoreContact($this->bundle);
	}
	public function AddFieldMappings()
	{
//		$this->addFieldMapping('contact_id ', 'id');
		$this->addFieldMapping('field_email', 'email')
		  ->defaultValue(NULL)
		  //->callbacks('trim', array($this, 'valid_email_address'))
				;
//		$this->addFieldMapping('field_facebook_user_name', 'facebook_user_name');
//		$this->addFieldMapping('field_facebook_user_name:language');  //empty. facebook id doens't have a language.

		$this->addFieldMapping('contact_name','name_first');  //based on migrate_extras (see name.inc)
		$this->addFieldMapping('contact_name:given'); //empty mapping
		$this->addFieldMapping('contact_name:middle'); //empty mapping
		$this->addFieldMapping('contact_name:family', 'name_last');
		$this->addFieldMapping('contact_name:generational'); //empty mapping
		$this->addFieldMapping('contact_name:credentials'); //empty mapping

//		$this->addFieldMapping('field_address'); //empty mapping - being taken care of in addresses.inc
//		$this->addFieldMapping('field_address:revision_id'); //empty mapping - being taken care of in addresses.inc

//		$this->addFieldMapping('field_instant_messaging_collecti'); //empty mapping - being taken care of in instant_messaging.inc
//		$this->addFieldMapping('field_instant_messaging_collecti:revision_id'); //empty mapping - being taken care of in instant_messaging.inc

		$this->addFieldMapping('field_phone'); //empty mapping - being taken care of in phone.inc
		$this->addFieldMapping('field_phone:revision_id'); //empty mapping - being taken care of in phone.inc
		
//		$this->AddFieldMapping('field_marital_status', 'marital_status');
		
		//		$this->AddFieldMapping('field_date_of_birth', 'date_of_birth');
		//		$this->AddFieldMapping('field_date_of_birth:timezone');  //empty mapping
		//		$this->AddFieldMapping('field_date_of_birth:to');  //empty mapping
		//		$this->AddFieldMapping('field_date_of_birth:rrule');  //empty mapping
		
		
//		$this->AddFieldMapping('field_date_of_death')
//				->defaultValue(NULL);//empty.
//		$this->AddFieldMapping('field_date_of_death:timezone');  //empty mapping
//		$this->AddFieldMapping('field_date_of_death:to');  //empty mapping
//		$this->AddFieldMapping('field_date_of_death:rrule');  //empty mapping
		
//		$this->AddFieldMapping('field_gender', 'gender');
	}
	
	public function DestinationKey()
	{
		return MigrateDestinationCRMCoreContact::getKeySchema();
	}
	

	public function csvcolumns() {
		// Note: Remember that columns are zero based
		//customer_id	id	name_first	name_last	email	phone	dob
		$columns = array();
		$columns[] = array('customer_id', 'Customer ID to relate to');
		$columns[] = array('id', 'IP ID');
		$columns[] = array('name_first', 'First Name');
		$columns[] = array('name_last', 'Last Name');
		$columns[] = array('email', 'email');
		$columns[] = array('phone', 'Phone');
		$columns[] = array('dob', 'DoB');
		return $columns;
	}
	
	public function translateDate($date_string)
	{
		
//		$date = date_parse_from_format("Y/m/d", trim($date_string));
//		$timezone = new DateTimeZone('UTC');
		$date = DateTime::createFromFormat("Y/m/d", trim($date_string));
		$errors = DateTime::getLastErrors();
		if ($errors["warning_count"] > 0 || $errors['error_count'] > 0)
		{
			return false;
		}

		$new_representation = $date->format("Y-m-d 00:00:00 +0000");
		print "date $date_string translated to $new_representation\n";
		return $new_representation;
	}

	public function prepareRow($row) {
		$row->last_change = time();   // now is the update time of change
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
