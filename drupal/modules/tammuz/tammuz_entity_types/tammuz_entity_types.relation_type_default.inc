<?php
/**
 * @file
 * tammuz_entity_types.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function tammuz_entity_types_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'created_in';
  $relation_type->label = 'created in';
  $relation_type->reverse_label = 'created';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:embryo',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:clinic',
  );
  $export['created_in'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'crm_employee';
  $relation_type->label = 'works for';
  $relation_type->reverse_label = 'employs';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:doctor',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:clinic',
  );
  $export['crm_employee'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'crm_member';
  $relation_type->label = 'is a member of';
  $relation_type->reverse_label = 'has member';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:ip',
    1 => 'crm_core_contact:child',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:customer',
  );
  $export['crm_member'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'genetic_parent_of';
  $relation_type->label = 'genetic parent of';
  $relation_type->reverse_label = 'genetically related to';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:egg_donor',
    1 => 'crm_core_contact:ip',
    2 => 'crm_core_contact:egg',
    3 => 'crm_core_contact:embryo',
    4 => 'crm_core_contact:sperm_specimen',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:child',
    1 => 'crm_core_contact:egg',
    2 => 'crm_core_contact:embryo',
    3 => 'crm_core_contact:sperm_specimen',
  );
  $export['genetic_parent_of'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'own';
  $relation_type->label = 'own';
  $relation_type->reverse_label = 'owned by';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:customer',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:egg',
    1 => 'crm_core_contact:embryo',
    2 => 'crm_core_contact:sperm_specimen',
  );
  $export['own'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'participate_in';
  $relation_type->label = 'participate in';
  $relation_type->reverse_label = 'has participants';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:surrogate',
    1 => 'crm_core_contact:egg_donor',
    2 => 'crm_core_contact:child',
    3 => 'crm_core_contact:customer',
    4 => 'crm_core_contact:clinic',
    5 => 'crm_core_contact:egg',
    6 => 'crm_core_contact:embryo',
    7 => 'crm_core_contact:sperm_specimen',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:journey',
  );
  $export['participate_in'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'preserved_in';
  $relation_type->label = 'preserved in';
  $relation_type->reverse_label = 'preserves';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:egg',
    1 => 'crm_core_contact:embryo',
    2 => 'crm_core_contact:sperm_specimen',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:clinic',
  );
  $export['preserved_in'] = $relation_type;

  return $export;
}
