<?php
/**
 * @file
 * intoto_household_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function intoto_household_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'household_s_of_individual';
  $view->description = 'Lists (hopefully 1) household of an individual';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Household(s) of individual';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Household(s) of individual';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Relationship: CRM Core Contact: Relation: is a member of (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['id'] = 'relation_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['field'] = 'relation_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  /* Contextual filter: siblings */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'relation_base_crm_member_crm_core_contact_1';
  $handler->display->display_options['arguments']['contact_id']['ui_name'] = 'siblings';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['contact_id']['validate']['fail'] = 'ignore';

  /* Display: Block - Household */
  $handler = $view->new_display('block', 'Block - Household', 'block');
  $handler->display->display_options['display_description'] = 'find the household of the individual';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'relation_crm_member_crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['contact_id']['validate']['fail'] = 'ignore';
  $export['household_s_of_individual'] = $view;

  $view = new view();
  $view->name = 'siblings';
  $view->description = 'members of household based on household context or on one of the members context';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Household Members';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Household Members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
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
  );
  /* Relationship: inv_relation-relation */
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact_1']['id'] = 'relation_crm_member_crm_core_contact_1';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact_1']['field'] = 'relation_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact_1']['ui_name'] = 'inv_relation-relation';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact_1']['label'] = 'inv_relation-relation';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact_1']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact_1']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact_1']['entity_deduplication_right'] = 0;
  /* Relationship: relation-inv_relation(siblings) */
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['id'] = 'relation_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['field'] = 'relation_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['relationship'] = 'relation_crm_member_crm_core_contact_1';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['ui_name'] = 'relation-inv_relation(siblings)';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['label'] = 'relation-inv_relation(siblings)';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['r_index'] = '1';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['entity_deduplication_right'] = 1;
  /* Field: Field: Profile Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail_square',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: Field: Customer */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
  $handler->display->display_options['fields']['contact_name']['alter']['alt'] = 'Go to [contact_name]\'s page';
  $handler->display->display_options['fields']['contact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'short_full',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'relation_crm_member_crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Siblings Content Pane */
  $handler = $view->new_display('panel_pane', 'Siblings Content Pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Household members of the same household as the context\'s household';
  $handler->display->display_options['pane_title'] = 'Household\'s sibling pane';
  $handler->display->display_options['pane_description'] = 'Household\'s sibling pane';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'user',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );

  /* Display: Members Content Pane */
  $handler = $view->new_display('panel_pane', 'Members Content Pane', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Household members of the context';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: CRM Core Contact: Relation: is a member of (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['id'] = 'relation_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['field'] = 'relation_crm_member_crm_core_contact';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['r_index'] = '0';
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_crm_member_crm_core_contact']['entity_deduplication_right'] = 0;
  $handler->display->display_options['pane_title'] = 'Household\'s members pane';
  $handler->display->display_options['pane_description'] = 'Household\'s members pane';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'user',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['siblings'] = $view;

  return $export;
}
