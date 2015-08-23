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
      "REQUIRES" : [ "rules", "mimemail", "entity" ],
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
        { "mimemail" : {
            "key" : "0",
            "to" : "roikedem@gmail.com",
            "subject" : "Intoto - new lead from contact us form ([crm-core-contact:field-caption])",
            "body" : "New customer has contacted!\\u003Cbr\\u003E\\r\\n\\u003Cstrong\\u003ELead Customer Name:\\u003C\\/strong\\u003E[crm-core-contact:field-caption]\\u003Cbr\\u003E\\r\\n\\u003Cp\\u003EPress \\u003Ca href=\\u0022[site:url]\\/crm-core\\/contact\\/[crm-core-contact:contact-id]\\u0022\\u003Ehere\\u003C\\/a\\u003E to see their card.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cstrong\\u003ELead Message:\\u003C\\/strong\\u003E\\r\\n\\u003Cp\\u003E[crm-core-contact:field-notes]\\u003C\\/p\\u003E\\r\\n",
            "plaintext" : "new customer has contacted:\\r\\nLead Customer Name: [crm-core-contact:field-caption]\\r\\npress \\u003Ca href=\\u0022[site:url]\\/crm-core\\/contact\\/[crm-core-contact:contact-id]\\u0022\\u003Ehere\\u003C\\/a\\u003E to see their card.\\r\\nfirst: [crm-core-contact:contact-name:given]\\r\\nlast: [crm-core-contact:contact-name:family]\\r\\n\\r\\nLead Message:\\r\\n[crm-core-contact:field-notes]\\r\\n\\r\\n\\r\\nIP:\\r\\n[crm-core-contact:relation-crm-member-crm-core-contact-reverse:0:contact-id]\\r\\n[crm-core-contact:relation-crm-member-crm-core-contact-reverse:1:contact-id]\\r\\n[crm-core-contact:relation-crm-member-crm-core-contact-reverse:2:contact-id]\\r\\n[crm-core-contact:relation-crm-member-crm-core-contact-reverse:3:contact-id]\\r\\n",
            "language" : [ "crm-core-contact:type" ]
          }
        }
      ]
    }
  }');
  return $items;
}
