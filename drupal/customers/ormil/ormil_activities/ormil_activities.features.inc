<?php
/**
 * @file
 * ormil_activities.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function ormil_activities_default_crm_core_activity_type() {
  $items = array();
  $items['comment'] = entity_import('crm_core_activity_type', '{
    "type" : "comment",
    "label" : "Comment",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');
  $items['email'] = entity_import('crm_core_activity_type', '{
    "type" : "email",
    "label" : "Email",
    "weight" : 0,
    "activity_string" : "",
    "description" : "Send a mail to one or more contacts",
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
  $items['phone_call'] = entity_import('crm_core_activity_type', '{
    "type" : "phone_call",
    "label" : "Phone call",
    "weight" : 0,
    "activity_string" : "",
    "description" : "A phone call between 2 or more contacts",
    "rdf_mapping" : []
  }');
  return $items;
}
