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
  $fe_block_boxes->info = 'Header Links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'header_links';
  $fe_block_boxes->body = '<div class="secondary-menu-wrapper">
<ul id="secondary-menu">
	<li><a href="/contact">Contact</a></li>
	<li><a href="/service">Service</a></li>
</ul>

<ul id="social-links">
	<li><a class="home" href="/"><span class="inner">Home</span></a></li>
	<li><a class="twitter" href="http://www.twitter.com" target="_blank"><span class="inner">Twitter</span></a></li>
	<li><a class="facebook" href="http://www.facebook.com" target="_blank"><span class="inner">Facebook</span></a></li>
	<li><a class="linkedin" href="http://www.linkedin.com" target="_blank"><span class="inner">LinkedIn</span></a></li>
	<li><a class="instagram" href="http://www.instagram.com" target="_blank"><span class="inner">Instagram</span></a></li>
	<li><a class="pinterest" href="http://www.pinterest.com" target="_blank"><span class="inner">Pinterest</span></a></li>
	<li><a class="youtube" href="http://www.youtube.com" target="_blank"><span class="inner">Youtube</span></a></li>
	<li><a class="contact" href="/contact"><span class="inner"><span class="inner">Contact</span></span></a></li>
</ul>
</div>
';

  $export['header_links'] = $fe_block_boxes;

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
