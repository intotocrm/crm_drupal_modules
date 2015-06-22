<?php
/**
 * @file
 * crm_entity_types_improved.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crm_entity_types_improved_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'activities_by_contact_new';
  $view->description = 'List of activities of the contact';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'Activities by contact new';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any crm_core_activity entity';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of @total activities for contact.';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no activities available. <a href="activity/add">Add one now</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: participants */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['ui_name'] = 'participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['label'] = 'participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['required'] = TRUE;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['label'] = '';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['activity_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'View Link';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Edit Link';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]/edit?destination=crm-core/contact/[contact_id]/activity';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]/delete?destination=crm-core/contact/[contact_id]/activity';
  /* Field: CRM Core Activity: Date */
  $handler->display->display_options['fields']['field_activity_date']['id'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['field'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['label'] = 'Activity Date';
  $handler->display->display_options['fields']['field_activity_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: CRM Core Activity: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Activity type';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[nothing_1] [nothing_2] [nothing_3]';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Filter by:';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: CRM Core Contact: Contact ID */
  $handler->display->display_options['filters']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['filters']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['filters']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['filters']['contact_id']['value']['value'] = '10';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'activities';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Activities';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['activities_by_contact_new'] = $view;

  $view = new view();
  $view->name = 'crm_activities_by_contact_no_path';
  $view->description = 'List of activities of the contact';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'CRM Activities by contact no path';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any crm_core_activity entity';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of @total activities for contact.';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no activities available. <a href="activity/add">Add one now</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['label'] = '';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['activity_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'View Link';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Edit Link';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]/edit?destination=crm-core/contact/[contact_id]/activity';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]/delete?destination=crm-core/contact/[contact_id]/activity';
  /* Field: CRM Core Activity: Date */
  $handler->display->display_options['fields']['field_activity_date']['id'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['field'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['label'] = 'Activity Date';
  $handler->display->display_options['fields']['field_activity_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: CRM Core Activity: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Activity type';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[nothing_1] [nothing_2] [nothing_3]';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Filter by:';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'crm-core/contact/%/activity_XXXXX';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Activities';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['crm_activities_by_contact_no_path'] = $view;

  $view = new view();
  $view->name = 'crm_contacts_related_to_contact';
  $view->description = 'Displays contact relationships in tabs.';
  $view->tag = 'contact';
  $view->base_table = 'relation';
  $view->human_name = 'CRM Contacts Related to contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Relationships for [endpoints_2]';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view relation entities of any contact relationship';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'rid' => 'rid',
    'endpoints' => 'endpoints',
    'endpoints_1' => 'endpoints_1',
    'edit' => 'edit',
    'crm_core_relationship_status_1' => 'crm_core_relationship_status_1',
    'delete' => 'delete',
    'nothing' => 'nothing',
    'endpoints_2' => 'endpoints_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'rid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'crm_core_relationship_status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'endpoints_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of @total active contact relationships';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Active Relationships</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No active relationships are stored in the system for this contact at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: Relation: endpoints */
  $handler->display->display_options['fields']['endpoints']['id'] = 'endpoints';
  $handler->display->display_options['fields']['endpoints']['table'] = 'field_data_endpoints';
  $handler->display->display_options['fields']['endpoints']['field'] = 'endpoints';
  $handler->display->display_options['fields']['endpoints']['label'] = '';
  $handler->display->display_options['fields']['endpoints']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['endpoints']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['endpoints']['click_sort_column'] = 'entity_type';
  $handler->display->display_options['fields']['endpoints']['type'] = 'contact_relationship_human';
  $handler->display->display_options['fields']['endpoints']['delta_offset'] = '0';
  /* Field: Relation: endpoints */
  $handler->display->display_options['fields']['endpoints_1']['id'] = 'endpoints_1';
  $handler->display->display_options['fields']['endpoints_1']['table'] = 'field_data_endpoints';
  $handler->display->display_options['fields']['endpoints_1']['field'] = 'endpoints';
  $handler->display->display_options['fields']['endpoints_1']['label'] = 'Contact ID';
  $handler->display->display_options['fields']['endpoints_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['endpoints_1']['alter']['text'] = '[endpoints_1-entity_id]';
  $handler->display->display_options['fields']['endpoints_1']['click_sort_column'] = 'entity_type';
  $handler->display->display_options['fields']['endpoints_1']['type'] = 'relation_endpoint_full';
  $handler->display->display_options['fields']['endpoints_1']['delta_offset'] = '0';
  /* Field: Relation: Edit link */
  $handler->display->display_options['fields']['edit']['id'] = 'edit';
  $handler->display->display_options['fields']['edit']['table'] = 'relation';
  $handler->display->display_options['fields']['edit']['field'] = 'edit';
  /* Field: Relation: Status */
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['id'] = 'crm_core_relationship_status_1';
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['table'] = 'field_data_crm_core_relationship_status';
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['field'] = 'crm_core_relationship_status';
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['label'] = 'Status (Link)';
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['alter']['text'] = 'Mark as inactive';
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['alter']['path'] = 'crm-core/contact/[endpoints_1]/relationships/[rid]/inactive?destination=crm-core/contact/[endpoints_1]/relationships';
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['type'] = 'list_key';
  /* Field: Relation: Delete link */
  $handler->display->display_options['fields']['delete']['id'] = 'delete';
  $handler->display->display_options['fields']['delete']['table'] = 'relation';
  $handler->display->display_options['fields']['delete']['field'] = 'delete';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[edit] [crm_core_relationship_status_1] [delete]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Relation: endpoints */
  $handler->display->display_options['fields']['endpoints_2']['id'] = 'endpoints_2';
  $handler->display->display_options['fields']['endpoints_2']['table'] = 'field_data_endpoints';
  $handler->display->display_options['fields']['endpoints_2']['field'] = 'endpoints';
  $handler->display->display_options['fields']['endpoints_2']['label'] = 'Current contact name';
  $handler->display->display_options['fields']['endpoints_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['endpoints_2']['click_sort_column'] = 'entity_type';
  $handler->display->display_options['fields']['endpoints_2']['type'] = 'contact_relationship_current';
  $handler->display->display_options['fields']['endpoints_2']['delta_offset'] = '0';
  /* Field: Relation: Relation type */
  $handler->display->display_options['fields']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['fields']['relation_type']['table'] = 'relation';
  $handler->display->display_options['fields']['relation_type']['field'] = 'relation_type';
  /* Contextual filter: Relation: endpoints (endpoints:entity_id) */
  $handler->display->display_options['arguments']['endpoints_entity_id']['id'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['table'] = 'field_data_endpoints';
  $handler->display->display_options['arguments']['endpoints_entity_id']['field'] = 'endpoints_entity_id';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['endpoints_entity_id']['default_argument_options']['code'] = 'return arg(2);';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['endpoints_entity_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Relation: Relation type */
  $handler->display->display_options['arguments']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['arguments']['relation_type']['table'] = 'relation';
  $handler->display->display_options['arguments']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['arguments']['relation_type']['default_action'] = 'default';
  $handler->display->display_options['arguments']['relation_type']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['relation_type']['default_argument_options']['code'] = 'return implode(\',\',array_keys(crm_core_relationship_get_relationships()));';
  $handler->display->display_options['arguments']['relation_type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['relation_type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['relation_type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['relation_type']['limit'] = '0';
  $handler->display->display_options['arguments']['relation_type']['break_phrase'] = TRUE;
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'crm_employee' => 'crm_employee',
    'crm_friend' => 'crm_friend',
    'crm_member' => 'crm_member',
  );
  $handler->display->display_options['filters']['relation_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['relation_type']['expose']['operator_id'] = 'relation_type_op';
  $handler->display->display_options['filters']['relation_type']['expose']['label'] = 'Filter by:';
  $handler->display->display_options['filters']['relation_type']['expose']['operator'] = 'relation_type_op';
  $handler->display->display_options['filters']['relation_type']['expose']['identifier'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['relation_type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Relation: Status (crm_core_relationship_status) */
  $handler->display->display_options['filters']['crm_core_relationship_status_value']['id'] = 'crm_core_relationship_status_value';
  $handler->display->display_options['filters']['crm_core_relationship_status_value']['table'] = 'field_data_crm_core_relationship_status';
  $handler->display->display_options['filters']['crm_core_relationship_status_value']['field'] = 'crm_core_relationship_status_value';
  $handler->display->display_options['filters']['crm_core_relationship_status_value']['value'] = array(
    1 => '1',
  );

  /* Display: Active */
  $handler = $view->new_display('page', 'Active', 'active');
  $handler->display->display_options['display_description'] = 'Active contact relationships';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'crm-core/contact/%/related';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Active Relationships';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Relationships<b>XXX</b>';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Inactive */
  $handler = $view->new_display('page', 'Inactive', 'inactive');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of @total inactive contact relationships';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Inactive Relationships</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No inactive relationships are stored in the system for this contact at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  /* Field: Relation: endpoints */
  $handler->display->display_options['fields']['endpoints']['id'] = 'endpoints';
  $handler->display->display_options['fields']['endpoints']['table'] = 'field_data_endpoints';
  $handler->display->display_options['fields']['endpoints']['field'] = 'endpoints';
  $handler->display->display_options['fields']['endpoints']['label'] = '';
  $handler->display->display_options['fields']['endpoints']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['endpoints']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['endpoints']['click_sort_column'] = 'entity_type';
  $handler->display->display_options['fields']['endpoints']['type'] = 'contact_relationship_human';
  $handler->display->display_options['fields']['endpoints']['delta_offset'] = '0';
  /* Field: Relation: endpoints */
  $handler->display->display_options['fields']['endpoints_1']['id'] = 'endpoints_1';
  $handler->display->display_options['fields']['endpoints_1']['table'] = 'field_data_endpoints';
  $handler->display->display_options['fields']['endpoints_1']['field'] = 'endpoints';
  $handler->display->display_options['fields']['endpoints_1']['label'] = 'Contact ID';
  $handler->display->display_options['fields']['endpoints_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['endpoints_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['endpoints_1']['alter']['text'] = '[endpoints_1-entity_id]';
  $handler->display->display_options['fields']['endpoints_1']['click_sort_column'] = 'entity_type';
  $handler->display->display_options['fields']['endpoints_1']['type'] = 'relation_endpoint_full';
  $handler->display->display_options['fields']['endpoints_1']['delta_offset'] = '0';
  /* Field: Relation: Status */
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['id'] = 'crm_core_relationship_status_1';
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['table'] = 'field_data_crm_core_relationship_status';
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['field'] = 'crm_core_relationship_status';
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['label'] = 'Status (Link)';
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['alter']['text'] = 'Mark as active';
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['alter']['path'] = 'crm-core/contact/[endpoints_1]/relationships/[rid]/active?destination=crm-core/contact/[endpoints_1]/relationships/inactive';
  $handler->display->display_options['fields']['crm_core_relationship_status_1']['type'] = 'list_key';
  /* Field: Relation: Delete link */
  $handler->display->display_options['fields']['delete']['id'] = 'delete';
  $handler->display->display_options['fields']['delete']['table'] = 'relation';
  $handler->display->display_options['fields']['delete']['field'] = 'delete';
  $handler->display->display_options['fields']['delete']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[delete] [crm_core_relationship_status_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Relation: endpoints */
  $handler->display->display_options['fields']['endpoints_2']['id'] = 'endpoints_2';
  $handler->display->display_options['fields']['endpoints_2']['table'] = 'field_data_endpoints';
  $handler->display->display_options['fields']['endpoints_2']['field'] = 'endpoints';
  $handler->display->display_options['fields']['endpoints_2']['label'] = 'Current contact';
  $handler->display->display_options['fields']['endpoints_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['endpoints_2']['click_sort_column'] = 'entity_type';
  $handler->display->display_options['fields']['endpoints_2']['type'] = 'contact_relationship_current';
  $handler->display->display_options['fields']['endpoints_2']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Relation: Relation type */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'crm_employee' => 'crm_employee',
    'crm_friend' => 'crm_friend',
    'crm_member' => 'crm_member',
  );
  $handler->display->display_options['filters']['relation_type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['relation_type']['expose']['operator_id'] = 'relation_type_op';
  $handler->display->display_options['filters']['relation_type']['expose']['label'] = 'Filter by:';
  $handler->display->display_options['filters']['relation_type']['expose']['operator'] = 'relation_type_op';
  $handler->display->display_options['filters']['relation_type']['expose']['identifier'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['relation_type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Relation: Status (crm_core_relationship_status) */
  $handler->display->display_options['filters']['crm_core_relationship_status_value']['id'] = 'crm_core_relationship_status_value';
  $handler->display->display_options['filters']['crm_core_relationship_status_value']['table'] = 'field_data_crm_core_relationship_status';
  $handler->display->display_options['filters']['crm_core_relationship_status_value']['field'] = 'crm_core_relationship_status_value';
  $handler->display->display_options['filters']['crm_core_relationship_status_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['path'] = 'crm-core/contact/%/relationships/inactive';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Inactive Relationships';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['crm_contacts_related_to_contact'] = $view;

  $view = new view();
  $view->name = 'entities_related_to_contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Entities Related to Contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Entities Related to Contact';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
    'rendered_entity' => 'rendered_entity',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rendered_entity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: CRM Core Contact: Relation: is a member of (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['id'] = 'relation_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['field'] = 'relation_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  /* Field: CRM Core Contact: Rendered CRM Core Contact */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_crm_core_contact';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'relation_crm_member_crm_core_contact';
  $handler->display->display_options['fields']['rendered_entity']['label'] = 'member of';
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'entities-related-to-contact';
  $export['entities_related_to_contact'] = $view;

  $view = new view();
  $view->name = 'related_entities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'relation';
  $view->human_name = 'Related Entities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Entities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: relation_base_crm_member_crm_core_contact_contact_any */
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact_1']['id'] = 'relation_base_crm_member_crm_core_contact_1';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact_1']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact_1']['field'] = 'relation_base_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact_1']['ui_name'] = 'relation_base_crm_member_crm_core_contact_contact_any';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact_1']['label'] = 'is a member of (contact is any)';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact_1']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact_1']['entity_deduplication_right'] = 0;
  /* Relationship: is a member of (target) */
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['id'] = 'relation_base_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['field'] = 'relation_base_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['ui_name'] = 'is a member of (target)';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['label'] = 'is a member of (target)';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: Relation: Relation type */
  $handler->display->display_options['fields']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['fields']['relation_type']['table'] = 'relation';
  $handler->display->display_options['fields']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['fields']['relation_type']['exclude'] = TRUE;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'relation_base_crm_member_crm_core_contact_1';
  $handler->display->display_options['fields']['contact_id']['label'] = 'Target Contact ID';
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 1;
  /* Field: CRM Core Contact: Tammuz Staff */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'relation_base_crm_member_crm_core_contact_1';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Doctor';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id_1']['id'] = 'contact_id_1';
  $handler->display->display_options['fields']['contact_id_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id_1']['relationship'] = 'relation_base_crm_member_crm_core_contact_1';
  $handler->display->display_options['fields']['contact_id_1']['link_to_contact'] = 0;
  /* Filter criterion: relation_type_filter */
  $handler->display->display_options['filters']['relation_type']['id'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['table'] = 'relation';
  $handler->display->display_options['filters']['relation_type']['field'] = 'relation_type';
  $handler->display->display_options['filters']['relation_type']['ui_name'] = 'relation_type_filter';
  $handler->display->display_options['filters']['relation_type']['value'] = array(
    'all' => 'all',
    'created_in' => 'created_in',
    'crm_employee' => 'crm_employee',
    'crm_member' => 'crm_member',
    'genetic_parent_of' => 'genetic_parent_of',
    'own' => 'own',
    'participate_in' => 'participate_in',
    'preserved_in' => 'preserved_in',
    'try_relation_2' => 'try_relation_2',
  );
  /* Filter criterion: Relation: endpoints (endpoints:entity_id) */
  $handler->display->display_options['filters']['endpoints_entity_id']['id'] = 'endpoints_entity_id';
  $handler->display->display_options['filters']['endpoints_entity_id']['table'] = 'field_data_endpoints';
  $handler->display->display_options['filters']['endpoints_entity_id']['field'] = 'endpoints_entity_id';
  $handler->display->display_options['filters']['endpoints_entity_id']['value']['value'] = '6';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'related-entities';
  $export['related_entities'] = $view;

  $view = new view();
  $view->name = 'related_entities_new';
  $view->description = 'an improved version of Related Entities for a single relation on a single entity';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Related Entities New';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Entities New';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: base_relation */
  $handler->display->display_options['relationships']['relation_base_left_crm_member']['id'] = 'relation_base_left_crm_member';
  $handler->display->display_options['relationships']['relation_base_left_crm_member']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_base_left_crm_member']['field'] = 'relation_base_left_crm_member';
  $handler->display->display_options['relationships']['relation_base_left_crm_member']['ui_name'] = 'base_relation';
  $handler->display->display_options['relationships']['relation_base_left_crm_member']['label'] = 'is a member of (relation)';
  $handler->display->display_options['relationships']['relation_base_left_crm_member']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_left_crm_member']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_base_left_crm_member']['entity_deduplication_left'] = 0;
  /* Relationship: Relation: Relation: is a member of (relation → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['id'] = 'relation_base_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['field'] = 'relation_base_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['relationship'] = 'relation_base_left_crm_member';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['label'] = 'related entity (via relations)';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_base_crm_member_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Relationship: second_relationship */
  $handler->display->display_options['relationships']['relation_base_left_created_in']['id'] = 'relation_base_left_created_in';
  $handler->display->display_options['relationships']['relation_base_left_created_in']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_base_left_created_in']['field'] = 'relation_base_left_created_in';
  $handler->display->display_options['relationships']['relation_base_left_created_in']['ui_name'] = 'second_relationship';
  $handler->display->display_options['relationships']['relation_base_left_created_in']['label'] = 'second_relationship';
  $handler->display->display_options['relationships']['relation_base_left_created_in']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_base_left_created_in']['entity_deduplication_left'] = 0;
  /* Field: source contact id */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['ui_name'] = 'source contact id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Tammuz Staff */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Name (should exclude from display)';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id_1']['id'] = 'contact_id_1';
  $handler->display->display_options['fields']['contact_id_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id_1']['relationship'] = 'relation_base_crm_member_crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['link_to_contact'] = 1;
  /* Field: Field: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'relation_base_crm_member_crm_core_contact';
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['relationship'] = 'relation_base_left_crm_member';
  $handler->display->display_options['fields']['rid']['label'] = 'Rid (should exclude from display)';
  $handler->display->display_options['fields']['rid']['exclude'] = TRUE;
  /* Field: Relation: Period */
  $handler->display->display_options['fields']['field_relationship_period']['id'] = 'field_relationship_period';
  $handler->display->display_options['fields']['field_relationship_period']['table'] = 'field_data_field_relationship_period';
  $handler->display->display_options['fields']['field_relationship_period']['field'] = 'field_relationship_period';
  $handler->display->display_options['fields']['field_relationship_period']['relationship'] = 'relation_base_left_crm_member';
  $handler->display->display_options['fields']['field_relationship_period']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Filter criterion: CRM Core Contact: Contact ID */
  $handler->display->display_options['filters']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['filters']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['filters']['contact_id']['value']['value'] = '9';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'related-entities-new';
  $export['related_entities_new'] = $view;

  return $export;
}
