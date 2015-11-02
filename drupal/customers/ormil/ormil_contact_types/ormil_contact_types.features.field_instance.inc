<?php
/**
 * @file
 * ormil_contact_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ormil_contact_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'crm_core_contact-customer-contact_name'
  $field_instances['crm_core_contact-customer-contact_name'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 1,
      ),
      'header' => array(
        'label' => 'hidden',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 0,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 0,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'contact_name',
    'label' => 'Customer',
    'required' => 0,
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'components' => array(
        'credentials' => 0,
        'family' => 0,
        'generational' => 0,
        'given' => 0,
        'middle' => 0,
        'title' => 0,
      ),
      'credentials_inline' => 0,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'labels' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'minimum_components' => array(
        'credentials' => 0,
        'family' => 0,
        'generational' => 0,
        'given' => 0,
        'middle' => 0,
        'title' => 0,
      ),
      'override_format' => 'default',
      'show_component_required_marker' => 0,
      'size' => array(
        'credentials' => 35,
        'family' => 20,
        'generational' => 5,
        'given' => 20,
        'middle' => 20,
        'title' => 6,
      ),
      'title_display' => array(
        'credentials' => 'description',
        'family' => 'description',
        'generational' => 'description',
        'given' => 'description',
        'middle' => 'description',
        'title' => 'description',
      ),
      'title_field' => 'select',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(),
      'type' => 'name_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_agency'
  $field_instances['crm_core_contact-customer-field_agency'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Agency that runs <i>current</i> customer\'s process',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_label_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_agency',
    'label' => 'Agency',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'apply_chosen' => '',
        'available_options' => 'AFS|AFS    
NWSC|NWSC
IARC|IARC
WW|WW
Circle|Circle
ART|ART',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_bedford'
  $field_instances['crm_core_contact-customer-field_bedford'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_label_formatter',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_bedford',
    'label' => 'Bedford',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_campaign'
  $field_instances['crm_core_contact-customer-field_campaign'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_label_formatter',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_campaign',
    'label' => 'Campaign',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_caption'
  $field_instances['crm_core_contact-customer-field_caption'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'header' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_caption',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_customer_type'
  $field_instances['crm_core_contact-customer-field_customer_type'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe this household\'s type',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_icon_formatter',
        'weight' => 2,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_label_formatter',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_customer_type',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_image'
  $field_instances['crm_core_contact-customer-field_image'] = array(
    'bundle' => 'customer',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'header' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'thumbnail_square',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 1,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'thumb_tiny',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 6,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_journey'
  $field_instances['crm_core_contact-customer-field_journey'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Current and past journeys this customer had with ORM',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 12,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_journey',
    'label' => 'Journey',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_managing_country'
  $field_instances['crm_core_contact-customer-field_managing_country'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ORM branch that manages this case',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_label_formatter',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_managing_country',
    'label' => 'Managing Country',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'apply_chosen' => '',
        'available_options' => 'ORM_IL|ORM IL
ORM_ES|ORM ES',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => 'Other',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_mhb'
  $field_instances['crm_core_contact-customer-field_mhb'] = array(
    'bundle' => 'customer',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Men Having Babies supported customer',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_icon_formatter',
        'weight' => 7,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_label_formatter',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_mhb',
    'label' => 'MHB',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_notes'
  $field_instances['crm_core_contact-customer-field_notes'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'small_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'crm_core_contact-customer-field_originally_came_from'
  $field_instances['crm_core_contact-customer-field_originally_came_from'] = array(
    'bundle' => 'customer',
    'default_value' => array(
      0 => array(
        'value' => 'manually',
      ),
    ),
    'deleted' => 0,
    'description' => 'Mark how this customer was introduced to this system',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'small_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_originally_came_from',
    'label' => 'Registered By',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => 'manually|Manually
contact_us_form|Contact us Form',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'ignore',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_patient_status'
  $field_instances['crm_core_contact-customer-field_patient_status'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'header' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_icon_formatter',
        'weight' => 5,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_icon_formatter',
        'weight' => 6,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_label_formatter',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_patient_status',
    'label' => 'Patient Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_program'
  $field_instances['crm_core_contact-customer-field_program'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Customer\'s <i>current</i> program',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'header' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'one_liner' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_label_formatter',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_program',
    'label' => 'Program',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'apply_chosen' => '',
        'available_options' => 'Global|Global
Guarantee|Guarantee
Promise|Promise',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Specific',
        'other_size' => 60,
        'other_title' => 'Program Description',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_referred_by'
  $field_instances['crm_core_contact-customer-field_referred_by'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_referred_by',
    'label' => 'Referred By',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_sales_category'
  $field_instances['crm_core_contact-customer-field_sales_category'] = array(
    'bundle' => 'customer',
    'default_value' => array(
      0 => array(
        'value' => 'new',
      ),
    ),
    'deleted' => 0,
    'description' => 'Current sales category for this customer',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'header' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_icon_formatter',
        'weight' => 4,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_icon_formatter',
        'weight' => 5,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_label_formatter',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_sales_category',
    'label' => 'Sales Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_status'
  $field_instances['crm_core_contact-customer-field_status'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<i>Current</i> status of customer',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'header' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_icon_formatter',
        'weight' => 3,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_icon_formatter',
        'weight' => 4,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_label_formatter',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_surrogacy_type'
  $field_instances['crm_core_contact-customer-field_surrogacy_type'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select which kind of surrogacy process this household should go through',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_icon_formatter',
        'weight' => 3,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_label_formatter',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_surrogacy_type',
    'label' => 'Surrogacy Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-contact_name'
  $field_instances['crm_core_contact-ip-contact_name'] = array(
    'bundle' => 'ip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'name',
        'settings' => array(
          'format' => 'short_full',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 1,
      ),
      'header' => array(
        'label' => 'hidden',
        'module' => 'name',
        'settings' => array(
          'format' => 'short_full',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 1,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'module' => 'name',
        'settings' => array(
          'format' => 'short_full',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 1,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'name',
        'settings' => array(
          'format' => 'short_full',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'contact_name',
    'label' => 'Name',
    'required' => 1,
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'credentials_inline' => 0,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'override_format' => 'default',
      'show_component_required_marker' => 0,
      'size' => array(
        'credentials' => 35,
        'family' => 20,
        'generational' => 5,
        'given' => 20,
        'middle' => 20,
        'title' => 6,
      ),
      'title_display' => array(
        'credentials' => 'description',
        'family' => 'description',
        'generational' => 'description',
        'given' => 'description',
        'middle' => 'description',
        'title' => 'description',
      ),
      'title_field' => 'select',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(),
      'type' => 'name_widget',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-field_address'
  $field_instances['crm_core_contact-ip-field_address'] = array(
    'bundle' => 'ip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 13,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 6,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'small_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-field_attached_documents'
  $field_instances['crm_core_contact-ip-field_attached_documents'] = array(
    'bundle' => 'ip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 17,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'small_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_attached_documents',
    'label' => 'Attached Documents',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-field_date_of_birth'
  $field_instances['crm_core_contact-ip-field_date_of_birth'] = array(
    'bundle' => 'ip',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 14,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 7,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'small_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_date_of_birth',
    'label' => 'Date of Birth',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'within',
        'text_parts' => array(),
        'year_range' => '1950:+1',
      ),
      'type' => 'date_popup',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-field_email'
  $field_instances['crm_core_contact-ip-field_email'] = array(
    'bundle' => 'ip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 2,
      ),
      'header' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_icon_formatter',
        'weight' => 2,
      ),
      'small_block' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-field_facebook_user_name'
  $field_instances['crm_core_contact-ip-field_facebook_user_name'] = array(
    'bundle' => 'ip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'header' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'one_liner' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'small_block' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_facebook_user_name',
    'label' => 'Facebook User Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-field_gender'
  $field_instances['crm_core_contact-ip-field_gender'] = array(
    'bundle' => 'ip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 15,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'small_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_gender',
    'label' => 'Gender',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-field_hiv_pos'
  $field_instances['crm_core_contact-ip-field_hiv_pos'] = array(
    'bundle' => 'ip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Check this if you know the person is HIV positive',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 19,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'small_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_hiv_pos',
    'label' => 'HIV',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-field_image'
  $field_instances['crm_core_contact-ip-field_image'] = array(
    'bundle' => 'ip',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'thumbnail_square',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thumbnail_square',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'header' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'thumbnail_square',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'thumb_tiny',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'thumbnail_square',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_image',
    'label' => 'Profile Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 7,
      'file_directory' => 'profile_images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'crm_core_contact-ip-field_instant_messaging_collecti'
  $field_instances['crm_core_contact-ip-field_instant_messaging_collecti'] = array(
    'bundle' => 'ip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'contact_details' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
        ),
        'type' => 'field_collection_list',
        'weight' => 4,
      ),
      'header' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'one_liner' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'small_block' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_instant_messaging_collecti',
    'label' => 'Instant Messaging',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-field_notes'
  $field_instances['crm_core_contact-ip-field_notes'] = array(
    'bundle' => 'ip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 21,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'small_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-field_occupation'
  $field_instances['crm_core_contact-ip-field_occupation'] = array(
    'bundle' => 'ip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 20,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'small_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_occupation',
    'label' => 'Occupation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-field_originally_came_from'
  $field_instances['crm_core_contact-ip-field_originally_came_from'] = array(
    'bundle' => 'ip',
    'default_value' => array(
      0 => array(
        'value' => 'manually',
      ),
    ),
    'deleted' => 0,
    'description' => 'Mark how this customer was introduced to this system',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'one_liner' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'small_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_originally_came_from',
    'label' => 'Registered By',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'select_or_other',
      'settings' => array(
        'available_options' => 'manually|Manually
contact_us_form|Contact us Form',
        'available_options_php' => '',
        'markup_available_options_php' => '&lt;none&gt;',
        'other' => 'Other',
        'other_size' => 60,
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'sort_options' => 0,
      ),
      'type' => 'select_or_other_buttons',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'crm_core_contact-ip-field_phone'
  $field_instances['crm_core_contact-ip-field_phone'] = array(
    'bundle' => 'ip',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'contact_details' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 11,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 5,
      ),
      'header' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'one_liner' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_icon_formatter',
        'weight' => 3,
      ),
      'small_block' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_address-field_address_details'
  $field_instances['field_collection_item-field_address-field_address_details'] = array(
    'bundle' => 'field_address',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_address_details',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => 'IL',
        'format_handlers' => array(
          'address' => 'address',
          'address-optional' => 'address-optional',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_address-field_address_type'
  $field_instances['field_collection_item-field_address-field_address_type'] = array(
    'bundle' => 'field_address',
    'default_value' => array(
      0 => array(
        'value' => 'home',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_address_type',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_children-contact_name'
  $field_instances['field_collection_item-field_children-contact_name'] = array(
    'bundle' => 'field_children',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'name',
        'settings' => array(
          'format' => 'default',
          'markup' => 0,
          'multiple' => 'default',
          'multiple_and' => 'text',
          'multiple_delimiter' => ', ',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_first' => 1,
          'multiple_el_al_min' => 3,
          'output' => 'default',
        ),
        'type' => 'name_formatter',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'contact_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'component_css' => '',
      'component_layout' => 'default',
      'credentials_inline' => 0,
      'field_type' => array(
        'credentials' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'title' => 'select',
      ),
      'generational_field' => 'select',
      'inline_css' => array(
        'credentials' => '',
        'family' => '',
        'generational' => '',
        'given' => '',
        'middle' => '',
        'title' => '',
      ),
      'override_format' => 'default',
      'show_component_required_marker' => 0,
      'size' => array(
        'credentials' => 35,
        'family' => 20,
        'generational' => 5,
        'given' => 20,
        'middle' => 20,
        'title' => 6,
      ),
      'title_display' => array(
        'credentials' => 'description',
        'family' => 'description',
        'generational' => 'description',
        'given' => 'description',
        'middle' => 'description',
        'title' => 'description',
      ),
      'title_field' => 'select',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'name',
      'settings' => array(),
      'type' => 'name_widget',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_children-field_date_of_birth'
  $field_instances['field_collection_item-field_children-field_date_of_birth'] = array(
    'bundle' => 'field_children',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_date_of_birth',
    'label' => 'Date of Birth',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-10:+0',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_children-field_notes'
  $field_instances['field_collection_item-field_children-field_notes'] = array(
    'bundle' => 'field_children',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_instant_messaging_collecti-field_instant_messaging_id'
  $field_instances['field_collection_item-field_instant_messaging_collecti-field_instant_messaging_id'] = array(
    'bundle' => 'field_instant_messaging_collecti',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_instant_messaging_id',
    'label' => 'ID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_instant_messaging_collecti-field_instant_messaging_type'
  $field_instances['field_collection_item-field_instant_messaging_collecti-field_instant_messaging_type'] = array(
    'bundle' => 'field_instant_messaging_collecti',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_instant_messaging_type',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_journey-field_children'
  $field_instances['field_collection_item-field_journey-field_children'] = array(
    'bundle' => 'field_journey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List children who were born in this journey',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_children',
    'label' => 'Children',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_journey-field_notes'
  $field_instances['field_collection_item-field_journey-field_notes'] = array(
    'bundle' => 'field_journey',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_journey-field_time_period'
  $field_instances['field_collection_item-field_journey-field_time_period'] = array(
    'bundle' => 'field_journey',
    'deleted' => 0,
    'description' => 'Select date of journey start and (optionally) end.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_time_period',
    'label' => 'Time Period',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_phone-field_number'
  $field_instances['field_collection_item-field_phone-field_number'] = array(
    'bundle' => 'field_phone',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'cck_phone',
        'settings' => array(),
        'type' => 'global_phone_number',
        'weight' => 0,
      ),
      'fieldcollection_label' => array(
        'label' => 'hidden',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_label_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_number',
    'label' => 'Number',
    'required' => 0,
    'settings' => array(
      'all_country_codes' => 1,
      'country_code_position' => 'before',
      'country_codes' => array(
        'country_selection' => array(
          'ad' => 0,
          'ae' => 0,
          'af' => 0,
          'ag' => 0,
          'ai' => 0,
          'al' => 0,
          'am' => 0,
          'an' => 0,
          'ao' => 0,
          'ar' => 0,
          'as' => 0,
          'at' => 0,
          'au' => 0,
          'aw' => 0,
          'az' => 0,
          'ba' => 0,
          'bb' => 0,
          'bd' => 0,
          'be' => 0,
          'bf' => 0,
          'bg' => 0,
          'bh' => 0,
          'bi' => 0,
          'bj' => 0,
          'bm' => 0,
          'bn' => 0,
          'bo' => 0,
          'br' => 0,
          'bs' => 0,
          'bt' => 0,
          'bw' => 0,
          'by' => 0,
          'bz' => 0,
          'ca' => 0,
          'cc' => 0,
          'cd' => 0,
          'cf' => 0,
          'cg' => 0,
          'ch' => 0,
          'ci' => 0,
          'ck' => 0,
          'cl' => 0,
          'cm' => 0,
          'cn' => 0,
          'co' => 0,
          'cr' => 0,
          'cu' => 0,
          'cv' => 0,
          'cx' => 0,
          'cy' => 0,
          'cz' => 0,
          'de' => 0,
          'dj' => 0,
          'dk' => 0,
          'dm' => 0,
          'do' => 0,
          'dz' => 0,
          'ec' => 0,
          'ee' => 0,
          'eg' => 0,
          'er' => 0,
          'es' => 0,
          'et' => 0,
          'fi' => 0,
          'fj' => 0,
          'fk' => 0,
          'fm' => 0,
          'fo' => 0,
          'fr' => 0,
          'ga' => 0,
          'gb' => 0,
          'gd' => 0,
          'ge' => 0,
          'gf' => 0,
          'gh' => 0,
          'gi' => 0,
          'gl' => 0,
          'gm' => 0,
          'gn' => 0,
          'gp' => 0,
          'gq' => 0,
          'gr' => 0,
          'gt' => 0,
          'gu' => 0,
          'gw' => 0,
          'gy' => 0,
          'hk' => 0,
          'hn' => 0,
          'hr' => 0,
          'ht' => 0,
          'hu' => 0,
          'id' => 0,
          'ie' => 0,
          'il' => 0,
          'in' => 0,
          'io' => 0,
          'iq' => 0,
          'ir' => 0,
          'is' => 0,
          'it' => 0,
          'jm' => 0,
          'jo' => 0,
          'jp' => 0,
          'ke' => 0,
          'kg' => 0,
          'kh' => 0,
          'ki' => 0,
          'km' => 0,
          'kn' => 0,
          'kp' => 0,
          'kr' => 0,
          'kw' => 0,
          'ky' => 0,
          'kz' => 0,
          'la' => 0,
          'lb' => 0,
          'lc' => 0,
          'li' => 0,
          'lk' => 0,
          'lr' => 0,
          'ls' => 0,
          'lt' => 0,
          'lu' => 0,
          'lv' => 0,
          'ly' => 0,
          'ma' => 0,
          'mc' => 0,
          'md' => 0,
          'me' => 0,
          'mg' => 0,
          'mh' => 0,
          'mk' => 0,
          'ml' => 0,
          'mm' => 0,
          'mn' => 0,
          'mo' => 0,
          'mp' => 0,
          'mq' => 0,
          'mr' => 0,
          'ms' => 0,
          'mt' => 0,
          'mu' => 0,
          'mv' => 0,
          'mw' => 0,
          'mx' => 0,
          'my' => 0,
          'mz' => 0,
          'na' => 0,
          'nc' => 0,
          'ne' => 0,
          'nf' => 0,
          'ng' => 0,
          'ni' => 0,
          'nl' => 0,
          'no' => 0,
          'np' => 0,
          'nr' => 0,
          'nu' => 0,
          'nz' => 0,
          'om' => 0,
          'pa' => 0,
          'pe' => 0,
          'pf' => 0,
          'pg' => 0,
          'ph' => 0,
          'pk' => 0,
          'pl' => 0,
          'pm' => 0,
          'pr' => 0,
          'ps' => 0,
          'pt' => 0,
          'pw' => 0,
          'py' => 0,
          'qa' => 0,
          'ro' => 0,
          'rs' => 0,
          'ru' => 0,
          'rw' => 0,
          'sa' => 0,
          'sb' => 0,
          'sc' => 0,
          'sd' => 0,
          'se' => 0,
          'sg' => 0,
          'sh' => 0,
          'si' => 0,
          'sk' => 0,
          'sl' => 0,
          'sm' => 0,
          'sn' => 0,
          'so' => 0,
          'sr' => 0,
          'ss' => 0,
          'st' => 0,
          'sv' => 0,
          'sy' => 0,
          'sz' => 0,
          'tc' => 0,
          'td' => 0,
          'tg' => 0,
          'th' => 0,
          'tj' => 0,
          'tk' => 0,
          'tm' => 0,
          'tn' => 0,
          'to' => 0,
          'tp' => 0,
          'tr' => 0,
          'tt' => 0,
          'tv' => 0,
          'tw' => 0,
          'tz' => 0,
          'ua' => 0,
          'ug' => 0,
          'us' => 0,
          'uy' => 0,
          'uz' => 0,
          'va' => 0,
          'vc' => 0,
          've' => 0,
          'vg' => 0,
          'vi' => 0,
          'vn' => 0,
          'vu' => 0,
          'wf' => 0,
          'ws' => 0,
          'ye' => 0,
          'yt' => 0,
          'za' => 0,
          'zm' => 0,
          'zw' => 0,
        ),
        'hide_single_cc' => 0,
      ),
      'default_country' => 'il',
      'enable_country_level_validation' => 1,
      'enable_default_country' => 1,
      'enable_extension' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'cck_phone',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'phone_number',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_phone-field_type'
  $field_instances['field_collection_item-field_phone-field_type'] = array(
    'bundle' => 'field_phone',
    'default_value' => array(
      0 => array(
        'value' => 'mobile',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'fieldcollection_label' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_type',
    'label' => 'Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<i>Current</i> status of customer');
  t('Address');
  t('Agency');
  t('Agency that runs <i>current</i> customer\'s process');
  t('Attached Documents');
  t('Bedford');
  t('Campaign');
  t('Check this if you know the person is HIV positive');
  t('Children');
  t('Current and past journeys this customer had with ORM');
  t('Current sales category for this customer');
  t('Customer');
  t('Customer\'s <i>current</i> program');
  t('Date of Birth');
  t('Describe this household\'s type');
  t('Email');
  t('Facebook User Name');
  t('Gender');
  t('HIV');
  t('ID');
  t('Image');
  t('Instant Messaging');
  t('Journey');
  t('List children who were born in this journey');
  t('MHB');
  t('Managing Country');
  t('Mark how this customer was introduced to this system');
  t('Men Having Babies supported customer');
  t('Name');
  t('Notes');
  t('Number');
  t('ORM branch that manages this case');
  t('Occupation');
  t('Patient Status');
  t('Phone');
  t('Profile Image');
  t('Program');
  t('Referred By');
  t('Registered By');
  t('Sales Category');
  t('Select date of journey start and (optionally) end.');
  t('Select which kind of surrogacy process this household should go through');
  t('Status');
  t('Surrogacy Type');
  t('Time Period');
  t('Type');

  return $field_instances;
}
