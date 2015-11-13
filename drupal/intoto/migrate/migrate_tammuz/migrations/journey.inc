<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * A migration that is reused for each source CSV file.
 */
class JourneysMigration extends IntotoMigration {
	public function __construct($arguments) {
		parent::__construct($arguments);
		//  print "creating CustomersMigration for type $bundle<br>\n";
		$this->description = t('Import ' . $this->bundle . ' from CSV file.');

		$this->destination = new MigrateDestinationCRMCoreContact($this->bundle);
	}
	public function AddFieldMappings()
	{
		$this->addFieldMapping('field_id', 'journey_line_number');
	}
	
	public function DestinationKey()
	{
		return MigrateDestinationCRMCoreContact::getKeySchema();
	}
	

	public function csvcolumns() {
		// Note: Remember that columns are zero based
		$columns = array();
		return $columns;
	}
	

	public function prepareRow($row) {
		$row->last_change = time();   // now is the update time of change
//		if (strlen(trim($row->customer_id)) == 0){
//			return FALSE;
//		}
	}
}
