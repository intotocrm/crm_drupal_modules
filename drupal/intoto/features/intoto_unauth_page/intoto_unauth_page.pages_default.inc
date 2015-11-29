<?php
/**
 * @file
 * intoto_unauth_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function intoto_unauth_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'unauth_page';
  $page->task = 'page';
  $page->admin_title = 'unauth_page';
  $page->admin_description = 'page to be shown to unauthenticated users';
  $page->path = 'unauth_page';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_unauth_page__panel_context_1d765313-6485-4f35-b81f-4f54f4fddfa5';
  $handler->task = 'page';
  $handler->subtask = 'unauth_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3cb03b9c-f5a0-4e25-8bfe-66df434a8b07';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-06b1df43-e48f-4263-a094-74df8cee7a9b';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'please log in',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '06b1df43-e48f-4263-a094-74df8cee7a9b';
    $display->content['new-06b1df43-e48f-4263-a094-74df8cee7a9b'] = $pane;
    $display->panels['center'][0] = 'new-06b1df43-e48f-4263-a094-74df8cee7a9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-06b1df43-e48f-4263-a094-74df8cee7a9b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['unauth_page'] = $page;

  return $pages;

}
