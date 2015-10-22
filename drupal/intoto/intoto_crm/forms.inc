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
// uncomment to show form_id inside each form 
	$form['form_id_debug'] = array(
		'#markup' => "<b>form_id:</b>:$form_id", 
	);
	//dpm($form, "form $form_id");

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

function intoto_crm_form_crm_core_relationship_form_alter(&$form, &$form_state, $form_id)
{
	//$form['#submit'] = ['intoto_crm_main_search_form_submit'];
	dpm($form);
	
	
	//this form is usually embedded in a contact's page, no need to see where it is being related from
	$fields = ['source_contact', 'destination_contact'];
	if (isset($form['reverse']['#value']))
	{
		if(isset($form[$fields[$form['reverse']['#value']]]))
		{
			$form[$fields[$form['reverse']['#value']]] ['#type'] = 'value'; //instead of textfield , which means HIDE it.
		}
	}
	
	if (isset($form['actions']['submit']['#value']))
	{
		$form['actions']['submit']['#value'] = "Add hou";
		$form['actions']['submit']['#validate'] = $form['#validate'];
		unset($form['#validate']);
	}
	
	if (!isset($form['actions']))
	{
		$form['actions'] = [];
	}
	
	$form['actions']['add_new'] = 
	[
		'#type' => 'submit',
		'#value' => 'Add New',
		'#submit' => ['intoto_crm_create_new_relationship_cb'],
		'#executes_submit_callback' => TRUE,
		'#validate' => [],
		'#limit_validation_errors' => array(),
			];
	
	unset ($form['crm_core_relationship_status']); // this is the unneeded 'active' checkbox
	dpm($form);
}

function intoto_crm_create_new_relationship($entity, $relationship_type, $reverse, $target_type)
{
	// Default empty Contact

	$prefix_to_remove = "crm_core_contact:";
	$loc = strlen($prefix_to_remove);
	if (substr ($target_type, 0, $loc) == $prefix_to_remove) {
		$target_type = substr($target_type , $loc);
	}
	$values = [
		'type' => $target_type,
		"relationship" => 
			[
				'relation_type' => $relationship_type,
				'reverse' => $reverse,
				'source' => $entity,
			],
		];

	$contact = entity_create('crm_core_contact', $values);
	$form = drupal_get_form('crm_core_contact_ui_form', $contact);
	return $form;
}

function intoto_crm_form_crm_core_contact_ui_form_alter(&$form, &$form_state, $form_id)
{
	dpm($form, "form");
	dpm($form_state, "form_state");
	dpm($form_id, "form_id");
	
	if (isset($form_state['build_info']['args'][0]->relationship))
	{
		$form['title'] = [
			'#markup' => "<h2>Add to household</h2>",
		];
		$form['actions']['submit']['#submit'][] = 'intoto_crm_add_relation_to_contact';
	}
}

function intoto_crm_add_relation_to_contact($form, &$form_state)
{
	dpm($form, "intoto_crm_add_relation_to_contact (form)");
	dpm($form_state, "intoto_crm_add_relation_to_contact (form_state)");
	dpm($form_state['crm_core_contact'], "intoto_crm_add_relation_to_contact (contact)");
	$reverse = $form_state['crm_core_contact']->relationship['reverse'];
	
	$new_contact = [];
	$new_contact['entity_type'] = 'crm_core_contact';
	$new_contact['entity_id'] = $form_state['crm_core_contact']->contact_id;
	$new_contact['entity_bundle'] = $form_state['crm_core_contact']->type;
	$new_contact['r_index'] = 1 - $reverse;
	$new_contact['entity_key'] = $new_contact['entity_type'] . ':' . $new_contact['entity_id'];

	$old_contact_entity_obj = $form_state['crm_core_contact']->relationship['source'];
	$old_contact['entity_type'] = 'crm_core_contact';
	$old_contact['entity_id'] = $old_contact_entity_obj->contact_id;
	$old_contact['entity_bundle'] = $old_contact_entity_obj->type;
	$old_contact['r_index'] = $reverse;
	$old_contact['entity_key'] = $old_contact['entity_type'] . ':' . $old_contact['entity_id'];
			

	$relationship_type = $form_state['crm_core_contact']->relationship['relation_type'];
//	
////  $source_contact = _crm_core_relationship_ui_get_contact_from_autocomplete_field_value($form_state['values']['source_contact']);
////  $destination_contact = _crm_core_relationship_ui_get_contact_from_autocomplete_field_value($form_state['values']['destination_contact']);
//
// Create relationship between the order and the node
	$endpoints = array(
		(1 - $reverse) => $new_contact,
		$reverse=> $old_contact,
	);
	$relation = relation_create($relationship_type, $endpoints);
	$rid = relation_save($relation);
	dpm($relation, "relation");
	dpm($rid, "rid");
	//$form_state['relation'] = $relation;	
}


function intoto_crm_create_new_relationship_cb($form, &$form_state)
{
	if (isset($form['contact_id']['#value']) && isset($form['#bundle']) && isset($form['reverse']['#value'])){
		$contact_id = $form['contact_id']['#value'];
		$relationship_type = $form['#bundle'];
		$reverse = $form['reverse']['#value'];
		
		$types = relation_get_types(array($relationship_type));
		$current_type = array_pop($types);
		// Default empty Relation.
//		$values = array(
//			'relation_type' => $type,
//			'uid' => $user->uid,
//			'title' => '',
//			'reverse' => $reverse,
//			'directional' => $current_type->directional,
//			'r_unique' => $current_type->r_unique,
//			'source_bundles' => $current_type->source_bundles,
//			'target_bundles' => $current_type->target_bundles,
//			'label' => $current_type->directional && $reverse ? $current_type->reverse_label : $current_type->label,
//		);
		$direction_descr = ['target_bundles', 'source_bundles'][$reverse];
		$bundles = $current_type -> $direction_descr;
		if (count($bundles) != 1)
		{
			drupal_set_message(t("can't figure our which type of contact to create: " . join(", ", $bundles)));
		}
		$related_contact_type = $bundles[0];
		
		$form_state['redirect'] = "crm-core/contact/$contact_id/new_related/$relationship_type/$reverse/$related_contact_type";
	}else
	{
		drupal_set_message("Missing arguments for adding related contact");
	}
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
