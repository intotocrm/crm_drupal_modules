<?php
/**
 * @file
 * orm_il_crm_core_customer_contact_type.features.inc
 */

/**
 * Implements hook_default_crm_core_contact_type().
 */
function orm_il_crm_core_customer_contact_type_default_crm_core_contact_type() {
  $items = array();
  $items['customer'] = entity_import('crm_core_contact_type', '{
    "type" : "customer",
    "label" : null,
    "weight" : 0,
    "primary_fields" : { "email" : "", "address" : "", "phone" : "" },
    "name" : "Customer",
    "description" : "Represents a household which is a customer of the clinic",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function orm_il_crm_core_customer_contact_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}
