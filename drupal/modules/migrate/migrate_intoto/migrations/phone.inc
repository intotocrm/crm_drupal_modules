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
	}

	public function AddFieldMappings()
	{
		$this->addFieldMapping('host_entity_id', 'id')->sourceMigration($this->base_migrate);

//		$this->addFieldMapping('field_number', 'phone')->callbacks(array($this,print_me));
		$this->addFieldMapping('field_number')
				->defaultValue('il')
				->callbacks(array($this,print_me));
		$this->addFieldMapping('field_number:number', 'phone');
//		$this->addFieldMapping('field_number:country_codes')->defaultValue('i'); //@todo change according to number prefix or address (country)
	}
	
	public function DestinationKey()
	{
		return MigrateDestinationFieldCollection::getKeySchema();
	}
	
	public function csvcolumns() {
		// Note: Remember that columns are zero based
		//customer_id	id	name_first	name_last	email	phone	dob
		$columns = array();
		return $columns;
	}	
    public function prepareRow($row) {

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
