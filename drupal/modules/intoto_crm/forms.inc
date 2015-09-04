<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

function intoto_crm_add_household_form($form, &$form_state, $contact) {
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

function intoto_crm_add_household_member_form($form, &$form_state, $contact) {
  	if (is_object($contact)){
		$contact_object = $contact->data;
		$contact_id = $contact_object->contact_id;
                $btn_classes = "btn btn-xs btn-default disabled";
                $href = "#";
		if (user_access('create relation entities of any contact relationship')
                        ||
                        false //should look for specific permission such as "create relation entities of bundle crm_employee"
                        )
                {
                    $href = "/crm-core/contact/$contact_id/household_member/add";
                    $btn_classes = "btn btn-success";
                }

                $form['static_placeholder'] =  array(
			'#markup' =>	l (t('Press here'), $href, array('attributes' => array('class' => array($btn_classes)))).
							" to add a member to this household.",
		);
	}
	return $form;
}

function intoto_crm_add_household_form_submit($form, &$form_state) {
    drupal_set_message(t('The form has been submitted.') );
	dpm($form_state);
}

function intoto_crm_form_alter(&$form, &$form_state, $form_id)
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
					$form['field_originally_came_from']['#access'] = FALSE;
					break;
			}
			break;
    }
}


function  intoto_crm_settings_form()
{
	$form = array();

	$form['onthisdate_maxdisp'] = array(
		'#type' => 'textfield',
		'#title' => t('Maximum number of links'),
		'#default_value' => variable_get('onthisdate_maxdisp', 3),
		'#size' => 2,
		'#maxlength' => 2,
		'#description' => t("The maximum number of links to display in the block."),
		'#required' => TRUE,
	);

	return system_settings_form($form);
}



function intoto_crm_add_comment_form($form, &$form_state, $contact) {
	if (is_object($contact)){
		$contact_object = $contact->data;
		$contact_id = $contact_object->contact_id;
                $btn_classes = "btn btn-xs btn-default disabled";
                $href = "#";
		if (user_access('edit any crm_core_contact entity')
                        ||
                        false //should look for specific permission such as "edit any crm_core_contact entity of bundle organization"
                        )
                {
                    $href = "/crm-core/contact/$contact_id/activity/add/comment";
                    $btn_classes = "btn btn-success";
                }

		
		$form['static_placeholder'] =  array(
			'#markup' =>	l (t('Add a Comment'), $href, array('attributes' => array('class' => array($btn_classes)))),
		);
	}
	return $form;
}
