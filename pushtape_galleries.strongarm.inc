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
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(
      'media_gallery_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_lightbox' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_detail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_block_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_collection_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'track_player' => array(
        'custom_settings' => FALSE,
      ),
      'album_player' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'preview' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'filename' => array(
          'weight' => '0',
        ),
        'preview' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(
        'file' => array(
          'media_gallery_thumbnail' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'media_gallery_detail' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'full' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'preview' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(
      'media_gallery_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_lightbox' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_detail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_block_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'media_gallery_collection_thumbnail' => array(
        'custom_settings' => TRUE,
      ),
      'track_player' => array(
        'custom_settings' => FALSE,
      ),
      'album_player' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_gallery_thumbnail' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__media_gallery';
  $strongarm->value = array(
    'view_modes' => array(
      'media_gallery_block' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'featured' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'mediaplaylist' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'add_media_link' => array(
          'full' => array(
            'weight' => 1,
            'visible' => TRUE,
          ),
          'default' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'visible' => FALSE,
            'weight' => 1,
          ),
          'media_gallery_block' => array(
            'visible' => FALSE,
            'weight' => 1,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__media_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = 'content/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  return $export;
}
