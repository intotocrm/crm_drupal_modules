<?php
/**
 * @file
 * ormil_seach_api_definitions.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function ormil_seach_api_definitions_default_search_api_index() {
  $items = array();
  $items['contacts_index'] = entity_import('search_api_index', '{
    "name" : "contacts index",
    "machine_name" : "contacts_index",
    "description" : null,
    "server" : "contacts_server",
    "item_type" : "crm_core_contact",
    "options" : {
      "datasource" : { "bundles" : [ "ip", "customer" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "contact_id" : { "type" : "integer" },
        "contact_name:family" : { "type" : "text" },
        "contact_name:given" : { "type" : "text" },
        "field_address:field_address_details:administrative_area" : { "type" : "list\\u003Ctext\\u003E" },
        "field_address:field_address_details:country" : { "type" : "list\\u003Cstring\\u003E" },
        "field_address:field_address_details:locality" : { "type" : "list\\u003Ctext\\u003E" },
        "field_address:field_address_details:postal_code" : { "type" : "list\\u003Ctext\\u003E" },
        "field_address:field_address_details:thoroughfare" : { "type" : "list\\u003Ctext\\u003E" },
        "field_agency" : { "type" : "text" },
        "field_campaign" : { "type" : "text" },
        "field_caption" : { "type" : "text" },
        "field_email" : { "type" : "text" },
        "field_facebook_user_name" : { "type" : "text" },
        "field_instant_messaging_collecti:field_instant_messaging_id" : { "type" : "list\\u003Ctext\\u003E" },
        "field_managing_country" : { "type" : "text" },
        "field_notes" : { "type" : "text" },
        "field_occupation" : { "type" : "text" },
        "field_phone:field_number:country_codes" : { "type" : "list\\u003Ctext\\u003E" },
        "field_phone:field_number:extension" : { "type" : "list\\u003Ctext\\u003E" },
        "field_phone:field_number:number" : { "type" : "list\\u003Ctext\\u003E" },
        "field_program" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_email" : true,
              "field_facebook_user_name" : true,
              "field_notes" : true,
              "field_occupation" : true,
              "field_agency" : true,
              "field_campaign" : true,
              "field_caption" : true,
              "field_managing_country" : true,
              "field_program" : true,
              "contact_name:given" : true,
              "contact_name:family" : true,
              "field_instant_messaging_collecti:field_instant_messaging_id" : true,
              "field_address:field_address_details:administrative_area" : true,
              "field_address:field_address_details:locality" : true,
              "field_address:field_address_details:postal_code" : true,
              "field_address:field_address_details:thoroughfare" : true,
              "field_phone:field_number:number" : true,
              "field_phone:field_number:country_codes" : true,
              "field_phone:field_number:extension" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_email" : true,
              "field_facebook_user_name" : true,
              "field_notes" : true,
              "field_occupation" : true,
              "field_agency" : true,
              "field_campaign" : true,
              "field_caption" : true,
              "field_managing_country" : true,
              "field_program" : true,
              "contact_name:given" : true,
              "contact_name:family" : true,
              "field_instant_messaging_collecti:field_instant_messaging_id" : true,
              "field_address:field_address_details:administrative_area" : true,
              "field_address:field_address_details:locality" : true,
              "field_address:field_address_details:postal_code" : true,
              "field_address:field_address_details:thoroughfare" : true,
              "field_phone:field_number:number" : true,
              "field_phone:field_number:country_codes" : true,
              "field_phone:field_number:extension" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_email" : true,
              "field_facebook_user_name" : true,
              "field_notes" : true,
              "field_occupation" : true,
              "field_agency" : true,
              "field_campaign" : true,
              "field_caption" : true,
              "field_managing_country" : true,
              "field_program" : true,
              "contact_name:given" : true,
              "contact_name:family" : true,
              "field_instant_messaging_collecti:field_instant_messaging_id" : true,
              "field_address:field_address_details:administrative_area" : true,
              "field_address:field_address_details:locality" : true,
              "field_address:field_address_details:postal_code" : true,
              "field_address:field_address_details:thoroughfare" : true,
              "field_phone:field_number:number" : true,
              "field_phone:field_number:country_codes" : true,
              "field_phone:field_number:extension" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_email" : true,
              "field_facebook_user_name" : true,
              "field_notes" : true,
              "field_occupation" : true,
              "field_agency" : true,
              "field_campaign" : true,
              "field_caption" : true,
              "field_managing_country" : true,
              "field_program" : true,
              "contact_name:given" : true,
              "contact_name:family" : true,
              "field_instant_messaging_collecti:field_instant_messaging_id" : true,
              "field_address:field_address_details:administrative_area" : true,
              "field_address:field_address_details:locality" : true,
              "field_address:field_address_details:postal_code" : true,
              "field_address:field_address_details:thoroughfare" : true,
              "field_phone:field_number:number" : true,
              "field_phone:field_number:country_codes" : true,
              "field_phone:field_number:extension" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function ormil_seach_api_definitions_default_search_api_server() {
  $items = array();
  $items['contacts_server'] = entity_import('search_api_server', '{
    "name" : "contacts server",
    "machine_name" : "contacts_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 1,
      "indexes" : { "contacts_index" : {
          "contact_id" : {
            "table" : "search_api_db_contacts_index",
            "column" : "contact_id",
            "type" : "integer",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_contacts_index",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "field_email" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_facebook_user_name" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_notes" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_occupation" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_agency" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_campaign" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_caption" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_managing_country" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_program" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_contacts_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "contact_name:given" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "contact_name:family" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_instant_messaging_collecti:field_instant_messaging_id" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_address:field_address_details:country" : {
            "table" : "search_api_db_contacts_index_field_address_field_address_detai",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_address:field_address_details:administrative_area" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_address:field_address_details:locality" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_address:field_address_details:postal_code" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_address:field_address_details:thoroughfare" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_phone:field_number:number" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_phone:field_number:country_codes" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_phone:field_number:extension" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
