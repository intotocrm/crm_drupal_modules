<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * A migration that is reused for each source CSV file.
 */
class IpsMigration extends IndividualsMigration {
	public function __construct($arguments) {
		parent::__construct($arguments);
		$this->date_format = isset($arguments['date_format']) ? $arguments['date_format'] : "d/m/Y";
		$this->field_prefix = isset($this->settings['field_prefix']) ? $this->settings['field_prefix'] : "";
		$this->debug("using field prefix: " . $this->field_prefix);
	}
	
	
	public function AddFieldMappings()
	{
//IP_id,customer_id,,name_first,name_middle,name_last,name_first_en,name_middle_en,name_last_en,gender,ID,Passport_number,DoB,Address,email,phone,phone_additional,profession,has_2_languages,ignore

		$this->addFieldMapping('field_email', 'email')
		  ->defaultValue(NULL)
		  ->callbacks('trim', array($this, 'valid_email_address'));
		
		$this->addFieldMapping('field_facebook_user_name', 'facebook_user_name');
		$this->addFieldMapping('field_facebook_user_name:language');  //empty. facebook id doens't have a language.

		$this->addFieldMapping('contact_name','name_first');  //based on migrate_extra (see name.inc)
		$this->addFieldMapping('contact_name:given'); //empty mapping
		$this->addFieldMapping('contact_name:middle', 'name_middle'); 
		$this->addFieldMapping('contact_name:family', 'name_last');
		$this->addFieldMapping('contact_name:generational'); //empty mapping
		$this->addFieldMapping('contact_name:credentials'); //empty mapping

		$this->addFieldMapping('field_name_in_english','name_first_en');  //based on migrate_extra (see name.inc)
		$this->addFieldMapping('field_name_in_english:given'); //empty mapping
		$this->addFieldMapping('field_name_in_english:middle', 'name_middle_en');
		$this->addFieldMapping('field_name_in_english:family', 'name_last_en');
		$this->addFieldMapping('field_name_in_english:generational'); //empty mapping
		$this->addFieldMapping('field_name_in_english:credentials'); //empty mapping


		$this->addFieldMapping('field_address'); //empty mapping - being taken care of in addresses.inc
		$this->addFieldMapping('field_address:revision_id'); //empty mapping - being taken care of in addresses.inc

		$this->addFieldMapping('field_instant_messaging_collecti'); //empty mapping - being taken care of in instant_messaging.inc
		$this->addFieldMapping('field_instant_messaging_collecti:revision_id'); //empty mapping - being taken care of in instant_messaging.inc

		$this->addFieldMapping('field_phone'); //empty mapping - being taken care of in phone.inc
		$this->addFieldMapping('field_phone:revision_id'); //empty mapping - being taken care of in phone.inc
		
		$this->AddFieldMapping('field_marital_status', 'marital_status');
		
		$this->AddFieldMapping('field_date_of_birth', 'DoB');
		$this->AddFieldMapping('field_date_of_birth:timezone');  //empty mapping
		$this->AddFieldMapping('field_date_of_birth:to');  //empty mapping
		$this->AddFieldMapping('field_date_of_birth:rrule');  //empty mapping
		
		
		$this->AddFieldMapping('field_gender', 'gender')->callbacks(array($this, "validate_gender"));
		
		$this->AddFieldMapping('field_id', 'ID');
		$this->AddFieldMapping('field_passport_number', 'Passport_number');
		$this->AddFieldMapping('field_profession', 'profession');

		$this->addFieldMapping('field_nationality', 'nationality')->callbacks(array($this, 'get_country_code'));
	}

	function get_country_code($country_string)
	{
		if ($country_string && $country_string != "")
		{
			$code = AddressesMigration::translate_country_code($country_string);
			if (!$code)
			{
				$this->message("bad country: " . $country_string);
			}
			return $code;
		}
		return NULL;
	}

	function validate_gender($gender)
	{
		switch (strtolower ($gender[0])){
			case 'm':
				return 'male';
			case 'f':
				return 'female';
			default:
				return NULL;
		}
	}

	static function static_get_field($prefix, $field, $row)
	{
		$field_name = $prefix . "_" . $field;
		return (isset ($row->$field_name)) ? $row->$field_name : NULL;
	}

	function get_field($field, $row)
	{
		return self::static_get_field($this->field_prefix, $field, $row);
	}
	
	
	
	static function prepare_ip_key($prefix, $row)
	{
		$identifier = self::static_get_field($prefix, 'email', $row) ? self::static_get_field($prefix, 'email', $row) : (
							self::static_get_field($prefix, 'name_first_en', $row) ? self::static_get_field($prefix, 'name_first_en', $row) : (
								self::static_get_field($prefix, 'name_first', $row) ? self::static_get_field($prefix, 'name_first', $row): NULL
							)
						);
//		print "identifier: " . $identifier . "\n";
		if (strlen(trim($identifier))>0) {
			if (!isset($row->customer_id) || !$row->customer_id){
//				$this->message("ip: no customer id, setting to X in row ". $row->csvrownum);
				$row->customer_id = "X";
			}
			$key['IP_id'] = $row->customer_id. "." . $identifier;
//			print "setting key to " . $key['IP_id'] . "\n";
		}
		else
		{
			$key ['IP_id'] ='skip';
		}
		
		return $key;
	}

	public function prepareKey($source_key, $row)
	{
		$key = self::prepare_ip_key($this->field_prefix, $row);
				
		if (!$key){
			self::message('ip: no id in row with customer '. $row->customer_id . ' in line ' . $row->csvrownum);
		}
		
		return $key;
	
	}

	public function prepareRow($row) {
		//$row->last_change = time();   // now is the update time of change
//		print_r($row);
		$row_key = $this->prepareKey('IP_id', $row);
		if (!$row_key || $row_key['IP_id'] == 'skip')
		{
			print "row:" . $row->csvrownum . " return false\n";
			return FALSE;
		}
		
		$row->IP_id = $row_key ['IP_id'];
		print "row:" . $row->csvrownum . " id: " . $row->IP_id . "\n";

		
		foreach($this->codedFieldMappings as $mapping_key => $mapping)
		{
			$source_field = $mapping->getSourceField();
			if ($source_field && $this->get_field($source_field, $row)){
				$row -> $source_field = $this->get_field($source_field, $row);
			}
		}
		

		//splitting first name / last name
//		$name_less_spaces = trim(preg_replace('!\s+!', ' ', $row->name));
//		if (empty($name_less_spaces))
//		{
//		  $this->queueMessage("missing name for contact");
//		}else
//		{
//			$name_split = explode(" ", $name_less_spaces);
//			$row->name_first = ucfirst(strtolower(array_shift($name_split)));
//			$row->name_last = ucfirst(strtolower(array_shift($name_split)));
//		}
//		if (count($name_split) > 0)
//		{
//			$this->queueMessage("Needs to review first/last name: " . $row->name);
//		}
		if ($row->DoB){
			$date = $this->translateDate($row->DoB, $this->date_format);
			if (!empty($row->DoB) && !$date )
			{
				$this->message("IP: bad birth date: " . $row->DoB . "at row " . $row->csvrownum);
				$row->DoB = NULL;
			}
			else{
				$row->DoB = $date;
			}
		}

	}

}
