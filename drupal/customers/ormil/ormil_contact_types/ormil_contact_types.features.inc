<?php
/**
 * @file
 * crm_core_ip_contact_type.features.inc
 */

/**
 * Implements hook_default_crm_core_contact_type().
 */
function ormil_contact_types_default_crm_core_contact_type() {
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
function crm_core_ip_contact_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
