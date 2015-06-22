<?php
/**
 * @file
 * crm_entity_types_improved.features.inc
 */

/**
 * Implements hook_default_crm_core_contact_type().
 */
function crm_entity_types_improved_default_crm_core_contact_type() {
  $items = array();
  $items['child'] = entity_import('crm_core_contact_type', '{
    "type" : "child",
    "label" : null,
    "weight" : 0,
    "primary_fields" : null,
    "name" : "Child",
    "description" : "A single child.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1",
    "rdf_mapping" : []
  }');
  $items['doctor'] = entity_import('crm_core_contact_type', '{
    "type" : "doctor",
    "label" : null,
    "weight" : 0,
    "primary_fields" : null,
    "name" : "Doctor",
    "description" : "A single doctor.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1",
    "rdf_mapping" : []
  }');
  $items['egg_donor'] = entity_import('crm_core_contact_type', '{
    "type" : "egg_donor",
    "label" : null,
    "weight" : 0,
    "primary_fields" : null,
    "name" : "Egg Donor",
    "description" : "A single egg donor.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1",
    "rdf_mapping" : []
  }');
  $items['individual'] = entity_import('crm_core_contact_type', '{
    "type" : "individual",
    "label" : null,
    "weight" : 0,
    "primary_fields" : null,
    "name" : "Individual",
    "description" : "A single individual.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1",
    "rdf_mapping" : []
  }');
  $items['ip'] = entity_import('crm_core_contact_type', '{
    "type" : "ip",
    "label" : null,
    "weight" : 0,
    "primary_fields" : null,
    "name" : "Intended Parent",
    "description" : "A single intended parent.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1",
    "rdf_mapping" : []
  }');
  $items['surrogate'] = entity_import('crm_core_contact_type', '{
    "type" : "surrogate",
    "label" : null,
    "weight" : 0,
    "primary_fields" : null,
    "name" : "Surrogate",
    "description" : "A single surrogate.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1",
    "rdf_mapping" : []
  }');
  $items['tammuz_staff'] = entity_import('crm_core_contact_type', '{
    "type" : "tammuz_staff",
    "label" : null,
    "weight" : 0,
    "primary_fields" : null,
    "name" : "Tammuz Staff",
    "description" : "A single Tammuz staff person.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function crm_entity_types_improved_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
}
