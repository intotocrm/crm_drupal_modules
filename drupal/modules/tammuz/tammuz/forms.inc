<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function tammuz_add_journey_form($form, &$form_state, $contact) {
	if (is_object($contact)){
		
		$contact_object = $contact->data;
		$contact_id = $contact_object->contact_id;
		$num_relations = relation_query('crm_core_contact', $contact_id, 0)
			->propertyCondition('relation_type', 'participate_in')
			->count()
			->execute();
		
		if ($num_relations == 0){
			$form['static_placeholder'] =  array(
				'#markup' =>	l (t('Press here'), "/crm-core/contact/$contact_id/journey/add", array('attributes' => array('class' => array('btn btn-xs btn-success')))).
								" to add a journey to this customer.",
			);
		}
	}
	return $form;
}



