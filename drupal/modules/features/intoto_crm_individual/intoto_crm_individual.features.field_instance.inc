<?php
/**
 * @file
 * intoto_crm_individual.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function intoto_crm_individual_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'crm_core_contact-individual-contact_name'
  $field_instances['crm_core_contact-individual-contact_name'] = array(
    'bundle' => 'individual',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'contact_name',
    'label' => 'Individual',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'crm_core_contact-individual-field_address'
  $field_instances['crm_core_contact-individual-field_address'] = array(
    'bundle' => 'individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
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
        'weight' => 13,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'crm_core_contact-individual-field_attached_documents'
  $field_instances['crm_core_contact-individual-field_attached_documents'] = array(
    'bundle' => 'individual',
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
        'weight' => 17,
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'crm_core_contact-individual-field_date_of_birth'
  $field_instances['crm_core_contact-individual-field_date_of_birth'] = array(
    'bundle' => 'individual',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 14,
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
      'type' => 'date_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'crm_core_contact-individual-field_date_of_death'
  $field_instances['crm_core_contact-individual-field_date_of_death'] = array(
    'bundle' => 'individual',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_date_of_death',
    'label' => 'Date of Death',
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
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '1950:+3',
      ),
      'type' => 'date_popup',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'crm_core_contact-individual-field_email'
  $field_instances['crm_core_contact-individual-field_email'] = array(
    'bundle' => 'individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 3,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'crm_core_contact-individual-field_facebook_user_name'
  $field_instances['crm_core_contact-individual-field_facebook_user_name'] = array(
    'bundle' => 'individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'crm_core_contact-individual-field_gender'
  $field_instances['crm_core_contact-individual-field_gender'] = array(
    'bundle' => 'individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'crm_core_contact-individual-field_image'
  $field_instances['crm_core_contact-individual-field_image'] = array(
    'bundle' => 'individual',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_image',
    'label' => 'Profile Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'crm_core_contact-individual-field_instant_messaging_collecti'
  $field_instances['crm_core_contact-individual-field_instant_messaging_collecti'] = array(
    'bundle' => 'individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
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
        'weight' => 9,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'crm_core_contact-individual-field_marital_status'
  $field_instances['crm_core_contact-individual-field_marital_status'] = array(
    'bundle' => 'individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_marital_status',
    'label' => 'Marital Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'crm_core_contact-individual-field_phone'
  $field_instances['crm_core_contact-individual-field_phone'] = array(
    'bundle' => 'individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
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
        'weight' => 11,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'crm_core_contact-individual-field_spoken_languages'
  $field_instances['crm_core_contact-individual-field_spoken_languages'] = array(
    'bundle' => 'individual',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'languagefield',
        'settings' => array(
          'format' => array(
            'name' => 'name',
          ),
        ),
        'type' => 'language_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'crm_core_contact',
    'field_name' => 'field_spoken_languages',
    'label' => 'Spoken Languages',
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
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
        'label' => 'above',
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
        'label' => 'above',
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
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
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Attached Documents');
  t('Date of Birth');
  t('Date of Death');
  t('Email');
  t('Facebook User Name');
  t('Gender');
  t('ID');
  t('Individual');
  t('Instant Messaging');
  t('Marital Status');
  t('Number');
  t('Phone');
  t('Profile Image');
  t('Spoken Languages');
  t('Type');

  return $field_instances;
}
