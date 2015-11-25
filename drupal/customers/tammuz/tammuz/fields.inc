<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



//implements hook_field_format_alter which is a hook we invented in intoto
function tammuz_field_format_alter(&$element)
{
	intoto_field_format_alter_dispatcher($element);
}

//implements hook_field_preformat_alter which is a hook we invented in intoto
function tammuz_field_preformat_alter(&$element)
{
	intoto_field_format_alter_dispatcher($element);
}

/* 
 * implements hook_field_format_alter which is a hook we invented in intoto
 * structure of function name: 
 * module (tammuz)
 * hook name (field_format)
 * alter
 * function_part[0] = field_type (name)
 * function_part[1] = field_name (contact_name)
 * function_part[2] = bundle (journey)
 */
function tammuz_field_format_alter_name_contact_name_journey(&$element)
{

	// a journey name is only its ordinal in relation to the customer.
	$customer_entity_container = intoto_get_related_contacts($element['entity']->contact_id, 'participate_in');
	$customer_name = "Unknown Customer";
	foreach($customer_entity_container as $id=>$entity)
	{
		if ($entity->type == 'customer'){
			$entity_wrapper = entity_metadata_wrapper('crm_core_contact', $entity);
			$customer_name = $entity_wrapper->{"field_caption"}->value();
		}
	}
	
	$element['value']['given'] = t("@customer_name - Journey #@journey_id", 
			[
				"@customer_name" => $customer_name, 
				"@journey_id" => $element['value']['given']
			]
		);
	
}


/* 
 * implements hook_field_format_alter which is a hook we invented in intoto
 * structure of function name: 
 * module (tammuz)
 * hook name (field_format)
 * alter
 * function_part[0] = field_type (text)
 * function_part[1] = field_name (field_customer_number)
 * function_part[2] = bundle (customer)
 */
function tammuz_field_format_alter_text_field_customer_number_customer(&$element)
{
	$element['value'] = "#" . $element['value'];  // customer number shold be shown as #2045 instead of just 2045
}


/* 
 * implements hook_field_format_alter which is a hook we invented in intoto
 * structure of function name: 
 * module (tammuz)
 * hook name (field_latest_activity)
 * alter
 * function_part[0] = field_type (text)
 * function_part[1] = field_name (field_latest_activity)
 * function_part[2] = bundle (journey)
 */
function tammuz_field_format_alter_text_field_latest_activity_journey(&$element)
{
//	dpm($element);
	$element['value'] = "temp value"; 
//	$activities_ids = intoto_get_latest_activity($element['entity']->contact_id, ['embryo_transfer']);
//	dpm($activities_ids);
}




// this looks like a hook, but it's just a callback needed by 'computed_field' module
function computed_field_field_latest_activity_compute(&$entity_field, $entity_type, $entity, $field, $instance, $langcode, $items)
{
	$activities_ids = intoto_get_latest_activity($entity->contact_id, ['embryo_transfer']);
	if (!isset($activities_ids['crm_core_activity']))
	{
		return;
	}
	
	$activity_entities = entity_load('crm_core_activity', array_keys($activities_ids['crm_core_activity']));
	$entity_field = [];
	foreach ($activity_entities as $activity_entity)
	{
		$entity_field[] = ['value' => $activity_entity];
	}
}

/* 
 * implements hook_field_preformat_alter which is a hook we invented in intoto
 * structure of function name: 
 * module (tammuz)
 * hook name (field_preformat)
 * alter
 * function_part[0] = field_type (computed)
 * function_part[1] = field_name (field_latest_activity)
 * function_part[2] = bundle (journey)
 */
function tammuz_field_preformat_alter_computed_field_latest_activity_journey(&$element)
{
	//the field we need is type=computed; name=field_latest_activity, but actually we try to proxy a field
	// (field_activity_date) of the relevant activity. So we replace everything so it looks as if the field is the proxied one.
	//this is doing something similar to entity reference - output fields of other entity (activity) as if it was integral in this entity

	$activity_entity = $element['element']['value'];
	//we need the label of the bundle
	$activity_bundle_label = "";
	$bundles = field_info_bundles('crm_core_activity');
	if (isset($activity_entity->type) && isset ($bundles[$activity_entity->type]))
	{
		$activity_bundle_label = $bundles[$activity_entity->type]['label'];
	}else{
		$activity_bundle_label = $activity_entity->type;
	}
	
	$element['entity'] = $activity_entity;
	$element['entity_type'] = 'crm_core_activity';
	$element['bundle'] = $activity_entity->type;
	$element['field'] = field_info_field('field_activity_date');
	$element['element'] = $activity_entity->field_activity_date['und'][0];
	$element['label'] = $activity_bundle_label;

}
