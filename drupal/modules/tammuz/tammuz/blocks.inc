<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



/**
 * Implements hook_block_info().
 */


function tammuz_block_info() {
	$blocks = array();
	

	$blocks['add_journey'] = array(
		// The name that will appear in the block list.
		'info' => t('Add a journey to the customer'),
		// Default setting.
		'cache' => DRUPAL_CACHE_PER_ROLE,
	);
	return $blocks;
}


/**
 * Implements hook_block_view().
 * 
 * Prepares the contents of the block.
 */
function tammuz_block_view($delta = '')
{
	$function = __FUNCTION__ . '_' . $delta;
	if (function_exists($function)) {
		return $function();
	}
}


function tammuz_block_view_add_journey()
{
	module_load_include('inc', 'crm_core_relationship_ui.pages');
	$block = array();
	$block['subject'] = t('Add Journey');
	$contact = get_context_contact();
	if ($contact){
		if (user_access('access content')) {
	//				$block['content'] = "testing";
			$block['content'] = drupal_get_form('tammuz_add_journey_form', $contact);
		}
		else {
			$block['content'] = t('You are not allowed to view this');  
		}
	}
	return $block;	
}