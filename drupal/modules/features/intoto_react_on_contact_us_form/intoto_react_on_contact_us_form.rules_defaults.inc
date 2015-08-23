<?php
/**
 * @file
 * intoto_react_on_contact_us_form.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function intoto_react_on_contact_us_form_default_rules_configuration() {
  $items = array();
  $items['rules_mail_on_new_lead'] = entity_import('rules_config', '{ "rules_mail_on_new_lead" : {
      "LABEL" : "Mail on New Lead",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entity" ],
      "ON" : { "crm_core_contact_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "crm-core-contact" ],
            "type" : "crm_core_contact",
            "bundle" : { "value" : { "customer" : "customer" } }
          }
        },
        { "data_is" : {
            "data" : [ "crm-core-contact:field-originally-came-from" ],
            "value" : "contact_us_form"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "roikedem@gmail.com",
            "subject" : "new lead from contact us form",
            "message" : "new customer",
            "from" : "roikedem@gmail.com",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
