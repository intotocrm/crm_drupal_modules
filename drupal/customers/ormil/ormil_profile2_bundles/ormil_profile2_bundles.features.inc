<?php
/**
 * @file
 * ormil_profile2_bundles.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function ormil_profile2_bundles_default_profile2_type() {
  $items = array();
  $items['preferences'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "preferences",
    "label" : "Preferences",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
