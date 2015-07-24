<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Implements hook_block_info().
 */
function intoto_crm_block_info() {
	$blocks = array();
	
	$blocks['recent_contacts'] = array(
		// The name that will appear in the block list.
		'info' => t('Recent Contacts'),
		// Default setting.
		'cache' => DRUPAL_CACHE_PER_ROLE,
	);
	
	$blocks['control_household'] = array(
		// The name that will appear in the block list.
		'info' => t('Household'),
		// Default setting.
		'cache' => DRUPAL_CACHE_PER_ROLE,
	);
	
	$blocks['add_household'] = array(
		// The name that will appear in the block list.
		'info' => t('Add Household'),
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
function intoto_crm_block_view($delta = '') {
	
	module_load_include('inc', 'crm_core_relationship_ui.pages');
	
	switch ($delta) {
		case 'recent_contacts':
			$block['subject'] = t('Recent Contacts');
			if (user_access('access content')) {
				$block['content'] = t('place holder for currently viewed contacts');  
			}
			else {
				$block['content'] = t('You are not allowed to view this');  
			}
			return $block;
			
		case 'control_household':
			$block['subject'] = t('Household');
			if (user_access('access content')) {
				$block['content'] = t('placeholder for controlling household of contact');  
			}
			else {
				$block['content'] = t('You are not allowed to view this');  
			}
			return $block;

		case 'add_household':
			$block['subject'] = t('Add Household');
			$contact = NULL;
			$page = page_manager_get_current_page();
			if (	array_key_exists('contexts', $page) &&
					array_key_exists('argument_entity_id:crm_core_contact_1', $page['contexts'])
				)
			{
				$contact = $page['contexts']['argument_entity_id:crm_core_contact_1'];
			}
			//dpm ($contact);
			if (user_access('access content')) {
//				$block['content'] = "testing";
				$block['content'] = drupal_get_form('intoto_crm_add_household_form', $contact);
			}
			else {
				$block['content'] = t('You are not allowed to view this');  
			}
			return $block;
	}
}
