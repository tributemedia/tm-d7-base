<?php
/**
 * @file
 * tm_text_formats.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tm_text_formats_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Tech Support' => 'Tech Support',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'Tech Support' => 'Tech Support',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'Tech Support' => 'Tech Support',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format html_only'.
  $permissions['use text format html_only'] = array(
    'name' => 'use text format html_only',
    'roles' => array(
      'Tech Support' => 'Tech Support',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format html_only_nofilter'.
  $permissions['use text format html_only_nofilter'] = array(
    'name' => 'use text format html_only_nofilter',
    'roles' => array(
      'Tech Support' => 'Tech Support',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
