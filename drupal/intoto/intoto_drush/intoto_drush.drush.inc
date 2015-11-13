<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Implements hook_drush_command().
 */
function intoto_drush_drush_command() {

  $items['intoto-drush-command'] = array(
    'description' => 'Demonstrate how Drush commands work.',
    'aliases' => array('idc'),
	'arguments' => array(
	  'type' => 'The type of statement (error or success).',
	),
	'options' => array(
	  'repeat' => 'The number of statement repeats.',
	),	  
  );

  $items['hook-implementation'] = array(
    'description' => 'Lists all module that implements a hook.',
    'aliases' => array('hi'),
	'arguments' => array(
	  'hookname' => 'The hookname to look for.',
	),
	'options' => array(
	  'code' => 'Also show implementation code.',
	),	  
  );
  
  $items['contact'] = array(
    'description' => 'Show content of crm-core contact.',
    //'aliases' => array(''),
	'arguments' => array(
	  'id' => 'The contact id.',
	),
//	'options' => array(
//	  'code' => 'Also show implementation code.',
//	),	  
  );
  return $items;
}

/**
 * Callback for the drush-demo-command command
 */
function drush_intoto_drush_command() {
  demo_drush_print_statement();
}




function demo_drush_print_statement($type = FALSE) {
	$repeat = drush_get_option('repeat', 1);
	drupal_set_message(t('Hello world!'));
}

function KEEP_drush_intoto_drush_intoto_hook_implementation($hookname)
{
	print "modules implementing hook $hookname:\n";
	$modules = module_implements($hookname);
	foreach($modules as $module){
		print "$module\n";
	}
}



function drush_intoto_drush_hook_implementation($hook) { //copied and changed from devel.drush.inc
	// Get implementations in the .install files as well.
	include_once './includes/install.inc';
	drupal_load_updates();
	$code = drush_get_option('code', 0);
	if ($hook_implementations = module_implements($hook)) {
		foreach($hook_implementations as $module){
			print "module: $module\n";
			if ($code)
			{
				print "---------------$code\n";
				print drush_devel_fn_view($module . "_$hook");
				print "\n\n";
			}
	  }
	}
	else {
	  drush_log(dt('No implementations.'), 'ok');
	}
}

function _keep_wrapper_debug($w, $depth = 0) {
	$values = array();
	foreach ($w->getPropertyInfo() as $key => $val) {
//		print "wrapper:".get_class($w->$key)."\n";

		if (isset($w->$key) && is_object($w->$key) && 
				(
					get_class($w->$key) == "EntityListWrapper"
//				|| 
//					get_class($w->$key) == "EntityValueWrapper"
				)
				&& $depth < 12)
		{
			//print "-----------------key:$key recurse\n";
			foreach($w->$key as $in_key => $in_value)
			{
				$values [$key][$in_key] = _wrapper_debug($in_value, $depth + 1);
			}
		}elseif (in_array($key, 
				[
		//			'field_customer_origin', 
					'relation_member_crm_core_contact_reverse', 
					'relation_member_crm_core_contact', 
					'relation_participate_in_crm_core_contact_reverse', 
					'relation_participate_in_crm_core_contact'

				])
			)
		{

		}
		elseif(is_object($w->$key) && in_array(get_class($w->$key) , ['FieldCollectionItemEntity']))
		{
				$w2 = entity_metadata_wrapper('field_collection_item', $w->$key);
				$values[$key . "_entity_object!!!"] = _wrapper_debug($w2, $depth + 1);
			//print "adding:\n";
			//print_r($w->$key);
		}
		else{
			$values[$key] = $w->$key->value();
		}
	}
	return $values;
}

function _wrapper_debug($w, $depth = 0)
{
	
	$values = [];
	foreach ($w->getPropertyInfo() as $key => $val)
	{
		if (!in_array($key, 
			[
				'field_customer_origin', 
//				'relation_member_crm_core_contact_reverse', 
//				'relation_member_crm_core_contact', 
//				'relation_participate_in_crm_core_contact_reverse', 
//				'relation_participate_in_crm_core_contact'
			])
		)
		{
			$values[$key] = $w->$key->value();
		}
	}
	
	return $values;
}
function drush_intoto_drush_contact($id)
{
	$entities = entity_load('crm_core_contact', array($id));
	//print_r($entities);
	$contact_wrapper = entity_metadata_wrapper('crm_core_contact', $entities[array_keys($entities)[0]], ['bundle' => 'customer']);
	print "type:" . $contact_wrapper->type() . "\n";
	print_r($contact_wrapper->info());
	//print_r($contact_wrapper->raw());
	$wrapper_debug_info = _wrapper_debug($contact_wrapper);
//	foreach ($wrapper_debug_info as $key => $info)
//	{
//		print "[$key] => ";
//		print_r($info);
//	}
	//print_r(array_keys($wrapper_debug_info));
	print_r($wrapper_debug_info);
	print "\n";
	
}
