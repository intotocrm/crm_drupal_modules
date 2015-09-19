#!/usr/bin/python
import re

import_code = """
  $items['ACTIVITY_TYPE'] = entity_import('crm_core_activity_type', '{
    "type" : "ACTIVITY_TYPE",
    "label" : "ACTIVITY_LABEL",
    "weight" : 0,
    "activity_string" : "",
    "description" : "",
    "rdf_mapping" : []
  }');
"""

info_instances ="""
features[crm_core_activity_type][] = ACTIVITY_TYPE
features[field_instance][] = crm_core_activity-ACTIVITY_TYPE-field_activity_date
features[field_instance][] = crm_core_activity-ACTIVITY_TYPE-field_activity_notes
features[field_instance][] = crm_core_activity-ACTIVITY_TYPE-field_activity_participants
features[field_instance][] = crm_core_activity-ACTIVITY_TYPE-field_attachment
features[field_instance][] = crm_core_activity-ACTIVITY_TYPE-field_comment_with_serverity
features[field_instance][] = crm_core_activity-ACTIVITY_TYPE-field_initiator
"""

code_instances = """
  // Exported field_instance: 'crm_core_activity-ACTIVITY_TYPE-field_activity_date'
  $field_instances['crm_core_activity-ACTIVITY_TYPE-field_activity_date'] = array(
    'bundle' => 'ACTIVITY_TYPE',
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
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_date',
    'label' => 'Date',
    'required' => FALSE,
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
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'crm_core_activity-ACTIVITY_TYPE-field_activity_notes'
  $field_instances['crm_core_activity-ACTIVITY_TYPE-field_activity_notes'] = array(
    'bundle' => 'ACTIVITY_TYPE',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_notes',
    'label' => 'Notes',
    'required' => FALSE,
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
  // 'crm_core_activity-ACTIVITY_TYPE-field_activity_participants'
  $field_instances['crm_core_activity-ACTIVITY_TYPE-field_activity_participants'] = array(
    'bundle' => 'ACTIVITY_TYPE',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_participants',
    'label' => 'Participants',
    'required' => TRUE,
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
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'crm_core_activity-ACTIVITY_TYPE-field_initiator'
  $field_instances['crm_core_activity-ACTIVITY_TYPE-field_initiator'] = array(
    'bundle' => 'ACTIVITY_TYPE',
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
        'weight' => 5,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_initiator',
    'label' => 'Initiator',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'crm_core_activity-ACTIVITY_TYPE-field_severity'
  $field_instances['crm_core_activity-ACTIVITY_TYPE-field_severity'] = array(
    'bundle' => 'ACTIVITY_TYPE',
    'default_value' => array(
      0 => array(
        'tid' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'This setting sets the way this ACTIVITY_TYPE is shown and where it\'s shown. You can later sort ACTIVITY_TYPEs according to this',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_severity',
    'label' => 'Severity',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'crm_core_activity-ACTIVITY_TYPE-field_status'
  $field_instances['crm_core_activity-ACTIVITY_TYPE-field_status'] = array(
    'bundle' => 'ACTIVITY_TYPE',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'crm_core_activity',
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
      'weight' => 1,
    ),
  );
"""


with open('activities_strings.txt') as f:
	for line in f:
		line = line.strip()
		type = re.sub(" |\(|\)", "_", line)
		type = re.sub("__", "_", type)
		type = re.sub("_$", "", type)
		type = type.lower()
		text = re.sub("ACTIVITY_TYPE", type, code_instances)
		text = re.sub("ACTIVITY_LABEL", line, text)
		print text
		#print const_str %(type, type, line,)