<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * A migration that is reused for each source CSV file.
 */
class SurrogatesMigration extends IndividualsMigration {
	public function __construct($arguments) {
		parent::__construct($arguments);
	}

	public function AddFieldMappings()
	{
		$this->addFieldMapping('contact_name','name_first');  //based on migrate_extra (see name.inc)
		$this->addFieldMapping('contact_name:given'); //empty mapping
		$this->addFieldMapping('contact_name:middle'); //empty mapping
		$this->addFieldMapping('contact_name:family', 'name_last');
		$this->addFieldMapping('contact_name:generational'); //empty mapping
		$this->addFieldMapping('contact_name:credentials'); //empty mapping

		$this->addFieldMapping('field_surrogate_number', 'surrogate_number');
		

//		$this->addFieldMapping('field_address'); //empty mapping - being taken care of in addresses.inc
//		$this->addFieldMapping('field_address:revision_id'); //empty mapping - being taken care of in addresses.inc
//
//		$this->addFieldMapping('field_instant_messaging_collecti'); //empty mapping - being taken care of in instant_messaging.inc
//		$this->addFieldMapping('field_instant_messaging_collecti:revision_id'); //empty mapping - being taken care of in instant_messaging.inc
//
//		$this->addFieldMapping('field_phone'); //empty mapping - being taken care of in phone.inc
//		$this->addFieldMapping('field_phone:revision_id'); //empty mapping - being taken care of in phone.inc
//		
//		$this->AddFieldMapping('field_marital_status', 'marital_status');
//		
//		$this->AddFieldMapping('field_date_of_birth', 'date_of_birth');
//		$this->AddFieldMapping('field_date_of_birth:timezone');  //empty mapping
//		$this->AddFieldMapping('field_date_of_birth:to');  //empty mapping
//		$this->AddFieldMapping('field_date_of_birth:rrule');  //empty mapping
		
	}


	protected function csvcolumns() {
		// Note: Remember that columns are zero based
		$columns = array();
		return $columns;
	}
	

	public function prepareRow($row) {
		$row->last_change = time();   // now is the update time of change

		//print_r($row);
		$name_split = [];

		//splitting first name / last name
		$name_less_spaces = trim(preg_replace('!\s+!', ' ', $row->surrogate_name));
		if (empty($name_less_spaces))
		{
		  $this->message("missing name for surrogate");
		}else
		{
			$name_split = explode(" ", $name_less_spaces);
			$row->name_first = ucfirst(strtolower(array_shift($name_split)));
			$row->name_last = ucfirst(strtolower(array_pop($name_split)));
			while (count($name_split) > 0)
			{
				$this->message("Needs to review first/last name: " . $row->surrogate_name);
				$row->name_first .= " " .ucfirst(strtolower(array_shift($name_split)));
			}
		}
		
//		$date = $this->translateDate($row->date_of_birth);
//		if (!empty($row->date_of_birth) && !$date )
//		{
//			$this->queueMessage("bad birth date: " . $row->date_of_birth);
//		}
//		else{
//			$row->date_of_birth = $date;
//		}

	}
}
