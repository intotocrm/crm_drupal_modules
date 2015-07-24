<?php
/**
 * @file
 * crm_core_ip_contact_type.features.inc
 */

/**
 * Implements hook_default_crm_core_contact_type().
 */
function crm_core_ip_contact_type_default_crm_core_contact_type() {
  $items = array();
  $items['ip'] = entity_import('crm_core_contact_type', '{
    "type" : "ip",
    "label" : null,
    "weight" : 0,
    "primary_fields" : { "email" : "field_email", "address" : "", "phone" : "" },
    "name" : "Intended Parent",
    "description" : "A single intended parent.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
