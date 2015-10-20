<?php
/**
 * @file
 * tammuz_search_api_server_index.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function tammuz_search_api_server_index_default_search_api_index() {
  $items = array();
  $items['contacts_index'] = entity_import('search_api_index', '{
    "name" : "contacts index",
    "machine_name" : "contacts_index",
    "description" : null,
    "server" : "db_server",
    "item_type" : "crm_core_contact",
    "options" : {
      "datasource" : { "bundles" : [
          "child",
          "clinic",
          "customer",
          "doctor",
          "egg",
          "egg_donor",
          "embryo",
          "ip",
          "journey",
          "sperm_specimen",
          "surrogate",
          "tammuz_staff"
        ]
      },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "contact_id" : { "type" : "integer" },
        "contact_name:family" : { "type" : "text", "boost" : "8.0" },
        "contact_name:given" : { "type" : "text", "boost" : "8.0" },
        "field_address:field_address_details:administrative_area" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.3" },
        "field_address:field_address_details:country" : { "type" : "list\\u003Cstring\\u003E" },
        "field_address:field_address_details:dependent_locality" : { "type" : "list\\u003Ctext\\u003E" },
        "field_address:field_address_details:first_name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_address:field_address_details:last_name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_address:field_address_details:locality" : { "type" : "list\\u003Ctext\\u003E" },
        "field_address:field_address_details:name_line" : { "type" : "list\\u003Ctext\\u003E" },
        "field_address:field_address_details:organisation_name" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.3" },
        "field_address:field_address_details:postal_code" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.3" },
        "field_address:field_address_details:sub_administrative_area" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.3" },
        "field_address:field_address_details:thoroughfare" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.5" },
        "field_caption" : { "type" : "text", "boost" : "5.0" },
        "field_caption_in_native_language" : { "type" : "text", "boost" : "5.0" },
        "field_customer_number" : { "type" : "text", "boost" : "5.0" },
        "field_customer_origin" : { "type" : "string", "entity_type" : "country" },
        "field_email" : { "type" : "text", "boost" : "2.0" },
        "field_facebook_user_name" : { "type" : "text" },
        "field_id" : { "type" : "text" },
        "field_instant_messaging_collecti:field_instant_messaging_id" : { "type" : "list\\u003Ctext\\u003E" },
        "field_name_in_english:family" : { "type" : "text", "boost" : "5.0" },
        "field_name_in_english:given" : { "type" : "text", "boost" : "3.0" },
        "field_name_in_english:middle" : { "type" : "text" },
        "field_nationality" : { "type" : "list\\u003Cstring\\u003E", "entity_type" : "country" },
        "field_passport_number" : { "type" : "text" },
        "field_phone:field_number:country_codes" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.2" },
        "field_phone:field_number:extension" : { "type" : "list\\u003Ctext\\u003E", "boost" : "0.2" },
        "field_phone:field_number:number" : { "type" : "list\\u003Ctext\\u003E" },
        "field_profession" : { "type" : "text" },
        "field_surrogate_number" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "type" : { "type" : "string" },
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
              "field_id" : true,
              "field_passport_number" : true,
              "field_profession" : true,
              "field_surrogate_number" : true,
              "field_caption" : true,
              "field_caption_in_native_language" : true,
              "field_customer_number" : true,
              "contact_name:given" : true,
              "contact_name:family" : true,
              "field_instant_messaging_collecti:field_instant_messaging_id" : true,
              "field_name_in_english:given" : true,
              "field_name_in_english:middle" : true,
              "field_name_in_english:family" : true,
              "field_address:field_address_details:name_line" : true,
              "field_address:field_address_details:first_name" : true,
              "field_address:field_address_details:last_name" : true,
              "field_address:field_address_details:organisation_name" : true,
              "field_address:field_address_details:administrative_area" : true,
              "field_address:field_address_details:sub_administrative_area" : true,
              "field_address:field_address_details:locality" : true,
              "field_address:field_address_details:dependent_locality" : true,
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
              "field_id" : true,
              "field_passport_number" : true,
              "field_profession" : true,
              "field_surrogate_number" : true,
              "field_caption" : true,
              "field_caption_in_native_language" : true,
              "field_customer_number" : true,
              "contact_name:given" : true,
              "contact_name:family" : true,
              "field_instant_messaging_collecti:field_instant_messaging_id" : true,
              "field_name_in_english:given" : true,
              "field_name_in_english:middle" : true,
              "field_name_in_english:family" : true,
              "field_address:field_address_details:name_line" : true,
              "field_address:field_address_details:first_name" : true,
              "field_address:field_address_details:last_name" : true,
              "field_address:field_address_details:organisation_name" : true,
              "field_address:field_address_details:administrative_area" : true,
              "field_address:field_address_details:sub_administrative_area" : true,
              "field_address:field_address_details:locality" : true,
              "field_address:field_address_details:dependent_locality" : true,
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
              "field_id" : true,
              "field_passport_number" : true,
              "field_profession" : true,
              "field_surrogate_number" : true,
              "field_caption" : true,
              "field_caption_in_native_language" : true,
              "field_customer_number" : true,
              "contact_name:given" : true,
              "contact_name:family" : true,
              "field_instant_messaging_collecti:field_instant_messaging_id" : true,
              "field_name_in_english:given" : true,
              "field_name_in_english:middle" : true,
              "field_name_in_english:family" : true,
              "field_address:field_address_details:name_line" : true,
              "field_address:field_address_details:first_name" : true,
              "field_address:field_address_details:last_name" : true,
              "field_address:field_address_details:organisation_name" : true,
              "field_address:field_address_details:administrative_area" : true,
              "field_address:field_address_details:sub_administrative_area" : true,
              "field_address:field_address_details:locality" : true,
              "field_address:field_address_details:dependent_locality" : true,
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
              "field_id" : true,
              "field_passport_number" : true,
              "field_profession" : true,
              "field_surrogate_number" : true,
              "field_caption" : true,
              "field_caption_in_native_language" : true,
              "field_customer_number" : true,
              "contact_name:given" : true,
              "contact_name:family" : true,
              "field_instant_messaging_collecti:field_instant_messaging_id" : true,
              "field_name_in_english:given" : true,
              "field_name_in_english:middle" : true,
              "field_name_in_english:family" : true,
              "field_address:field_address_details:name_line" : true,
              "field_address:field_address_details:first_name" : true,
              "field_address:field_address_details:last_name" : true,
              "field_address:field_address_details:organisation_name" : true,
              "field_address:field_address_details:administrative_area" : true,
              "field_address:field_address_details:sub_administrative_area" : true,
              "field_address:field_address_details:locality" : true,
              "field_address:field_address_details:dependent_locality" : true,
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
function tammuz_search_api_server_index_default_search_api_server() {
  $items = array();
  $items['db_server'] = entity_import('search_api_server', '{
    "name" : "db server",
    "machine_name" : "db_server",
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
          "type" : {
            "table" : "search_api_db_contacts_index",
            "column" : "type",
            "type" : "string",
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
            "boost" : "2.0"
          },
          "field_facebook_user_name" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_id" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_nationality" : {
            "table" : "search_api_db_contacts_index_field_nationality",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_passport_number" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_profession" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_surrogate_number" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_caption" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "field_caption_in_native_language" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "field_customer_number" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "field_customer_origin" : {
            "table" : "search_api_db_contacts_index",
            "column" : "field_customer_origin",
            "type" : "string",
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
            "boost" : "8.0"
          },
          "contact_name:family" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "8.0"
          },
          "field_instant_messaging_collecti:field_instant_messaging_id" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_name_in_english:given" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "3.0"
          },
          "field_name_in_english:middle" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_name_in_english:family" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "text",
            "boost" : "5.0"
          },
          "field_address:field_address_details:country" : {
            "table" : "search_api_db_contacts_index_field_address_field_address_detai",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_address:field_address_details:name_line" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_address:field_address_details:first_name" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_address:field_address_details:last_name" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_address:field_address_details:organisation_name" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "0.3"
          },
          "field_address:field_address_details:administrative_area" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "0.3"
          },
          "field_address:field_address_details:sub_administrative_area" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "0.3"
          },
          "field_address:field_address_details:locality" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_address:field_address_details:dependent_locality" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_address:field_address_details:postal_code" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "0.3"
          },
          "field_address:field_address_details:thoroughfare" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "0.5"
          },
          "field_phone:field_number:number" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_phone:field_number:country_codes" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "0.2"
          },
          "field_phone:field_number:extension" : {
            "table" : "search_api_db_contacts_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "0.2"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
