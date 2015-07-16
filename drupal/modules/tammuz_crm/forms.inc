<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function tammuz_crm_add_household_form($form, &$form_state, $contact) {
  // Provide a text field.
//  $form['household_id'] = array(
//    '#title' => t('Household contact ID'),
//	'#description' => "Please enter the ID of the household contact to which this contact should belong.",
//    '#type' => 'textfield',
//    '#required' => TRUE,
//
//	'#width' => '30%',
//	'#align' => 'left',
//	  
//  );
//  
//  $form['add_household'] = array(
//    '#type' => 'submit',
//    '#value' => t('Add to household'),
//  );
//dpm($contact);
	if (is_object($contact)){
		
		$contact_object = $contact->data;
		$contact_id = $contact_object->contact_id;
		$num_relations = relation_query('crm_core_contact', $contact_id, 0)
			->propertyCondition('relation_type', 'crm_member')
			->count()
			->execute();
		
		if ($num_relations == 0){
			$form['static_placeholder'] =  array(
				'#markup' =>	l (t('Press here'), "/crm-core/contact/$contact_id/household/add", array('attributes' => array('class' => array('btn btn-xs btn-success')))).
								" to add this contact to a household.",
			);
		}
	}
	return $form;
}

function tammuz_crm_add_household_form_submit($form, &$form_state) {
    drupal_set_message(t('The form has been submitted.') );
	dpm($form_state);
}

function tammuz_crm_form_alter(&$form, &$form_state, $form_id)
{
//	drupal_set_message("form id:" . $form_id);
    switch($form_id) {
		case 'crm_core_contact_ui_form':
//			dpm($form);
//			dpm($form_state);
			$contact_type = $form['#entity']->type;
			switch($contact_type){
				case "customer": 
//				case 
					$form['contact_name']['#access'] = FALSE;
					break;
			}
			break;
    }
}