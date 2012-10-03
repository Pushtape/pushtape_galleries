<?php
/**
 * @file
 * pushtape_galleries.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pushtape_galleries_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_media_gallery_pattern';
  $strongarm->value = 'gallery/[node:title]';
  $export['pathauto_node_media_gallery_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_gallery_collections_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_gallery_collections_pattern'] = $strongarm;

  return $export;
}
