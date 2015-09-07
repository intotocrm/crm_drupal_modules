<?php
/**
 * @file
 * tammuz_activities.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function tammuz_activities_default_crm_core_activity_type() {
  $items = array();
  $items['egg_donor_match'] = entity_import('crm_core_activity_type', '{
    "type" : "egg_donor_match",
    "label" : "Egg Donor Match",
    "weight" : 0,
    "activity_string" : "Matching egg donor to customer",
    "description" : "Customer and egg donor are matched. Both should be in this activity",
    "rdf_mapping" : []
  }');
  $items['email'] = entity_import('crm_core_activity_type', '{
    "type" : "email",
    "label" : "Email",
    "weight" : 0,
    "activity_string" : "Sending email to customer(s)",
    "description" : "Send mail to customer(s) or schedule such mail",
    "rdf_mapping" : []
  }');
  $items['meeting'] = entity_import('crm_core_activity_type', '{
    "type" : "meeting",
    "label" : "Meeting",
    "weight" : 0,
    "activity_string" : "",
    "description" : "A meeting between 2 or more contacts",
    "rdf_mapping" : []
  }');
  return $items;
}
