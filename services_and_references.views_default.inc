<?php
/**
 * @file
 * services_and_references.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function services_and_references_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'related_references';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related References';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related References';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Related Services (field_related_services) */
  $handler->display->display_options['arguments']['field_related_services_nid']['id'] = 'field_related_services_nid';
  $handler->display->display_options['arguments']['field_related_services_nid']['table'] = 'field_data_field_related_services';
  $handler->display->display_options['arguments']['field_related_services_nid']['field'] = 'field_related_services_nid';
  $handler->display->display_options['arguments']['field_related_services_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_related_services_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_related_services_nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_related_services_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_related_services_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_related_services_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_related_services_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_related_services_nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'referencia' => 'referencia',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['related_references'] = $view;

  return $export;
}
