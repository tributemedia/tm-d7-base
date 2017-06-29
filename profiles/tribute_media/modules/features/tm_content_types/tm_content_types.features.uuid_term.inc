<?php
/**
 * @file
 * tm_content_types.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function tm_content_types_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'News',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '08076965-51bc-4ec1-8e76-64e1927691d7',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'test',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '71ba82a5-89ba-4844-b197-97489da2b2c9',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'News',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '8b0b71ec-3caa-4831-8695-45190e7c0077',
    'vocabulary_machine_name' => 'article_type',
  );
  $terms[] = array(
    'name' => 'Blog',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'e9fd6224-be70-4a52-893b-f1bccd9525a8',
    'vocabulary_machine_name' => 'article_type',
  );
  return $terms;
}
