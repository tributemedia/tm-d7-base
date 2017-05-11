<?php
/**
 * @file
 * tm_content_types.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tm_content_types_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'.
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_article_type'.
  $field_bases['field_article_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_article_type',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'article_type',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_form_stacked'.
  $field_bases['field_form_stacked'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_form_stacked',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'stacked' => 'stacked',
        'side-by-side' => 'side-by-side',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_image'.
  $field_bases['field_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_remove_navigation'.
  $field_bases['field_remove_navigation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_remove_navigation',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'navigation' => 'Navigation',
        'no-navigation' => 'No-Navigation',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_tags'.
  $field_bases['field_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tags',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'tags',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'meta_canonical'.
  $field_bases['meta_canonical'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'meta_canonical',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'metatags_quick',
    'settings' => array(
      'max_length' => 160,
      'meta_name' => 'canonical',
    ),
    'translatable' => 0,
    'type' => 'metatags_quick',
  );

  // Exported field_base: 'meta_copyright'.
  $field_bases['meta_copyright'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'meta_copyright',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'metatags_quick',
    'settings' => array(
      'max_length' => 160,
      'meta_name' => 'copyright',
    ),
    'translatable' => 0,
    'type' => 'metatags_quick',
  );

  // Exported field_base: 'meta_description'.
  $field_bases['meta_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'meta_description',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'metatags_quick',
    'settings' => array(
      'max_length' => 160,
      'meta_name' => 'description',
    ),
    'translatable' => 0,
    'type' => 'metatags_quick',
  );

  // Exported field_base: 'meta_keywords'.
  $field_bases['meta_keywords'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'meta_keywords',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'metatags_quick',
    'settings' => array(
      'max_length' => 160,
      'meta_name' => 'keywords',
    ),
    'translatable' => 0,
    'type' => 'metatags_quick',
  );

  // Exported field_base: 'meta_robots'.
  $field_bases['meta_robots'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'meta_robots',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'metatags_quick',
    'settings' => array(
      'max_length' => 160,
      'meta_name' => 'robots',
    ),
    'translatable' => 0,
    'type' => 'metatags_quick',
  );

  return $field_bases;
}
