<?php
/**
 * @file
 * tammuz_entity_types.features.inc
 */

/**
 * Implements hook_default_crm_core_contact_type().
 */
function tammuz_entity_types_default_crm_core_contact_type() {
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
  $items['clinic'] = entity_import('crm_core_contact_type', '{
    "type" : "clinic",
    "label" : null,
    "weight" : 0,
    "primary_fields" : { "email" : "", "address" : "", "phone" : "" },
    "name" : "Clinic",
    "description" : "This represents any clinic or lab that we work with",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "0",
    "rdf_mapping" : []
  }');
  $items['customer'] = entity_import('crm_core_contact_type', '{
    "type" : "customer",
    "label" : null,
    "weight" : 0,
    "primary_fields" : { "email" : "", "address" : "", "phone" : "" },
    "name" : "Customer",
    "description" : "The customer, usually a household, is the entity with which Tammuz works. Usually it relates to one or more IPs.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "0",
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
  $items['egg'] = entity_import('crm_core_contact_type', '{
    "type" : "egg",
    "label" : null,
    "weight" : 0,
    "primary_fields" : { "email" : "", "address" : "", "phone" : "" },
    "name" : "Egg",
    "description" : "A single egg (ovum) donated by an egg donor or by an intended mother.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "0",
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
  $items['embryo'] = entity_import('crm_core_contact_type', '{
    "type" : "embryo",
    "label" : null,
    "weight" : 0,
    "primary_fields" : { "email" : "", "address" : "", "phone" : "" },
    "name" : "Embryo",
    "description" : "Represents a single embryo",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "0",
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
  $items['journey'] = entity_import('crm_core_contact_type', '{
    "type" : "journey",
    "label" : null,
    "weight" : 0,
    "primary_fields" : { "email" : "", "address" : "", "phone" : "" },
    "name" : "Journey",
    "description" : "A special entity type that concentrates all that there is to know\\/manage in a certain process which starts in embryos creation and ends with a birth.",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "0",
    "rdf_mapping" : []
  }');
  $items['sperm_specimen'] = entity_import('crm_core_contact_type', '{
    "type" : "sperm_specimen",
    "label" : null,
    "weight" : 0,
    "primary_fields" : { "email" : "", "address" : "", "phone" : "" },
    "name" : "Sperm Specimen",
    "description" : "A single specimen, usually a vial of sperm",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "0",
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
function tammuz_entity_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_type") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tammuz_entity_types_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
