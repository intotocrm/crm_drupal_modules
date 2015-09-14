<?php

$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'journeys';
$page->task = 'page';
$page->admin_title = 'Journeys';
$page->admin_description = 'page that describes journeys';
$page->path = 'crm-core/contact/%contact/journey';
$page->access = array(
  'plugins' => array(),
  'logic' => 'and',
);
$page->menu = array(
  'type' => 'tab',
  'title' => 'Journey',
  'name' => 'navigation',
  'weight' => '1',
  'parent' => array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
  ),
);
$page->arguments = array(
  'contact' => array(
    'id' => 1,
    'identifier' => 'CRM Core Contact: ID',
    'name' => 'entity_id:crm_core_contact',
    'settings' => array(),
  ),
);
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_journeys__panel_context_6c396a52-1486-4f3d-af47-360717fe49f8';
$handler->task = 'page';
$handler->subtask = 'journeys';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Journey General',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
  'access' => array(
    'logic' => 'or',
    'plugins' => array(),
  ),
  'name' => '',
);
$display = new panels_display();
$display->layout = 'twocol_stacked';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'top' => NULL,
    'left' => NULL,
    'right' => NULL,
    'bottom' => NULL,
  ),
);
$display->cache = array();
$display->title = '%contact:contact_name';
$display->uuid = '3b1e69d6-f23c-4d9f-a24d-c90891310363';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a1256d53-9891-4c58-b60c-5ccc8d06e13b';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'placeholder for journey',
    'title' => 'placeholder for journey',
    'body' => 'placeholder for journey',
    'format' => 'filtered_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a1256d53-9891-4c58-b60c-5ccc8d06e13b';
  $display->content['new-a1256d53-9891-4c58-b60c-5ccc8d06e13b'] = $pane;
  $display->panels['top'][0] = 'new-a1256d53-9891-4c58-b60c-5ccc8d06e13b';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
