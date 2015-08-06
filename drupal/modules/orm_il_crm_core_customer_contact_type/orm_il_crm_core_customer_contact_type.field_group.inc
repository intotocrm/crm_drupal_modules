<?php
/**
 * @file
 * orm_il_crm_core_customer_contact_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function orm_il_crm_core_customer_contact_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_journeys|crm_core_contact|customer|form';
  $field_group->group_name = 'group_journeys';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'customer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Journeys',
    'weight' => '19',
    'children' => array(
      0 => 'field_surrogacy_type',
      1 => 'field_journey',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-journeys field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_journeys|crm_core_contact|customer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|crm_core_contact|customer|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'customer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Personal',
    'weight' => '20',
    'children' => array(
      0 => 'field_bedford',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personal field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_personal|crm_core_contact|customer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_tabs|crm_core_contact|customer|form';
  $field_group->group_name = 'group_profile_tabs';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'customer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '7',
    'children' => array(
      0 => 'group_journeys',
      1 => 'group_sales',
      2 => 'group_personal',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-profile-tabs field-group-tabs',
      ),
    ),
  );
  $export['group_profile_tabs|crm_core_contact|customer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sales|crm_core_contact|customer|form';
  $field_group->group_name = 'group_sales';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'customer';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Sales',
    'weight' => '18',
    'children' => array(
      0 => 'field_mhb',
      1 => 'field_status',
      2 => 'field_sales_category',
      3 => 'field_patient_status',
      4 => 'field_campaign',
      5 => 'field_referred_by',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sales field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sales|crm_core_contact|customer|form'] = $field_group;

  return $export;
}
