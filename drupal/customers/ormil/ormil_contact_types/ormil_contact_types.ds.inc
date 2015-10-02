<?php
/**
 * @file
 * ormil_contact_types.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function ormil_contact_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'crm_core_contact|customer|default';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'customer';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_agency',
        1 => 'field_program',
        2 => 'field_bedford',
        3 => 'field_customer_type',
        4 => 'field_surrogacy_type',
        5 => 'field_managing_country',
        6 => 'field_mhb',
        7 => 'field_status',
        8 => 'field_sales_category',
        9 => 'field_patient_status',
        10 => 'field_journey',
        11 => 'field_campaign',
        12 => 'field_referred_by',
        13 => 'field_notes',
      ),
    ),
    'fields' => array(
      'field_agency' => 'ds_content',
      'field_program' => 'ds_content',
      'field_bedford' => 'ds_content',
      'field_customer_type' => 'ds_content',
      'field_surrogacy_type' => 'ds_content',
      'field_managing_country' => 'ds_content',
      'field_mhb' => 'ds_content',
      'field_status' => 'ds_content',
      'field_sales_category' => 'ds_content',
      'field_patient_status' => 'ds_content',
      'field_journey' => 'ds_content',
      'field_campaign' => 'ds_content',
      'field_referred_by' => 'ds_content',
      'field_notes' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['crm_core_contact|customer|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'crm_core_contact|customer|header';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'customer';
  $ds_layout->view_mode = 'header';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_caption',
        2 => 'field_status',
        3 => 'field_sales_category',
        4 => 'field_patient_status',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_caption' => 'ds_content',
      'field_status' => 'ds_content',
      'field_sales_category' => 'ds_content',
      'field_patient_status' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['crm_core_contact|customer|header'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ormil_contact_types_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'header';
  $ds_view_mode->label = 'Header';
  $ds_view_mode->entities = array(
    'crm_core_contact' => 'crm_core_contact',
  );
  $export['header'] = $ds_view_mode;

  return $export;
}
