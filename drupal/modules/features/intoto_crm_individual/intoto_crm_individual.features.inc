<?php
/**
 * @file
 * intoto_crm_individual.features.inc
 */

/**
 * Implements hook_default_crm_core_contact_type().
 */
function intoto_crm_individual_default_crm_core_contact_type() {
  $items = array();
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
  return $items;
}
