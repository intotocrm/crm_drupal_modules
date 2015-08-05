<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * A migration that is reused for each source CSV file.
 */
class RelationsMigration extends IntotoMigration {
	public function __construct($arguments) {
		parent::__construct($arguments);
		//  print "creating CustomersMigration for type $bundle<br>\n";
		$this->description = t('Import ' . $this->bundle . ' relation entities from CSV file.');
		$this->destination = new MigrateDestinationRelation($this->bundle);
		$this->src_bundle = $arguments['src_bundle'];
		$this->dst_bundle = $arguments['dst_bundle'];
	}

	public function AddFieldMappings()
	{
		$this->addFieldMapping('source_id', 'id')->sourceMigration("ip");  //too hard-coded
		$this->addFieldMapping('destination_id', 'customer_id')->sourceMigration("customer");  //too hard-coded
	}
	
	public function DestinationKey()
	{
		return MigrateDestinationRelation::getKeySchema();
	}
	

	public function csvcolumns()
	{
		// Note: Remember that columns are zero based
		//customer_id	id	name_first	name_last	email	phone	dob
		$columns = array();
		return $columns;
	}

	public function prepareRow($row)
	{
		//drush_print("in prepareRow: row:" . print_r($row, true));
	}
	
	public function prepare(stdClass $relation, stdClass $source_row)
	{
//		drush_print("in prepare: row:" . print_r($source_row, true));
//		drush_print("in prepare: relation:" . print_r($relation, true));
		drush_print("source_id:" . $relation->source_id);
		drush_print("destin_id:" . $relation->destination_id);
		$relation->endpoints[LANGUAGE_NONE] = array(
			array(
				'entity_type' => "crm_core_contact",
				'entity_bundle' => $this->src_bundle,
				'entity_id' => $relation->source_id
				),
			array(
				'entity_type' => "crm_core_contact",
				'entity_bundle' => $this->dst_bundle,
				'entity_id' => $relation->destination_id
				),
		);
	}
}
