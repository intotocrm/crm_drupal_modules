<?php
/**
 * @file
 * ormil_contact_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ormil_contact_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accordion_item_address|crm_core_contact|ip|form';
  $field_group->group_name = 'group_accordion_item_address';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'ip';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '24',
    'children' => array(
      0 => 'field_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-accordion-item-address field-group-tab',
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
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Bio',
    'weight' => '25',
    'children' => array(
      0 => 'field_date_of_birth',
      1 => 'field_gender',
      2 => 'field_hiv_pos',
      3 => 'field_occupation',
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
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Communication',
    'weight' => '22',
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
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '26',
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
      0 => 'field_journey',
      1 => 'field_surrogacy_type',
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
  $field_group->identifier = 'group_profile_image|crm_core_contact|ip|form';
  $field_group->group_name = 'group_profile_image';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'ip';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile_tabs';
  $field_group->data = array(
    'label' => 'Profile_Image',
    'weight' => '23',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-profile-image field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_image|crm_core_contact|ip|form'] = $field_group;

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
      1 => 'group_personal',
      2 => 'group_sales',
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
  $field_group->identifier = 'group_profile_tabs|crm_core_contact|ip|form';
  $field_group->group_name = 'group_profile_tabs';
  $field_group->entity_type = 'crm_core_contact';
  $field_group->bundle = 'ip';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tabs',
    'weight' => '22',
    'children' => array(
      0 => 'group_accordion_item_address',
      1 => 'group_bio_fields',
      2 => 'group_communication_fields',
      3 => 'group_files_fields',
      4 => 'group_profile_image',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-profile-tabs field-group-tabs',
      ),
    ),
  );
  $export['group_profile_tabs|crm_core_contact|ip|form'] = $field_group;

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
      0 => 'field_campaign',
      1 => 'field_mhb',
      2 => 'field_patient_status',
      3 => 'field_referred_by',
      4 => 'field_sales_category',
      5 => 'field_status',
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
