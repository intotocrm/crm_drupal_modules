<?php
/**
 * @file
 * crm_core_ip_contact_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function crm_core_ip_contact_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accordion_item_address|crm_core_contact|ip|form';
  $field_group->group_name = 'group_accordion_item_address';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'ip';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_accordion_group';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '20',
    'children' => array(
      0 => 'field_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_accordion_item_address|crm_core_contact|ip|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio_fields|crm_core_contact|ip|form';
  $field_group->group_name = 'group_bio_fields';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'ip';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_accordion_group';
  $field_group->data = array(
    'label' => 'Bio',
    'weight' => '21',
    'children' => array(
      0 => 'field_date_of_birth',
      1 => 'field_date_of_death',
      2 => 'field_gender',
      3 => 'field_hiv_pos',
      4 => 'field_occupation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bio-fields field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bio_fields|crm_core_contact|ip|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_communication_fields|crm_core_contact|ip|form';
  $field_group->group_name = 'group_communication_fields';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'ip';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_accordion_group';
  $field_group->data = array(
    'label' => 'Communication',
    'weight' => '18',
    'children' => array(
      0 => 'field_email',
      1 => 'field_facebook_user_name',
      2 => 'field_instant_messaging_collecti',
      3 => 'field_phone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Communication',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-communication-fields field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_communication_fields|crm_core_contact|ip|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_files_fields|crm_core_contact|ip|form';
  $field_group->group_name = 'group_files_fields';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'ip';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_accordion_group';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '22',
    'children' => array(
      0 => 'field_attached_documents',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-files-fields field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_files_fields|crm_core_contact|ip|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_accordion_group|crm_core_contact|ip|form';
  $field_group->group_name = 'group_profile_accordion_group';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'ip';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'profile accordion group',
    'weight' => '2',
    'children' => array(
      0 => 'group_profile_image',
      1 => 'group_accordion_item_address',
      2 => 'group_communication_fields',
      3 => 'group_bio_fields',
      4 => 'group_files_fields',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'profile accordion group',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_profile_accordion_group|crm_core_contact|ip|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_image|crm_core_contact|ip|form';
  $field_group->group_name = 'group_profile_image';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'ip';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_accordion_group';
  $field_group->data = array(
    'label' => 'Profile Image',
    'weight' => '19',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Profile Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_image|crm_core_contact|ip|form'] = $field_group;

  return $export;
}
