<?php
/**
 * @file
 * intoto_individual_details_page.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function intoto_individual_details_page_default_crm_core_activity_type() {
  $items = array();
  $items['comment'] = entity_import('crm_core_activity_type', '{
    "type" : "comment",
    "label" : "Comment",
    "weight" : 0,
    "activity_string" : "Comment",
    "description" : "General comment about a contact.",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function intoto_individual_details_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function intoto_individual_details_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
