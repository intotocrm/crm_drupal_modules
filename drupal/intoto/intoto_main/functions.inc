<?php

/*
 * prevent 'unknown function' errors
 */
if (!function_exists('dpm')) { 
	function dpm($x=NULL, $y=NULL) {} 
} 


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
	
	$function = $function_prefix . "_" . (join("_", $function_parts));
	
	if (function_exists($function)){
		return call_user_func_array($function, $arguments);
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
		if (isset($entity_wrapper->{"type"}))
		{
			intoto_generic_function_dispatcher([$type, $entity_wrapper->{"type"}->value()], [$entity_wrapper], 2);
		}
	}				
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