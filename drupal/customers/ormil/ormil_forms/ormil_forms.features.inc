<?php
/**
 * @file
 * ormil_forms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ormil_forms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_flexiform().
 */
function ormil_forms_default_flexiform() {
  $items = array();
  $items['quick_houshold'] = entity_import('flexiform', '{
    "form" : "quick_houshold",
    "label" : "Quick Houshold",
    "elements" : {
      "base_entity:field:field_agency" : {
        "entity_namespace" : "base_entity",
        "element_name" : "field:field_agency",
        "weight" : "3",
        "label" : "Agency",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_agency",
        "instance" : { "widget" : { "weight" : "3" }, "label" : "Agency" },
        "field" : []
      },
      "base_entity:field:field_caption" : {
        "entity_namespace" : "base_entity",
        "element_name" : "field:field_caption",
        "weight" : "2",
        "label" : "Name",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_caption",
        "instance" : { "widget" : { "weight" : "2" }, "label" : "Name" },
        "field" : []
      },
      "ip1:field:contact_name" : {
        "entity_namespace" : "ip1",
        "element_name" : "field:contact_name",
        "weight" : "3",
        "label" : "Name",
        "display_options" : [],
        "type" : "field",
        "field_name" : "contact_name",
        "instance" : { "widget" : { "weight" : "3" }, "label" : "Name" },
        "field" : []
      },
      "ip2:field:contact_name" : {
        "entity_namespace" : "ip2",
        "element_name" : "field:contact_name",
        "weight" : "4",
        "label" : "Name",
        "display_options" : { "css" : "", "hide_label" : 0, "hide_element" : 0 },
        "type" : "field",
        "field_name" : "contact_name",
        "instance" : {
          "required" : false,
          "settings" : { "size" : {
              "title" : "6",
              "given" : "20",
              "middle" : "20",
              "family" : "20",
              "generational" : "5",
              "credentials" : "35"
            }
          },
          "widget" : { "weight" : "4" },
          "use_default_value_function" : 0,
          "use_default_value_tokens" : 0,
          "default_value_function" : ""
        },
        "field" : { "settings" : { "max_length" : {
              "title" : "31",
              "given" : "63",
              "middle" : "127",
              "family" : "63",
              "generational" : "15",
              "credentials" : "255"
            }
          }
        },
        "conditional_fields" : {
          "ip2:custom:html|1" : {
            "state" : "disabled",
            "condition" : "!checked",
            "grouping" : "AND",
            "values_set" : 1,
            "value" : [],
            "values" : [],
            "value_form" : [],
            "effect" : "show",
            "effect_options" : [],
            "element_view" : { "1" : 1, "2" : 2, "5" : 0, "3" : 0, "4" : 0 },
            "element_view_per_role" : 0,
            "element_view_roles" : [],
            "element_edit" : { "1" : 1, "2" : 0, "3" : 0 },
            "element_edit_per_role" : 0,
            "element_edit_roles" : [],
            "selector" : ""
          },
          "ip2:custom:html" : {
            "state" : "!disabled",
            "condition" : "checked",
            "grouping" : "AND",
            "values_set" : 1,
            "value" : [],
            "values" : [],
            "value_form" : [],
            "effect" : "show",
            "effect_options" : [],
            "element_view" : { "1" : 1, "2" : 2, "5" : 0, "3" : 0, "4" : 0 },
            "element_view_per_role" : 0,
            "element_view_roles" : [],
            "element_edit" : { "1" : 1, "2" : 0, "3" : 0 },
            "element_edit_per_role" : 0,
            "element_edit_roles" : [],
            "selector" : ""
          }
        }
      },
      "base_entity:field:field_mhb" : {
        "entity_namespace" : "base_entity",
        "element_name" : "field:field_mhb",
        "weight" : "4",
        "label" : "MHB",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_mhb",
        "instance" : { "widget" : { "weight" : "4" }, "label" : "MHB" },
        "field" : []
      },
      "ip1:field:field_email" : {
        "entity_namespace" : "ip1",
        "element_name" : "field:field_email",
        "weight" : "4",
        "label" : "Mail",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_email",
        "instance" : { "widget" : { "weight" : "4" }, "label" : "Mail" },
        "field" : []
      },
      "ip1:field:field_phone" : {
        "entity_namespace" : "ip1",
        "element_name" : "field:field_phone",
        "weight" : "5",
        "label" : "Phone",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_phone",
        "instance" : { "widget" : { "weight" : "5" }, "label" : "Phone" },
        "field" : []
      },
      "ip1:field:field_date_of_birth" : {
        "entity_namespace" : "ip1",
        "element_name" : "field:field_date_of_birth",
        "weight" : "6",
        "label" : "Date of Birth",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_date_of_birth",
        "instance" : { "widget" : { "weight" : "6" }, "label" : "Date of Birth" },
        "field" : []
      },
      "ip1:field:field_image" : {
        "entity_namespace" : "ip1",
        "element_name" : "field:field_image",
        "weight" : "7",
        "label" : "Image",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_image",
        "instance" : { "widget" : { "weight" : "7" }, "label" : "Image" },
        "field" : []
      },
      "ip2:field:field_email" : {
        "entity_namespace" : "ip2",
        "element_name" : "field:field_email",
        "weight" : "5",
        "label" : "Mail",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_email",
        "instance" : { "widget" : { "weight" : "5" }, "label" : "Mail" },
        "field" : []
      },
      "ip2:field:field_phone" : {
        "entity_namespace" : "ip2",
        "element_name" : "field:field_phone",
        "weight" : "6",
        "label" : "Phone",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_phone",
        "instance" : { "widget" : { "weight" : "6" }, "label" : "Phone" },
        "field" : []
      },
      "ip2:field:field_date_of_birth" : {
        "entity_namespace" : "ip2",
        "element_name" : "field:field_date_of_birth",
        "weight" : "7",
        "label" : "Date of Birth",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_date_of_birth",
        "instance" : { "widget" : { "weight" : "7" }, "label" : "Date of Birth" },
        "field" : []
      },
      "ip2:field:field_image" : {
        "entity_namespace" : "ip2",
        "element_name" : "field:field_image",
        "weight" : "8",
        "label" : "Image",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_image",
        "instance" : { "widget" : { "weight" : "8" }, "label" : "Image" },
        "field" : []
      },
      "base_entity:field:field_status" : {
        "entity_namespace" : "base_entity",
        "element_name" : "field:field_status",
        "weight" : "5",
        "label" : "Status",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_status",
        "instance" : { "widget" : { "weight" : "5" }, "label" : "Status" },
        "field" : []
      },
      "base_entity:field:field_managing_country" : {
        "entity_namespace" : "base_entity",
        "element_name" : "field:field_managing_country",
        "weight" : "6",
        "label" : "Managing Country",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_managing_country",
        "instance" : { "widget" : { "weight" : "6" }, "label" : "Managing Country" },
        "field" : []
      },
      "base_entity:field:field_surrogacy_type" : {
        "entity_namespace" : "base_entity",
        "element_name" : "field:field_surrogacy_type",
        "weight" : "7",
        "label" : "Surrogacy Type",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_surrogacy_type",
        "instance" : { "widget" : { "weight" : "7" }, "label" : "Surrogacy Type" },
        "field" : []
      },
      "base_entity:field:field_notes" : {
        "entity_namespace" : "base_entity",
        "element_name" : "field:field_notes",
        "weight" : "8",
        "label" : "Notes",
        "display_options" : [],
        "type" : "field",
        "field_name" : "field_notes",
        "instance" : { "widget" : { "weight" : "8" }, "label" : "Notes" },
        "field" : []
      }
    },
    "entities" : {
      "base_entity" : {
        "label" : "Base CRM Core Contact",
        "entity_type" : "crm_core_contact",
        "bundle" : "customer",
        "create" : true,
        "getter" : "base_entity",
        "weight" : "-10"
      },
      "ip1" : {
        "namespace" : "ip1",
        "label" : "IP1",
        "entity_type" : "crm_core_contact",
        "bundle" : "ip",
        "getter" : "new_entity",
        "create" : false,
        "weight" : "1"
      },
      "ip2" : {
        "namespace" : "ip2",
        "label" : "IP#2",
        "entity_type" : "crm_core_contact",
        "bundle" : "ip",
        "getter" : "new_entity",
        "create" : false,
        "weight" : "2"
      }
    },
    "displays" : {
      "FlexiformDisplayCreatePage" : {
        "enabled" : 1,
        "title" : "Add new household",
        "path" : "add\\/household",
        "type" : "6",
        "menu_name" : "main-menu",
        "weight" : "0",
        "access" : { "permission" : "" }
      },
      "FlexiformDisplayEditPage" : {
        "enabled" : 0,
        "title" : "",
        "path" : "",
        "type" : "0",
        "menu_name" : "crm-core-menu",
        "weight" : "0",
        "access" : { "permission" : "" }
      },
      "FlexiformDisplayAddPane" : { "enabled" : 0, "title" : "" },
      "FlexiformDisplayEditPane" : { "enabled" : 0, "title" : "" },
      "FlexiformDisplayUserCategory" : { "enabled" : 0, "title" : "", "category" : "", "weight" : "0" }
    },
    "settings" : [],
    "form_group" : "general",
    "builder" : "FlexiformBuilderFlexiform",
    "base_entity" : "crm_core_contact",
    "base_entity_bundle" : "customer",
    "advanced" : "0",
    "weight" : "0",
    "tags" : []
  }');
  return $items;
}
