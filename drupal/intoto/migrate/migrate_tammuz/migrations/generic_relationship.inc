<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * A migration that is reused for each source CSV file.
 */
class GenericRelationsMigration extends IntotoMigration {
	public function __construct($arguments) {
		//  print "creating CustomersMigration for type $bundle<br>\n";
		$this->description = t('Import ' . $this->bundle . ' relation entities from CSV file.');
		$this->src_bundle = $arguments['src_bundle'];
		$this->dst_bundle = $arguments['dst_bundle'];
		$this->src_column = $arguments['src_column'];
		$this->dst_column = $arguments['dst_column'];
		$this->field_prefix = isset($this->settings['field_prefix']) ? $this->settings['field_prefix'] : "";
		$this->arguments = $arguments;

		parent::__construct($arguments);

		$this->destination = new MigrateDestinationRelation($this->bundle);
	}

	public function AddFieldMappings()
	{

		$this->addFieldMapping('source_id', $this->src_column)->sourceMigration($this->arguments['src_migration']);
		$this->addFieldMapping('destination_id', $this->dst_column)->sourceMigration($this->arguments['dst_migration']);
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


//	public function prepareKey($source_key, $row)
//	{
//	}

	public function prepareRow($row)
	{
	}
	
	public function prepare(stdClass $relation, stdClass $source_row)
	{
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
