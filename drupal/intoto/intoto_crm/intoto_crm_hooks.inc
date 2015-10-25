<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * hook_can_add_relationship
 * 
 */

function can_add_relationship($entity_type, $entity_id, $relationship_type, $reverse, &$messages = [])
{
	$can = 1;
	$hook_name = '_can_add_relationship';
	foreach (module_implements('can_add_relationship') as $module) {

		$function = $module . $hook_name;
		// will call all modules implementing hook_hook_name
		// and can pass each argument as reference determined
		// by the function declaration
		$can = $can && $function($entity_type, $entity_id, $relationship_type, $reverse, $messages);
	}
	return $can;
}