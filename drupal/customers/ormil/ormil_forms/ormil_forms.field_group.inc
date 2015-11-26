<?php
/**
 * @file
 * ormil_forms.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ormil_forms_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_household|flexiform|quick_houshold|form';
  $field_group->group_name = 'group_household';
  $field_group->entity_type = 'flexiform';
  $field_group->bundle = 'quick_houshold';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Household',
    'weight' => '1',
    'children' => array(
      0 => 'base_entity:field:field_agency',
      1 => 'base_entity:field:field_caption',
      2 => 'base_entity:field:field_mhb',
      3 => 'base_entity:field:field_status',
      4 => 'base_entity:field:field_managing_country',
      5 => 'base_entity:field:field_surrogacy_type',
      6 => 'base_entity:field:field_notes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_household|flexiform|quick_houshold|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ip1|flexiform|quick_houshold|form';
  $field_group->group_name = 'group_ip1';
  $field_group->entity_type = 'flexiform';
  $field_group->bundle = 'quick_houshold';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ips_container';
  $field_group->data = array(
    'label' => 'IP #1',
    'weight' => '6',
    'children' => array(
      0 => 'ip1:field:contact_name',
      1 => 'ip1:field:field_email',
      2 => 'ip1:field:field_phone',
      3 => 'ip1:field:field_date_of_birth',
      4 => 'ip1:field:field_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'IP #1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'column-field-group',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ip1|flexiform|quick_houshold|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ip2|flexiform|quick_houshold|form';
  $field_group->group_name = 'group_ip2';
  $field_group->entity_type = 'flexiform';
  $field_group->bundle = 'quick_houshold';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ips_container';
  $field_group->data = array(
    'label' => 'IP #2',
    'weight' => '8',
    'children' => array(
      0 => 'ip2:field:contact_name',
      1 => 'ip2:field:field_email',
      2 => 'ip2:field:field_phone',
      3 => 'ip2:field:field_date_of_birth',
      4 => 'ip2:field:field_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'IP #2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'column-field-group',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_ip2|flexiform|quick_houshold|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ips_container|flexiform|quick_houshold|form';
  $field_group->group_name = 'group_ips_container';
  $field_group->entity_type = 'flexiform';
  $field_group->bundle = 'quick_houshold';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'IPs',
    'weight' => '0',
    'children' => array(
      0 => 'group_ip1',
      1 => 'group_ip2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ips_container|flexiform|quick_houshold|form'] = $field_group;

  return $export;
}
