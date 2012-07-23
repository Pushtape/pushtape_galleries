<?php
/**
 * @file
 * pushtape_galleries.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function pushtape_galleries_field_default_fields() {
  $fields = array();

  // Exported field: 'fieldable_panels_pane-fieldable_panels_pane-media_gallery_collection'
  $fields['fieldable_panels_pane-fieldable_panels_pane-media_gallery_collection'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_collection',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'gallery_collections',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'fieldable_panels_pane',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'fieldable_panels_pane',
      'field_name' => 'media_gallery_collection',
      'label' => 'Gallery collection',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '-3',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-gallery_collections-field_license'
  $fields['taxonomy_term-gallery_collections-field_license'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_license',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'arr' => 'All rights reserved',
          'cc_a' => 'Creative Commons: Attribution',
          'cc_anc' => 'Creative Commons: Attribution Non-commercial',
          'cc_ancnd' => 'Creative Commons: Attribution Non-commercial No Derivatives',
          'cc_ancsa' => 'Creative Commons: Attribution Non-commercial Share Alike',
          'cc_and' => 'Creative Commons:  Attribution No Derivatives',
          'cc_asa' => 'Creative Commons: Attribution Share Alike',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'gallery_collections',
      'default_value' => array(
        0 => array(
          'value' => 'nothing',
        ),
      ),
      'deleted' => '0',
      'description' => 'Choose a default <a href="http://creativecommons.org">Creative Commons</a> license for all Gallery media. Later you can change the license for each piece of media.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_license',
      'label' => 'Default license settings',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'weight' => 14,
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 34,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-gallery_collections-media_gallery_columns'
  $fields['taxonomy_term-gallery_collections-media_gallery_columns'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_columns',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '_media_gallery_get_columns_values',
      ),
      'translatable' => '0',
      'type' => 'list_float',
    ),
    'field_instance' => array(
      'bundle' => 'gallery_collections',
      'default_value' => array(
        0 => array(
          'value' => 4,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'media_gallery_columns',
      'label' => 'Number of columns',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 31,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-gallery_collections-media_gallery_image_info_where'
  $fields['taxonomy_term-gallery_collections-media_gallery_image_info_where'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_image_info_where',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(),
        'allowed_values_function' => '_media_gallery_get_image_info_placement_values',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'gallery_collections',
      'default_value' => array(
        0 => array(
          'value' => 'hover',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 2,
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'media_gallery_image_info_where',
      'label' => 'Gallery information',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => 33,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-gallery_collections-media_gallery_rows'
  $fields['taxonomy_term-gallery_collections-media_gallery_rows'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'media_gallery_rows',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'gallery_collections',
      'default_value' => array(
        0 => array(
          'value' => 3,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 1,
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'media_gallery_rows',
      'label' => 'Number of rows',
      'required' => TRUE,
      'settings' => array(
        'max' => '',
        'min' => '1',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => 32,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Choose a default <a href="http://creativecommons.org">Creative Commons</a> license for all Gallery media. Later you can change the license for each piece of media.');
  t('Default license settings');
  t('Gallery collection');
  t('Gallery information');
  t('Number of columns');
  t('Number of rows');

  return $fields;
}
