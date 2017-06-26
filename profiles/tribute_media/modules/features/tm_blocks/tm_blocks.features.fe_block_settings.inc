<?php
/**
 * @file
 * tm_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tm_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-header_links'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'header_links',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'material_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'material_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-preface_hero_banner'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'preface_hero_banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'material_theme' => array(
        'region' => 'preface',
        'status' => 1,
        'theme' => 'material_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
