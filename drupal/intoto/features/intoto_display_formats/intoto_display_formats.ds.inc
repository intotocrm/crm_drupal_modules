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
  $ds_layout->id = 'crm_core_contact|customer|header';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'customer';
  $ds_layout->view_mode = 'header';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'contact_name',
        1 => 'field_caption_in_native_language',
        2 => 'field_customer_number',
        3 => 'field_image',
      ),
    ),
    'fields' => array(
      'contact_name' => 'ds_content',
      'field_caption_in_native_language' => 'ds_content',
      'field_customer_number' => 'ds_content',
      'field_image' => 'ds_content',
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
        0 => 'contact_name',
        1 => 'field_customer_number',
      ),
    ),
    'fields' => array(
      'contact_name' => 'ds_content',
      'field_customer_number' => 'ds_content',
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
  $ds_layout->id = 'crm_core_contact|ip|header';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'ip';
  $ds_layout->view_mode = 'header';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'contact_name',
        2 => 'field_name_in_english',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'contact_name' => 'ds_content',
      'field_name_in_english' => 'ds_content',
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
  $export['crm_core_contact|ip|header'] = $ds_layout;

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
        0 => 'contact_name',
        1 => 'field_image',
      ),
    ),
    'fields' => array(
      'contact_name' => 'ds_content',
      'field_image' => 'ds_content',
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
  $ds_layout->id = 'crm_core_contact|journey|header';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'journey';
  $ds_layout->view_mode = 'header';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'contact_name',
      ),
    ),
    'fields' => array(
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
  $export['crm_core_contact|journey|header'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'crm_core_contact|surrogate|header';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'surrogate';
  $ds_layout->view_mode = 'header';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'contact_name',
        1 => 'field_image',
      ),
    ),
    'fields' => array(
      'contact_name' => 'ds_content',
      'field_image' => 'ds_content',
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
  $export['crm_core_contact|surrogate|header'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'crm_core_contact|surrogate|one_liner';
  $ds_layout->entity_type = 'crm_core_contact';
  $ds_layout->bundle = 'surrogate';
  $ds_layout->view_mode = 'one_liner';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'contact_name',
        2 => 'field_email',
        3 => 'field_phone',
        4 => 'field_surrogate_number',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'contact_name' => 'ds_content',
      'field_email' => 'ds_content',
      'field_phone' => 'ds_content',
      'field_surrogate_number' => 'ds_content',
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
  $export['crm_core_contact|surrogate|one_liner'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_address|field_list';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_address';
  $ds_layout->view_mode = 'field_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_address_details',
        1 => 'field_address_type',
      ),
    ),
    'fields' => array(
      'field_address_details' => 'ds_content',
      'field_address_type' => 'ds_content',
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
  $export['field_collection_item|field_address|field_list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_instant_messaging_collecti|field_list';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_instant_messaging_collecti';
  $ds_layout->view_mode = 'field_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_instant_messaging_type',
        1 => 'field_instant_messaging_id',
      ),
    ),
    'fields' => array(
      'field_instant_messaging_type' => 'ds_content',
      'field_instant_messaging_id' => 'ds_content',
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
  $export['field_collection_item|field_instant_messaging_collecti|field_list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_phone|field_list';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_phone';
  $ds_layout->view_mode = 'field_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_number',
        1 => 'field_type',
      ),
    ),
    'fields' => array(
      'field_number' => 'ds_content',
      'field_type' => 'ds_content',
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
  $export['field_collection_item|field_phone|field_list'] = $ds_layout;

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
        0 => 'field_type',
        1 => 'field_number',
      ),
    ),
    'fields' => array(
      'field_type' => 'ds_content',
      'field_number' => 'ds_content',
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
  $ds_view_mode->view_mode = 'field_list';
  $ds_view_mode->label = 'Field List';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['field_list'] = $ds_view_mode;

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
  $ds_view_mode->view_mode = 'header';
  $ds_view_mode->label = 'Header';
  $ds_view_mode->entities = array(
    'crm_core_contact' => 'crm_core_contact',
  );
  $export['header'] = $ds_view_mode;

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
