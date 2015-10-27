<?php

function intoto_crm_views_hard_coded_views($module_name) {
  $files = file_scan_directory(drupal_get_path('module', $module_name). '/views', '/.*view.*/');
  $views = [];
  foreach ($files as $absolute => $file) {
    require $absolute;
    if (isset($view)) {
      $views[$file->name] = $view;
    }   
  }
  return $views;
}


function create_related_contacts_view($view_data)
{
$view = new view();
//$view->name = 'related_contacts';
$view->name = $view_data['name'];
//$view->description = '';
$view->description = $view_data['description'];
$view->tag = 'default';
$view->base_table = 'crm_core_contact';
//$view->human_name = 'Related Contacts';
$view->human_name = $view_data['human_name'];
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = $view_data['human_name'];
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  4 => '4',
  5 => '5',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: CRM Core Contact: Relation: is a member of (crm_core_contact → relation) */
$relationship_id_from_contact_to_rel = 'relation_base_left_' . $view_data['relation_id'];
$handler->display->display_options['relationships'][$relationship_id_from_contact_to_rel]['id'] = $relationship_id_from_contact_to_rel;
$handler->display->display_options['relationships'][$relationship_id_from_contact_to_rel]['table'] = 'crm_core_contact';
$handler->display->display_options['relationships'][$relationship_id_from_contact_to_rel]['field'] = $relationship_id_from_contact_to_rel;
$handler->display->display_options['relationships'][$relationship_id_from_contact_to_rel]['required'] = TRUE;
$handler->display->display_options['relationships'][$relationship_id_from_contact_to_rel]['r_index'] = $view_data['r_index'];
$handler->display->display_options['relationships'][$relationship_id_from_contact_to_rel]['entity_deduplication_left'] = 0;
/* Relationship: Relation: Relation: is a member of (relation → crm_core_contact) */
$relationship_id_from_rel_to_contacts = 'relation_base_' . $view_data['relation_id'] . '_crm_core_contact';
$handler->display->display_options['relationships'][$relationship_id_from_rel_to_contacts]['id'] = $relationship_id_from_rel_to_contacts;
$handler->display->display_options['relationships'][$relationship_id_from_rel_to_contacts]['table'] = 'relation';
$handler->display->display_options['relationships'][$relationship_id_from_rel_to_contacts]['field'] = $relationship_id_from_rel_to_contacts;
$handler->display->display_options['relationships'][$relationship_id_from_rel_to_contacts]['relationship'] = $relationship_id_from_contact_to_rel;
$handler->display->display_options['relationships'][$relationship_id_from_rel_to_contacts]['required'] = TRUE;
$handler->display->display_options['relationships'][$relationship_id_from_rel_to_contacts]['r_index'] = 1 - $view_data['r_index'];
$handler->display->display_options['relationships'][$relationship_id_from_rel_to_contacts]['entity_deduplication_right'] = 0;
/* Field: CRM Core Contact: Contact ID */
$handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
$handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
$handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
$handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
/* Field: Relation: Rid */
$handler->display->display_options['fields']['rid']['id'] = 'rid';
$handler->display->display_options['fields']['rid']['table'] = 'relation';
$handler->display->display_options['fields']['rid']['field'] = 'rid';
$handler->display->display_options['fields']['rid']['relationship'] = $relationship_id_from_contact_to_rel;
$handler->display->display_options['fields']['rid']['exclude'] = TRUE;
$handler->display->display_options['fields']['rid']['separator'] = '';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="close dont_show_link" link="/crm-core/contact/[contact_id]/remove_from_relationship/[rid]" data-toggle="tooltip" title="'. $view_data['remove_text'] .'"  href="#">×</a>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: CRM Core Contact: Rendered CRM Core Contact */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_crm_core_contact';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = $relationship_id_from_rel_to_contacts;
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'one_liner';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Contextual filter: CRM Core Contact: Contact ID */
$handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
$handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
$handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
$handler->display->display_options['arguments']['contact_id']['default_action'] = 'empty';
$handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'related-contacts';
return $view;
}