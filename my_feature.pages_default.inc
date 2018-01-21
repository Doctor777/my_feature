<?php
/**
 * @file
 * my_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function my_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_9727af93-7382-4f7a-9aa3-6189d0b98a5f';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'node_view_variant',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'page' => 'page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'center' => NULL,
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'node_view_variant via panels';
  $display->uuid = '2c106a5f-a5f7-4efd-9567-a55bbea85e08';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_9727af93-7382-4f7a-9aa3-6189d0b98a5f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f1315287-1284-466d-afd9-07dad7c62e6b';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->uuid = 'f1315287-1284-466d-afd9-07dad7c62e6b';
  $display->content['new-f1315287-1284-466d-afd9-07dad7c62e6b'] = $pane;
  $display->panels['middle'][0] = 'new-f1315287-1284-466d-afd9-07dad7c62e6b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_9727af93-7382-4f7a-9aa3-6189d0b98a5f'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function my_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_via_panels';
  $page->task = 'page';
  $page->admin_title = 'Page via panels';
  $page->admin_description = '';
  $page->path = 'reviews_via_panels';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_via_panels__panel';
  $handler->task = 'page';
  $handler->subtask = 'page_via_panels';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Reviews via panels',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'Reviews via panels';
  $display->uuid = 'd19cd491-9d9f-40f3-b646-c7a8659425bf';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_page_via_panels__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-eb63e6f8-8b30-4dfa-9d29-2ac06b33cddc';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'taxterms';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 1,
    'use_pager' => 1,
    'nodes_per_page' => '25',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 1,
    'panel_args' => 0,
    'link_to_view' => 1,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
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
  $pane->uuid = 'eb63e6f8-8b30-4dfa-9d29-2ac06b33cddc';
  $display->content['new-eb63e6f8-8b30-4dfa-9d29-2ac06b33cddc'] = $pane;
  $display->panels['middle'][0] = 'new-eb63e6f8-8b30-4dfa-9d29-2ac06b33cddc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_via_panels'] = $page;

  return $pages;

}
