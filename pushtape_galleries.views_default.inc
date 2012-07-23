<?php
/**
 * @file
 * pushtape_galleries.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pushtape_galleries_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'galleries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Galleries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Galleries';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Relationship: Field: Gallery collection (media_gallery_collection) */
  $handler->display->display_options['relationships']['media_gallery_collection_tid']['id'] = 'media_gallery_collection_tid';
  $handler->display->display_options['relationships']['media_gallery_collection_tid']['table'] = 'field_data_media_gallery_collection';
  $handler->display->display_options['relationships']['media_gallery_collection_tid']['field'] = 'media_gallery_collection_tid';
  $handler->display->display_options['relationships']['media_gallery_collection_tid']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Gallery media */
  $handler->display->display_options['fields']['media_gallery_media']['id'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['table'] = 'field_data_media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['field'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media']['label'] = '';
  $handler->display->display_options['fields']['media_gallery_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['media_gallery_media']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['media_gallery_media']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['media_gallery_media']['settings'] = array(
    'file_view_mode' => 'media_gallery_collection_thumbnail',
  );
  $handler->display->display_options['fields']['media_gallery_media']['group_rows'] = 1;
  $handler->display->display_options['fields']['media_gallery_media']['delta_limit'] = '1';
  $handler->display->display_options['fields']['media_gallery_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['media_gallery_media']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['media_gallery_media']['separator'] = '';
  $handler->display->display_options['fields']['media_gallery_media']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'media_gallery' => 'media_gallery',
  );

  /* Display: Galleries */
  $handler = $view->new_display('page', 'Galleries', 'page');
  $handler->display->display_options['path'] = 'galleries';

  /* Display: Galleries front pane */
  $handler = $view->new_display('panel_pane', 'Galleries front pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'A random selction of photos for the front page';
  $handler->display->display_options['link_url'] = 'photos';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Gallery media */
  $handler->display->display_options['fields']['media_gallery_media_1']['id'] = 'media_gallery_media_1';
  $handler->display->display_options['fields']['media_gallery_media_1']['table'] = 'field_data_media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media_1']['field'] = 'media_gallery_media';
  $handler->display->display_options['fields']['media_gallery_media_1']['label'] = '';
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['media_gallery_media_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['media_gallery_media_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['media_gallery_media_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['media_gallery_media_1']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['media_gallery_media_1']['settings'] = array(
    'file_view_mode' => 'media_gallery_thumbnail',
  );
  $handler->display->display_options['fields']['media_gallery_media_1']['group_rows'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['media_gallery_media_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['media_gallery_media_1']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['pane_category']['name'] = 'Galleries';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['galleries'] = $view;

  return $export;
}
