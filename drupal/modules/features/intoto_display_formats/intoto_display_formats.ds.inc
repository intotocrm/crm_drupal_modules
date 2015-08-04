<?php
/**
 * @file
 * intoto_display_formats.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function intoto_display_formats_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'crm_core_contact|customer|small_block';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'customer';
  $ds_layout->view_mode = 'small_block';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'contact_name',
        1 => 'field_agency',
        2 => 'field_program',
        3 => 'field_bedford',
        4 => 'field_customer_type',
        5 => 'field_surrogacy_type',
        6 => 'field_managing_country',
        7 => 'field_mhb',
        8 => 'field_status',
        9 => 'field_sales_category',
        10 => 'field_patient_status',
        11 => 'field_journey',
        12 => 'field_campaign',
        13 => 'field_referred_by',
        14 => 'field_test_record',
      ),
    ),
    'fields' => array(
      'contact_name' => 'ds_content',
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
      'field_test_record' => 'ds_content',
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
  $export['crm_core_contact|customer|small_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'crm_core_contact|ip|small_block';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'ip';
  $ds_layout->view_mode = 'small_block';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'contact_name',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'contact_name' => 'ds_content',
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
  $export['crm_core_contact|ip|small_block'] = $ds_layout;

  return $export;
}
