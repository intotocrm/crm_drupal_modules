<?php
/**
 * @file
 * orm_il_crm_core_customer_contact_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function orm_il_crm_core_customer_contact_type_field_default_field_instances() {
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
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
      'settings' => array(),
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
      'settings' => array(),
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
      'settings' => array(),
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

  // Exported field_instance: 'crm_core_contact-customer-field_test_field'
  $field_instances['crm_core_contact-customer-field_test_field'] = array(
    'bundle' => 'customer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_test_field',
    'label' => 'test_field',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'crm_core_contact-customer-field_test_record'
  $field_instances['crm_core_contact-customer-field_test_record'] = array(
    'bundle' => 'customer',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'only for dev needs. hide this',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'intoto_crm_field_formatters',
        'settings' => array(),
        'type' => 'intoto_bootstrap_formatter',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'small_block' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_test_record',
    'label' => 'Test Record',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
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
      'default_value' => 'now',
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
      'default_value' => 'now',
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
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<i>Current</i> status of customer');
  t('Agency');
  t('Agency that runs <i>current</i> customer\'s process');
  t('Bedford');
  t('Campaign');
  t('Children');
  t('Current and past journeys this customer had with ORM');
  t('Current sales category for this customer');
  t('Customer');
  t('Customer\'s <i>current</i> program');
  t('Date of Birth');
  t('Describe this household\'s type');
  t('Journey');
  t('List children who were born in this journey');
  t('MHB');
  t('Managing Country');
  t('Mark how this customer was introduced to this system');
  t('Men Having Babies supported customer');
  t('Name');
  t('Notes');
  t('ORM branch that manages this case');
  t('Patient Status');
  t('Program');
  t('Referred By');
  t('Registered By');
  t('Sales Category');
  t('Select date of journey start and (optionally) end.');
  t('Select which kind of surrogacy process this household should go through');
  t('Status');
  t('Surrogacy Type');
  t('Test Record');
  t('Time Period');
  t('Type');
  t('only for dev needs. hide this');
  t('test_field');

  return $field_instances;
}
