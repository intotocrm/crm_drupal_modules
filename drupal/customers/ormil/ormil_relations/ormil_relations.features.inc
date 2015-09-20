<?php
/**
 * @file
 * ormil_relations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ormil_relations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}
