<?php



/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



function intoto_generic_function_dispatcher($function_parts, $arguments, $depth = 1)
{
	$trace = debug_backtrace();
	$caller = $trace[$depth];
	$function_prefix = $caller['function'];
	while(count($function_parts) > 0)
	{
		$function = $function_prefix . "_" . (join("_", $function_parts));

		if (function_exists($function)){
			return call_user_func_array($function, $arguments);
		}
		array_pop($function_parts);  // we didn't find the specific function definition, look for something more generic
	}
	return FALSE;
}



/*use this for example like this:
 * fucntion MYMODULE_entity_presave_ENTITY_BUNDLE($entity, $type)
 * {
 *		do something
 * }
 * 
 * function MYMODULE_entity_presave($entity, $type)
 * {
 *   intoto_entity_generic_function_dispatcher($entity, $type)
 * }
 */

function intoto_entity_generic_function_dispatcher($entity, $type)
{
	if (isset($type)){
		$entity_wrapper = entity_metadata_wrapper($type, $entity);
		$functions_parts = [$type];
		if(isset($entity_wrapper->{"type"}))
		{
			$functions_parts[] = $entity_wrapper->{"type"}->value();
		}
		return intoto_generic_function_dispatcher($functions_parts, [$entity_wrapper], 2);
	}				
}


//implements hook_field_format_alter which is a hook we invented in intoto
function intoto_field_format_alter_dispatcher(&$element)
{
	$function_parts = [];
	if (isset($element['field']['type']))
	{
		$function_parts[] = $element['field']['type'];
	}
	if (isset($element['field']['field_name']))
	{
		$function_parts[] = $element['field']['field_name'];
	}
	if (isset($element['entity']->type))
	{
		$function_parts[] = $element['entity']->type; //this is bundle
	}

	
	$arguments = [&$element];
	intoto_generic_function_dispatcher($function_parts, $arguments, 2); //2 because this is a function being called by a function that is being the base for the implementatin
}





function intoto_count_relations($base_contact, $relation_name)
{
	return relation_query('crm_core_contact', $base_contact)
		->propertyCondition('relation_type', $relation_name)
		->count()
		->execute();
}

function intoto_get_related_contacts($base_contact, $relation_name)
{
	$ret = [];
	$query_results = relation_query('crm_core_contact', $base_contact)
			->propertyCondition('relation_type', $relation_name)
			->execute();
	
	$relations = relation_load_multiple(array_keys($query_results));
	foreach($relations as $rel)
	{
		$ep = relation_get_endpoints($rel);	
		foreach($ep as $type => $endpoints){
			unset($endpoints[$base_contact]); // don't return self
			$ret = $ret + $endpoints;
		}
		//$ret = $ret + $$query_results[$type];
	}
	return $ret;	
}

function intoto_get_latest_activity($base_contact, $activity_types)
{
	$query = new EntityFieldQuery();
	$query->entityCondition('entity_type', 'crm_core_activity')
	->entityCondition('bundle', $activity_types)
	->fieldCondition('field_activity_participants', 'target_id', $base_contact, '=')
//	->propertyOrderBy('weight')
			;
	$result = $query->execute();
	return $result;
}


function intoto_get_hard_coded_views($module_name) {
  $files = file_scan_directory(drupal_get_path('module', $module_name). '/views', '/.*view.*/');
  $views = [];
  foreach ($files as $absolute => $file) {
    require $absolute;
    if (isset($view)) {
      $views[$file->name] = $view;
	  //dpm($file->name);
    }   
  }
  return $views;
}
