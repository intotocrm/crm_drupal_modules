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
  $ds_layout->id = 'crm_core_contact|customer|one_liner';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'customer';
  $ds_layout->view_mode = 'one_liner';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'contact_name',
        1 => 'field_image',
        2 => 'field_customer_type',
        3 => 'field_surrogacy_type',
        4 => 'field_status',
        5 => 'field_sales_category',
        6 => 'field_patient_status',
        7 => 'field_mhb',
      ),
    ),
    'fields' => array(
      'contact_name' => 'ds_content',
      'field_image' => 'ds_content',
      'field_customer_type' => 'ds_content',
      'field_surrogacy_type' => 'ds_content',
      'field_status' => 'ds_content',
      'field_sales_category' => 'ds_content',
      'field_patient_status' => 'ds_content',
      'field_mhb' => 'ds_content',
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
  $export['crm_core_contact|customer|one_liner'] = $ds_layout;

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
        0 => 'field_image',
        1 => 'contact_name',
        2 => 'field_agency',
        3 => 'field_program',
        4 => 'field_bedford',
        5 => 'field_customer_type',
        6 => 'field_surrogacy_type',
        7 => 'field_managing_country',
        8 => 'field_mhb',
        9 => 'field_status',
        10 => 'field_sales_category',
        11 => 'field_patient_status',
        12 => 'field_journey',
        13 => 'field_campaign',
        14 => 'field_referred_by',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
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
  $ds_layout->id = 'crm_core_contact|ip|one_liner';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'ip';
  $ds_layout->view_mode = 'one_liner';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'contact_name',
        2 => 'field_email',
        3 => 'field_phone',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'contact_name' => 'ds_content',
      'field_email' => 'ds_content',
      'field_phone' => 'ds_content',
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
  $export['crm_core_contact|ip|one_liner'] = $ds_layout;

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

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_phone|fieldcollection_label';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_phone';
  $ds_layout->view_mode = 'fieldcollection_label';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_number',
      ),
    ),
    'fields' => array(
      'field_number' => 'ds_content',
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
  $export['field_collection_item|field_phone|fieldcollection_label'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function intoto_display_formats_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'contact_details';
  $ds_view_mode->label = 'Contact Details';
  $ds_view_mode->entities = array(
    'crm_core_contact' => 'crm_core_contact',
  );
  $export['contact_details'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'fieldcollection_label';
  $ds_view_mode->label = 'FieldCollection Label';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['fieldcollection_label'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'one_liner';
  $ds_view_mode->label = 'one liner';
  $ds_view_mode->entities = array(
    'crm_core_contact' => 'crm_core_contact',
    'ticker' => 'ticker',
  );
  $export['one_liner'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'small_block';
  $ds_view_mode->label = 'Small Block';
  $ds_view_mode->entities = array(
    'comment' => 'comment',
    'crm_core_activity' => 'crm_core_activity',
    'crm_core_contact' => 'crm_core_contact',
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
    'relation' => 'relation',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
  );
  $export['small_block'] = $ds_view_mode;

  return $export;
}
