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
		$this->field_prefix = isset($this->settings['field_prefix']) ? $this->settings['field_prefix'] : "";
		$this->arguments = $arguments;
	}

	public function AddFieldMappings()
	{
		$this->addFieldMapping('source_id', 'IP_id')->sourceMigration($this->arguments['src_migration']);
		$this->addFieldMapping('destination_id', 'customer_id')->sourceMigration($this->arguments['dst_migration']);
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

	
	static function static_get_field($prefix, $field, $row)
	{
		$field_name = $prefix . "_" . $field;
		return (isset ($row->$field_name)) ? $row->$field_name : NULL;
	}
	
	static function prepare_ip_key($prefix, $row) //this is not exactly as in IpsMigration. here we need customer_id and not put just X instead of missing ones.
	{
		$identifier = self::static_get_field($prefix, 'email', $row) ? self::static_get_field($prefix, 'email', $row) : (
							self::static_get_field($prefix, 'name_first_en', $row) ? self::static_get_field($prefix, 'name_first_en', $row) : (
								self::static_get_field($prefix, 'name_first', $row) ? self::static_get_field($prefix, 'name_first', $row): NULL
							)
						);
//		print "identifier: " . $identifier . "\n";
		
		if (isset($row->customer_id) && $row->customer_id && strlen(trim($identifier))>0) {
			
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
		$key = $this->prepare_ip_key($this->field_prefix, $row);
		
		if ($key == NULL){
			self::message('ip: no id in row with customer '. $row->customer_id . ' in line ' . $row->csvrownum);
		}
		
		return $key;
	}

	public function prepareRow($row)
	{
		$row_key = $this->prepareKey('IP_id', $row);
		if (!$row_key || $row_key['IP_id'] == 'skip')
		{
			return FALSE;
		}
		$row->IP_id = $row_key ['IP_id'];
		//drush_print("in prepareRow: row:" . print_r($row, true));
	}
	
	public function prepare(stdClass $relation, stdClass $source_row)
	{
//		drush_print("in prepare: row:" . print_r($source_row, true));
//		drush_print("in prepare: relation:" . print_r($relation, true));
//		drush_print("source_id:" . $relation->source_id);
//		drush_print("destin_id:" . $relation->destination_id);
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
