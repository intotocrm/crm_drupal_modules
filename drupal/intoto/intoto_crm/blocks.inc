<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


function get_page_context($context_key)
{
	$page = page_manager_get_current_page();

	$context = [];
	if (	array_key_exists('contexts', $page) &&
			array_key_exists($context_key, $page['contexts'])
			)
	{
		if (isset($page['contexts'][$context_key] ) ){
			return $page['contexts'][$context_key];
		}
	}
	
	//some of the needed context is in the configuration of the page. look there too.
	if (isset($page['handler']->conf['contexts']))
	{
		foreach ($page['handler']->conf['contexts'] as $context_entry)
		{
			if (isset($context_entry['keyword']) && $context_entry['keyword'] == $context_key ) 
			{
				return isset($context_entry['string']) ? $context_entry['string'] : NULL;  //this is wrong. I don't know how to know the struct member of the value of the context
			}
		}
	}
	
	return $context;
}

function get_context_contact()
{
	return get_page_context('argument_entity_id:crm_core_contact_1');
}
/**
 * Implements hook_block_info().
 */
function intoto_crm_block_info() {
	$blocks = array();

	
	$blocks['add_related_entity'] = array(
		// The name that will appear in the block list.
		'info' => t('Related Entity'),
		// Default setting.
		'cache' => DRUPAL_CACHE_PER_ROLE,
	);
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

	$blocks['add_household_member'] = array(
		// The name that will appear in the block list.
		'info' => t('Add a Member to Household'),
		// Default setting.
		'cache' => DRUPAL_CACHE_PER_ROLE,
	);

	$blocks['add_comment'] = array(
		// The name that will appear in the block list.
		'info' => t('Add Comment'),
		// Default setting.
		'cache' => DRUPAL_CACHE_PER_ROLE,
	);

	$blocks['main_search'] = array(
		// The name that will appear in the block list.
		'info' => t('Main Search'),
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
function intoto_crm_block_view($delta = '')
{
	$function = __FUNCTION__ . '_' . $delta;
	if (function_exists($function)) {
		return $function();
	}
}

function intoto_crm_block_view_recent_contacts()
{
	$block = array();
	$block['subject'] = t('Recent Contacts');
	if (user_access('access content')) {
		$block['content'] = t('place holder for currently viewed contacts');  
	}
	else {
		$block['content'] = t('You are not allowed to view this');  
	}
	return $block;
}


function intoto_crm_block_view_control_household()
{
	$block = array();
	$block['subject'] = t('Household');
	if (user_access('access content')) {
		$block['content'] = t('placeholder for controlling household of contact');  
	}
	else {
		$block['content'] = t('You are not allowed to view this');  
	}
	return $block;
}


function intoto_crm_block_view_add_related_entity()
{
	module_load_include('inc', 'crm_core_relationship_ui.pages');
	$block = array();
	$block['subject'] = t('Add');
	$contact = get_context_contact(); //get_page_context("context_key");
	$relationship_type = get_page_context("required-relationship");
	$relationship_reverse = get_page_context("relationship-r_index");
	
	//dpm ($contact);
	if ($contact){
		if (user_access('access content')) {
	//				$block['content'] = "testing";
			//discover if we need the relationship or the reverse-relationship.
			
			$block['content'] = crm_core_relation_entity_ui_get_form_wrapper($contact->data, $relationship_type, $relationship_reverse); //drupal_get_form('intoto_crm_add_related_form', $contact);
		}
		else {
			$block['content'] = t('You are not allowed to view this');  
		}
	}
	return $block;	
}
function intoto_crm_block_view_add_household()
{
	module_load_include('inc', 'crm_core_relationship_ui.pages');
	$block = array();
	$block['subject'] = t('Add Household');
	$contact = get_context_contact();
	//dpm ($contact);
	if ($contact){
		if (user_access('access content')) {
	//				$block['content'] = "testing";
			$block['content'] = drupal_get_form('intoto_crm_add_household_form', $contact);
		}
		else {
			$block['content'] = t('You are not allowed to view this');  
		}
	}
	return $block;	
}

function intoto_crm_block_view_add_household_member()
{
	module_load_include('inc', 'crm_core_relationship_ui.pages');
	$block = array();
	$block['subject'] = t('Add Member to Household');
	$contact = get_context_contact();
	//dpm ($contact);
	if ($contact){
		if (user_access('access content')) {
	//				$block['content'] = "testing";
			$block['content'] = drupal_get_form('intoto_crm_add_household_member_form', $contact);
		}
		else {
			$block['content'] = t('You are not allowed to view this');  
		}
	}
	return $block;	
}

function intoto_crm_block_view_add_comment()
{
	module_load_include('inc', 'crm_core_relationship_ui.pages');
	$block = array();
	$block['subject'] = t('Add Comment');
	$contact = get_context_contact();
	//dpm ($contact);
	if ($contact){
		if (user_access('access content')) {
	//				$block['content'] = "testing";
			$block['content'] = drupal_get_form('intoto_crm_add_comment_form', $contact);
		}
		else {
			$block['content'] = t('You are not allowed to view this');  
		}
	}
	return $block;	
}

function intoto_crm_block_view_main_search()
{
	$block = array();
	$block['subject'] = t('Search');
	if (user_access('access content')) {
		$block['content'] = drupal_get_form('intoto_crm_main_search_form');
	}
	else {
		$block['content'] = t('You are not allowed to view this');  
	}
	return $block;
}
