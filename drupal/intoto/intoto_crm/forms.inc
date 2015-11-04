<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

require_once drupal_get_path('module', 'crm_core_contact_ui') . '/crm_core_contact_ui.pages.inc';




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
}

function intoto_crm_form_alter(&$form, &$form_state, $form_id)
{
	if (!array_key_exists('post_submit_instructions', $form_state))
	{
		$form_state['post_submit_instructions'] = [];
	}
    switch($form_id) {
		case 'crm_core_contact_ui_form':
			$contact_type = $form['#entity']->type;
			switch($contact_type){
				case "customer": 
//				case 
					$form['contact_name']['#access'] = FALSE;
					$form['field_originally_came_from']['#access'] = FALSE;
					break;
			}
			if (isset($form["#submit"])) {$form["#submit"][] = "intoto_crm_override_submit";}
			if (isset($form['actions']['submit']['#submit'])) {$form['actions']['submit']['#submit'][] = "intoto_crm_override_submit";}
			$form_state['post_submit_instructions'][] = ['id' => "redirect_to_newly_created_contact"];
			break;
		case 'crm_core_activity_edit_comment_form':
		case 'crm_core_relationship_form':
			if (isset($form["#submit"])) {$form["#submit"][] = "intoto_crm_override_submit";}
			if (isset($form['actions']['submit']['#submit'])) {$form['actions']['submit']['#submit'][] = "intoto_crm_override_submit";}
			$form_state['post_submit_instructions'][] = ['id' => "redirect_to_url", 'url' => current_path()];
			
			break;
    }
// uncomment to show form_id inside each form 
//	$form['form_id_debug'] = array(
//		'#markup' => "<b>form_id:</b>:$form_id", 
//	);
}

/*
 * override original form submit implementation
 */
function intoto_crm_override_submit($form, &$form_state)
{
	if (isset($form_state['post_submit_instructions']))
	{
		foreach($form_state['post_submit_instructions'] as $instruction)
		{
			switch($instruction ['id']) 
			{
				case "redirect_to_newly_created_contact":  
					/* this is because crm-core form hook crm_core_contact_ui_form_submit sets redirect to crm-core/contact
					 * instead to the newly created contact. this fixes it.
					 */
					$contact = &$form_state['crm_core_contact'];	
					$form_state['redirect'] = "crm-core/contact/{$contact->contact_id}";
					break;
				case "redirect_to_url": //go to a specific url

					$url = $instruction['url'];
					$form_state['redirect'] = $url;
					break;
				default:

			}
		}
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
                    $btn_classes = ["btn", "btn-success"];
					$destination = drupal_get_destination();
					$destination  = $destination['destination'];
					$form['static_placeholder'] =  array(
						'#markup' =>	l (t('Add a Comment'),
												$href,
												[
													'query' => [
														'destination' => $destination
													],
													'attributes' => [
														'class' => $btn_classes,
													],
												]
											),
					);
                }

		
	}
	return $form;
}


function intoto_crm_main_search_form($form) {
	
//	$form['static_placeholder'] =  array(
//		'#markup' =>t('Place holder...'),
//	);
	$form['search_api_views_fulltext'] = array(
		'#type' => 'textfield',
//		'#title' => t('Search'),
		'#default_value' => 'search contacts',
		'#size' => 12,
		'#maxlength' => 100,
		'#description' => t("Enter list of keywords to search"),
		'#required' => TRUE,
	);
	
//	$form['submit'] = array(
//		'#type' => 'submit',
//		'#value' => t('Search'),
//	);
	
	return $form;
}
function intoto_crm_main_search_form_submit($form, &$form_state)
{
	$strings = $form_state['input']['search_block_form'];
	$form_state['redirect'] = //"report/customer/$strings";
		[
			"search-contacts",
			['query' => array(
				'search_api_views_fulltext' => $strings,
			)],
		];
	drupal_redirect_form($form_state);
}

function intoto_crm_form_intoto_crm_main_search_form_alter(&$form, &$form_state, $form_id)
{
	$form['#theme_wrappers'] = array('bootstrap_search_form_wrapper');
	
	//bootstrap_form_alter($form, $form_state, "search_form");
}


function intoto_crm_form_search_block_form_alter(&$form, &$form_state, $form_id)
{
	$form['#submit'] = ['intoto_crm_main_search_form_submit'];
	
	//bootstrap_form_alter($form, $form_state, "search_form");
}




function KEEP_intoto_crm_add_related_form($form, &$form_state, $base_entity, $relation, $relation_index, $bundle) {
{
	$contact_id = $base_entity;

  	if (is_object($base_entity)){
		$contact_object = $base_entity->data;
		$contact_id = $contact_object->contact_id;
	}
//	$inner_form = drupal_get_form('intoto_crm_add_related_form');
	$inner_form = crm_core_relation_entity_ui_get_form_wrapper($base_entity->data, 'crm_member', 1);
	$form += $inner_form;
	$btn_classes = "btn btn-xs btn-default disabled";
	$href = "#";
	if (user_access('create relation entities of any contact relationship')
			||
			false //should look for specific permission such as "create relation entities of bundle crm_employee"
	)
	{
		$href = "/crm-core/contact/$contact_id/$relation/add";
		$btn_classes = "btn btn-success";
	}

	$form['static_placeholder'] =  array(
			'#markup' =>	l (t('Press here'), $href, array('attributes' => array('class' => array($btn_classes)))).
							" to add a member to this household.",
		);
	}
	
	$form['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Submit'),
	);	
	
	
//	$form['#submit'][] = 'intoto_crm_add_related_form_submit';
//	unset($form['actions']);
//	unset($form['#action']);
	dpm($form);
	return $form;	
}



function KEEP_intoto_crm_add_related_form_submit($form, &$form_state) {
	$relationship_type = $form_state['values']['relationship_type'];
	$reverse = $form_state['values']['reverse'];

	$source_contact = _crm_core_relationship_ui_get_contact_from_autocomplete_field_value($form_state['values']['source_contact']);
	$destination_contact = _crm_core_relationship_ui_get_contact_from_autocomplete_field_value($form_state['values']['destination_contact']);

	$relation = $form_state['relation'];
	$rid = relation_save($relation);

	field_attach_submit('relation', $relation, $form, $form_state);

	$redirect_contact = $reverse ? $destination_contact : $source_contact;
	$form_state['redirect'] = 'crm-core/contact/' . $redirect_contact->contact_id . '/relationships/';
}
