<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



class InstantMessagingMigration extends TammuzMigration{   // learn from https://www.drupal.org/node/1900640 about field collections migration
  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->description = t('instant messaging type and id for individuals as field-collections.');
    $this->destination = new MigrateDestinationFieldCollection(
      'field_instant_messaging_collecti',
      array('host_entity_type' => 'crm_core_contact')
    );

  }
	public function AddFieldMappings()
	{
		$this->addFieldMapping('host_entity_id', 'id')->sourceMigration($this->base_migrate);
		$this->addSimpleMappings(array(
			'field_instant_messaging_type',
			'field_instant_messaging_id',
		));
	}
	
	public function DestinationKey()
	{
		return MigrateDestinationFieldCollection::getKeySchema();
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