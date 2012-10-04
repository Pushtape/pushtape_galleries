<?php
/**
 * @file
 * pushtape_galleries.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pushtape_galleries_taxonomy_default_vocabularies() {
  return array(
    'gallery_collections' => array(
      'name' => 'Gallery collections',
      'machine_name' => 'gallery_collections',
      'description' => 'Groups of rich media galleries',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
