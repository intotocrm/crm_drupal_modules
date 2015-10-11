<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



class PhoneMigration extends IntotoMigration {  // learn from https://www.drupal.org/node/1900640 about field collections migration
	public function __construct($arguments) {
		parent::__construct($arguments);

		$this->description = t('Phone as field-collection for individuals.');

		$this->destination = new MigrateDestinationFieldCollection(
			'field_phone',
			array('host_entity_type' => 'crm_core_contact')
		);
		$this->field_prefix = isset($this->settings['field_prefix']) ? $this->settings['field_prefix'] : "";
	}

	public function AddFieldMappings()
	{
		
		$this->addFieldMapping('host_entity_id', 'IP_id')->sourceMigration($this->base_migrate);

//		$this->addFieldMapping('field_number', 'phone')->callbacks(array($this,print_me));
		$this->addFieldMapping('field_number')
				->defaultValue('il');
		$this->addFieldMapping('field_number:number', 'phone')->callbacks(array($this, "check_phone"));
//		$this->addFieldMapping('field_number:country_codes')->defaultValue('i'); //@todo change according to number prefix or address (country)
	}

	function check_phone($phone)
	{
		if (strlen($phone) > 15)
		{
			$this->message("check bad phone number: " . $phone);
			return NULL;
		}
		print "phone is:$phone\n";
		return $phone;
	}
	
	function get_field($field, $row)
	{
		return IpsMigration::static_get_field($this->field_prefix, $field, $row);
	}


	public function prepareKey($source_key, $row)
	{
		$key = IpsMigration::prepare_ip_key($this->field_prefix, $row);
					
		if ($key == NULL){
			self::message('ip: no id in row with customer '. $row->customer_id . ' in line ' . $row->csvrownum);
		}
		
		return $key;
	}
	
	
	
	public function DestinationKey()
	{
		return MigrateDestinationFieldCollection::getKeySchema();
	}
	
    public function prepareRow($row) {
		$row_key = $this->prepareKey('IP_id', $row);
		if (!$row_key || $row_key['IP_id'] == 'skip')
		{
			return FALSE;
		}
				
		$row->IP_id = $row_key ['IP_id'];
		foreach($this->codedFieldMappings as $mapping_key => $mapping)
		{
			$source_field = $mapping->getSourceField();
			if ($source_field && $this->get_field($source_field, $row)){
				$row -> $source_field = $this->get_field($source_field, $row);
			}
			//print "$mapping_key->" . $row->$mapping_key ."\n";
		}
		
    }
	
	public function prepare($entity, stdClass $row) {  //	https://www.drupal.org/node/2487618
		//    parent::prepare($entity, $row);
		// The field collection migration code will have loaded an old revision of
		// the host entity; when it saves the host entity, old field values will
		// overwrite the current ones. Set the most recent revision as the host
		// entity instead.
		if ($hosts = entity_load($entity->hostEntityType(), array($entity->hostEntityId()))) {
			$host = reset($hosts);
			$entity->updateHostEntity($host);
		}
	}

}
