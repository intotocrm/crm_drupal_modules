<?php
/**
 * @file
 * ormil_react_on_contact_us_form.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ormil_react_on_contact_us_form_default_rules_configuration() {
  $items = array();
  $items['rules_mail_on_new_lead'] = entity_import('rules_config', '{ "rules_mail_on_new_lead" : {
      "LABEL" : "Mail on New Lead",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "intoto_site_settings", "php", "mimemail", "entity" ],
      "ON" : { "crm_core_contact_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "crm-core-contact" ],
            "type" : "crm_core_contact",
            "bundle" : { "value" : { "ip" : "ip" } }
          }
        },
        { "entity_has_field" : {
            "entity" : [ "crm-core-contact" ],
            "field" : "field_originally_came_from"
          }
        },
        { "data_is" : {
            "data" : [ "crm-core-contact:field-originally-came-from" ],
            "value" : "contact_us_form"
          }
        }
      ],
      "DO" : [
        { "site_settings_load_settings" : { "PROVIDE" : { "site_settings" : { "site_settings" : "Site Settings" } } } },
        { "variable_add" : {
            "USING" : { "type" : "text" },
            "PROVIDE" : { "variable_added" : { "addresses_to_send" : "Addresses To Send" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "site-settings:field-new-leads-notify-users" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "data_set" : {
                  "data" : [ "addresses-to-send" ],
                  "value" : "\\u003C?php echo $addresses_to_send . (strlen($addresses_to_send) \\u003E 0 ? \\u0022,\\u0022 : \\u0022\\u0022) . $list_item-\\u003Email; ?\\u003E"
                }
              }
            ]
          }
        },
        { "mimemail" : {
            "key" : "0",
            "to" : "[addresses-to-send:value]",
            "bcc" : "roi@into.to",
            "subject" : "Intoto - new lead from contact us form [crm-core-contact:contact-name:given] [crm-core-contact:contact-name:family]",
            "body" : "\\u003Cp\\u003ENew customer has contacted!\\u003C\\/p\\u003E\\r\\n\\r\\n\\r\\n\\u003Cp\\u003ECustomer Name:\\u0026nbsp;\\u003Cstrong\\u003E[crm-core-contact:contact-name:given] [crm-core-contact:contact-name:family]\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EPress \\u003Ca href=\\u0022[site:url]\\/crm-core\\/contact\\/[crm-core-contact:contact-id]\\u0022\\u003Ehere\\u003C\\/a\\u003E to see their card.\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cstrong\\u003EMessage:\\u003C\\/strong\\u003E\\r\\n\\u003Cdiv\\u003E[crm-core-contact:field-notes]\\u003C\\/div\\u003E\\r\\n",
            "plaintext" : "New customer has contacted!\\r\\n\\r\\nIP Name: [crm-core-contact:contact-name:given] [crm-core-contact:contact-name:family]\\r\\nPress [site:url]\\/crm-core\\/contact\\/[crm-core-contact:contact-id] to see their card.\\r\\n\\r\\nMessage:\\r\\n[crm-core-contact:field-notes]\\r\\n",
            "language" : [ "crm-core-contact:type" ]
          }
        }
      ]
    }
  }');
  return $items;
}
