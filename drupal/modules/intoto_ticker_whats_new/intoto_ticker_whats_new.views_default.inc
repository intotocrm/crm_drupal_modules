<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



/**
 * Implements hook_views_default_views().
 */
function intoto_ticker_whats_new_views_default_views()
{
	$view = new view();
	$view->name = 'whats_new';
	$view->description = '';
	$view->tag = 'default';
	$view->base_table = 'ticker';
	$view->human_name = 'What\'s New';
	$view->core = 7;
	$view->api_version = '3.0';
	$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

	/* Display: Master */
	$handler = $view->new_display('default', 'Master', 'default');
	$handler->display->display_options['title'] = 'What\'s New';
	$handler->display->display_options['use_more_always'] = FALSE;
	$handler->display->display_options['access']['type'] = 'perm';
	$handler->display->display_options['access']['perm'] = 'view ticker content';
	$handler->display->display_options['cache']['type'] = 'none';
	$handler->display->display_options['query']['type'] = 'views_query';
	$handler->display->display_options['exposed_form']['type'] = 'basic';
	$handler->display->display_options['pager']['type'] = 'full';
	$handler->display->display_options['pager']['options']['items_per_page'] = '5';
	$handler->display->display_options['style_plugin'] = 'table';
	$handler->display->display_options['style_options']['default_row_class'] = FALSE;
	$handler->display->display_options['style_options']['row_class_special'] = FALSE;
	$handler->display->display_options['style_options']['columns'] = array(
	  'id' => 'id',
	  'nothing' => 'nothing',
	  'title' => 'title',
	);
	$handler->display->display_options['style_options']['default'] = '-1';
	$handler->display->display_options['style_options']['info'] = array(
	  'id' => array(
		'sortable' => 0,
		'default_sort_order' => 'asc',
		'align' => '',
		'separator' => '',
		'empty_column' => 0,
	  ),
	  'nothing' => array(
		'align' => 'views-align-right',
		'separator' => '',
		'empty_column' => 0,
	  ),
	  'title' => array(
		'sortable' => 0,
		'default_sort_order' => 'asc',
		'align' => 'views-align-left',
		'separator' => '',
		'empty_column' => 0,
	  ),
	);
	$handler->display->display_options['style_options']['override'] = FALSE;
	/* Field: Ticker Entity: Custom entity ID */
	$handler->display->display_options['fields']['id']['id'] = 'id';
	$handler->display->display_options['fields']['id']['table'] = 'ticker';
	$handler->display->display_options['fields']['id']['field'] = 'id';
	$handler->display->display_options['fields']['id']['exclude'] = TRUE;
	/* Field: Global: Custom text */
	$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
	$handler->display->display_options['fields']['nothing']['table'] = 'views';
	$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
	$handler->display->display_options['fields']['nothing']['label'] = '';
	$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="close dont_show_link" link="/ticker/[id]/remove-user"  href="#">×</a>';
	$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
	/* Field: Ticker Entity: Custom entity title */
	$handler->display->display_options['fields']['title']['id'] = 'title';
	$handler->display->display_options['fields']['title']['table'] = 'ticker';
	$handler->display->display_options['fields']['title']['field'] = 'title';
	$handler->display->display_options['fields']['title']['label'] = '';
	$handler->display->display_options['fields']['title']['alter']['path'] = 'whats-new/[id]';
	$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
	/* Field: Ticker Entity: Custom entity description */
	$handler->display->display_options['fields']['description']['id'] = 'description';
	$handler->display->display_options['fields']['description']['table'] = 'ticker';
	$handler->display->display_options['fields']['description']['field'] = 'description';
	$handler->display->display_options['fields']['description']['label'] = '';
	$handler->display->display_options['fields']['description']['element_type'] = 'div';
	$handler->display->display_options['fields']['description']['element_class'] = 'tooltip_field';
	$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
	/* Contextual filter: Ticker Entity: Users (field_ticker_users_ref) */
	$handler->display->display_options['arguments']['field_ticker_users_ref_target_id']['id'] = 'field_ticker_users_ref_target_id';
	$handler->display->display_options['arguments']['field_ticker_users_ref_target_id']['table'] = 'field_data_field_ticker_users_ref';
	$handler->display->display_options['arguments']['field_ticker_users_ref_target_id']['field'] = 'field_ticker_users_ref_target_id';
	$handler->display->display_options['arguments']['field_ticker_users_ref_target_id']['default_action'] = 'default';
	$handler->display->display_options['arguments']['field_ticker_users_ref_target_id']['default_argument_type'] = 'current_user';
	$handler->display->display_options['arguments']['field_ticker_users_ref_target_id']['summary']['number_of_records'] = '0';
	$handler->display->display_options['arguments']['field_ticker_users_ref_target_id']['summary']['format'] = 'default_summary';
	$handler->display->display_options['arguments']['field_ticker_users_ref_target_id']['summary_options']['items_per_page'] = '25';
	/* Filter criterion: Ticker Entity: Intoto Custom Entity type (bundle) */
	$handler->display->display_options['filters']['type']['id'] = 'type';
	$handler->display->display_options['filters']['type']['table'] = 'ticker';
	$handler->display->display_options['filters']['type']['field'] = 'type';
	$handler->display->display_options['filters']['type']['value'] = 'whats_new';
	$handler->display->display_options['filters']['type']['group'] = 1;

	/* Display: Block */
	$handler = $view->new_display('block', 'Block', 'block');
	$views['whats_new'] = $view;
	return $views;
}