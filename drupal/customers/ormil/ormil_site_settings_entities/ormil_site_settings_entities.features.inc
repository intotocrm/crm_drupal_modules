<?php
/**
 * @file
 * ormil_site_settings_entities.features.inc
 */

/**
 * Implements hook_default_intoto_site_settings_type().
 */
function ormil_site_settings_entities_default_intoto_site_settings_type() {
  $items = array();
  $items['general_site_settings'] = entity_import('intoto_site_settings_type', '{
    "type" : "general_site_settings",
    "label" : "General Site Settings",
    "weight" : 0,
    "description" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
