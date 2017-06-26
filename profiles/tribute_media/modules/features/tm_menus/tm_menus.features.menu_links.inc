<?php
/**
 * @file
 * tm_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tm_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_blog:blog.
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:node/2.
  $menu_links['main-menu_contact:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contact:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: management_clear-all-cache:admin/cacheflush/clearall.
  $menu_links['management_clear-all-cache:admin/cacheflush/clearall'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/cacheflush/clearall',
    'router_path' => 'admin/cacheflush/clearall',
    'link_title' => 'Clear All Cache',
    'options' => array(
      'attributes' => array(
        'title' => 'Clear all cache.',
      ),
      'identifier' => 'management_clear-all-cache:admin/cacheflush/clearall',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');
  t('Clear All Cache');
  t('Contact');
  t('Home');

  return $menu_links;
}
