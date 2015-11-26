<?php
/**
 * @file
 * ormil_forms.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ormil_forms_default_rules_configuration() {
  $items = array();
  $items['rules_delete_empty_entities'] = entity_import('rules_config', '{ "rules_delete_empty_entities" : {
      "LABEL" : "Delete Empty Entities",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flexiform" ],
      "ON" : { "flexiform_submit_quick_houshold" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "ip2" ], "field" : "contact_name" } },
        { "data_is_empty" : { "data" : [ "ip2:contact-name:given" ] } }
      ],
      "DO" : [
        { "entity_delete" : { "data" : [ "ip2" ] } },
        { "drupal_message" : {
            "message" : "IP#2 has no first name, therefore it was not saved",
            "type" : "warning"
          }
        }
      ]
    }
  }');
  $items['rules_message_quick_form_successful_submit'] = entity_import('rules_config', '{ "rules_message_quick_form_successful_submit" : {
      "LABEL" : "Message Quick Form Successful submit",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flexiform" ],
      "ON" : { "flexiform_submit_quick_houshold" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "base-entity" ], "field" : "contact_name" } }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Added Household \\u003Ca href=\\u0022[base-entity:url]\\u0022\\u003E[base-entity:contact-name:given]\\u003C\\/a\\u003E" } }
      ]
    }
  }');
  $items['rules_relate_ips_to_household'] = entity_import('rules_config', '{ "rules_relate_ips_to_household" : {
      "LABEL" : "relate IPs to Household",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flexiform" ],
      "ON" : { "flexiform_submit_quick_houshold" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "ip1" ], "field" : "contact_name" } },
        { "entity_has_field" : { "entity" : [ "ip2" ], "field" : "contact_name" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
            "PROVIDE" : { "variable_added" : { "endpoints_list" : "endpoints list" } }
          }
        },
        { "list_add" : { "list" : [ "endpoints-list" ], "item" : [ "ip1" ] } },
        { "list_add" : { "list" : [ "endpoints-list" ], "item" : [ "base-entity" ] } },
        { "entity_create" : {
            "USING" : {
              "type" : "relation",
              "param_relation_type" : "crm_member",
              "param_endpoints" : [ "endpoints-list" ]
            },
            "PROVIDE" : { "entity_created" : { "relation_with_ip1" : "relation_with_ip1" } }
          }
        }
      ]
    }
  }');
  $items['rules_relate_ips_to_household_ip2_'] = entity_import('rules_config', '{ "rules_relate_ips_to_household_ip2_" : {
      "LABEL" : "relate IPs to Household (IP2)",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flexiform" ],
      "ON" : { "flexiform_submit_quick_houshold" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "ip2" ], "field" : "contact_name" } },
        { "NOT data_is_empty" : { "data" : [ "ip2:contact-name:given" ] } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Centity\\u003E", "value" : [ "" ] },
            "PROVIDE" : { "variable_added" : { "endpoints_list" : "endpoints list" } }
          }
        },
        { "list_add" : { "list" : [ "endpoints-list" ], "item" : [ "ip2" ] } },
        { "list_add" : { "list" : [ "endpoints-list" ], "item" : [ "base-entity" ] } },
        { "entity_create" : {
            "USING" : {
              "type" : "relation",
              "param_relation_type" : "crm_member",
              "param_endpoints" : [ "endpoints-list" ]
            },
            "PROVIDE" : { "entity_created" : { "relation_with_ip2" : "relation_with_ip2" } }
          }
        }
      ]
    }
  }');
  return $items;
}
