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
    $this->dependencies = array('egg_donor');

//    $columns = array(
//      array('id', 'Source ID'),
////      array('individual', 'Individual ID'), //no need this because id is same for individual and their address
//      array('field_instant_messaging_type', 'Type'),
//      array('field_instant_messaging_id', 'Id'),
//    );

    $this->source = new MigrateSourceCSV(
      $this->csv_path,
      array(),
      array('header_rows' => 1)
    );

    $this->destination = new MigrateDestinationFieldCollection(
      'field_instant_messaging_collecti',
      array('host_entity_type' => 'crm_core_contact')
    );
    $source_keys = $arguments['keys'];

    $this->map = new MigrateSQLMap($this->machineName, $source_keys, MigrateDestinationFieldCollection::getKeySchema() );

    $this->addFieldMapping('host_entity_id', 'id')->sourceMigration('egg_donor');
    $this->addSimpleMappings(array(
      'field_instant_messaging_type',
      'field_instant_messaging_id',
    ));
  }
  
  public function prepareRow($row) {
      //print_r($row);
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