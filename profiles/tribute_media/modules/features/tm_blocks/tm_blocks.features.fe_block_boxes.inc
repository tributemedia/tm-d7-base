<?php
/**
 * @file
 * tm_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function tm_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Preface : Hero Banner';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'preface_hero_banner';
  $fe_block_boxes->body = '<div class="hero-left col s12 m6">
<div class="hero-text-wrapper">&nbsp;</div>

<div class="hero-title">Title here</div>

<div class="hero-sub-title">Sub Title here</div>

<div class="hero-text">Text here</div>

<div class="hero-button"><a href="#">button</a></div>
</div>
<!-- hero-left -->

<div class="hero-right col s12 m6">
<div class="hero-text-wrapper">&nbsp;</div>

<div class="hero-title">Title here</div>

<div class="hero-sub-title">Sub Title here</div>

<div class="hero-text">Text here</div>

<div class="hero-button"><a href="#">button</a></div>
</div>
<!-- hero-left -->';

  $export['preface_hero_banner'] = $fe_block_boxes;

  return $export;
}
