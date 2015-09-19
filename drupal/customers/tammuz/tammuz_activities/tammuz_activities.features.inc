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


  $items['phone'] = entity_import('crm_core_activity_type', '{
    "type" : "phone",
    "label" : "Phone",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['infectious_disease_test'] = entity_import('crm_core_activity_type', '{
    "type" : "infectious_disease_test",
    "label" : "Infectious disease test",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['eggs_retrieval'] = entity_import('crm_core_activity_type', '{
    "type" : "eggs_retrieval",
    "label" : "Eggs Retrieval",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['embryo_fertilization'] = entity_import('crm_core_activity_type', '{
    "type" : "embryo_fertilization",
    "label" : "Embryo Fertilization",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['embryo_transfer'] = entity_import('crm_core_activity_type', '{
    "type" : "embryo_transfer",
    "label" : "Embryo Transfer",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['embryo_freeze'] = entity_import('crm_core_activity_type', '{
    "type" : "embryo_freeze",
    "label" : "Embryo Freeze",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['surrogate_profile'] = entity_import('crm_core_activity_type', '{
    "type" : "surrogate_profile",
    "label" : "Surrogate Profile",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['surrogate_signs_contract'] = entity_import('crm_core_activity_type', '{
    "type" : "surrogate_signs_contract",
    "label" : "Surrogate Signs Contract",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['contract_sent'] = entity_import('crm_core_activity_type', '{
    "type" : "contract_sent",
    "label" : "Contract with Surrogate Sent to Customer",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['customer_contract_surrogate'] = entity_import('crm_core_activity_type', '{
    "type" : "customer_contract_surrogate",
    "label" : "Customer Signs Contract with Surrogate",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['pregnancy_positive'] = entity_import('crm_core_activity_type', '{
    "type" : "pregnancy_positive",
    "label" : "Pregnancy Positive",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['terminate_pregnancy'] = entity_import('crm_core_activity_type', '{
    "type" : "terminate_pregnancy",
    "label" : "Terminate Pregnancy",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['beta_test'] = entity_import('crm_core_activity_type', '{
    "type" : "beta_test",
    "label" : "Beta test",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['gsac_test'] = entity_import('crm_core_activity_type', '{
    "type" : "gsac_test",
    "label" : "gsac test",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['pregnancy_program'] = entity_import('crm_core_activity_type', '{
    "type" : "pregnancy_program",
    "label" : "Pregnancy Program",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['heartbeat_test'] = entity_import('crm_core_activity_type', '{
    "type" : "heartbeat_test",
    "label" : "Heartbeat test",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['routine_usg'] = entity_import('crm_core_activity_type', '{
    "type" : "routine_usg",
    "label" : "Routine USG",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['nt'] = entity_import('crm_core_activity_type', '{
    "type" : "nt",
    "label" : "NT",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['verify'] = entity_import('crm_core_activity_type', '{
    "type" : "verify",
    "label" : "Verify",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['blood_test'] = entity_import('crm_core_activity_type', '{
    "type" : "blood_test",
    "label" : "Blood Test",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['dm_dual_marker'] = entity_import('crm_core_activity_type', '{
    "type" : "dm_dual_marker",
    "label" : "DM (Dual Marker)",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['qm_quadruple_marker'] = entity_import('crm_core_activity_type', '{
    "type" : "qm_quadruple_marker",
    "label" : "QM (Quadruple Marker)",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['as_anomaly_scan'] = entity_import('crm_core_activity_type', '{
    "type" : "as_anomaly_scan",
    "label" : "AS (Anomaly Scan)",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['gtt_glucose_tolerance_test'] = entity_import('crm_core_activity_type', '{
    "type" : "gtt_glucose_tolerance_test",
    "label" : "GTT (Glucose tolerance test)",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['birth'] = entity_import('crm_core_activity_type', '{
    "type" : "birth",
    "label" : "Birth",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['miscarriage'] = entity_import('crm_core_activity_type', '{
    "type" : "miscarriage",
    "label" : "Miscarriage",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['abortion'] = entity_import('crm_core_activity_type', '{
    "type" : "abortion",
    "label" : "Abortion",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['flight_to_birth_singleton'] = entity_import('crm_core_activity_type', '{
    "type" : "flight_to_birth_singleton",
    "label" : "Flight to birth (singleton)",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['flight_to_birth_twins'] = entity_import('crm_core_activity_type', '{
    "type" : "flight_to_birth_twins",
    "label" : "Flight to birth (twins)",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['flight_back_home'] = entity_import('crm_core_activity_type', '{
    "type" : "flight_back_home",
    "label" : "Flight back home",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['hospitalization'] = entity_import('crm_core_activity_type', '{
    "type" : "hospitalization",
    "label" : "Hospitalization",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['check_out_of_hospital'] = entity_import('crm_core_activity_type', '{
    "type" : "check_out_of_hospital",
    "label" : "Check out of hospital",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['deposit'] = entity_import('crm_core_activity_type', '{
    "type" : "deposit",
    "label" : "Deposit",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['charge'] = entity_import('crm_core_activity_type', '{
    "type" : "charge",
    "label" : "Charge",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['inside_money_transfer'] = entity_import('crm_core_activity_type', '{
    "type" : "inside_money_transfer",
    "label" : "Inside Money Transfer",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['collect'] = entity_import('crm_core_activity_type', '{
    "type" : "collect",
    "label" : "Collect",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');


  $items['shipment'] = entity_import('crm_core_activity_type', '{
    "type" : "shipment",
    "label" : "Shipment",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');

  return $items;
}
