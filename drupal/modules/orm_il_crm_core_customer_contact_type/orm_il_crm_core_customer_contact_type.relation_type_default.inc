<?php
/**
 * @file
 * orm_il_crm_core_customer_contact_type.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function orm_il_crm_core_customer_contact_type_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'crm_member';
  $relation_type->label = 'is a member of';
  $relation_type->reverse_label = 'has member';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:ip',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:customer',
  );
  $export['crm_member'] = $relation_type;

  return $export;
}
