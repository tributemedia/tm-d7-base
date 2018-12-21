<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $html_attributes:  String of attributes for the html element. It can be
 *   manipulated through the variable $html_attributes_array from preprocess
 *   functions.
 * - $html_attributes_array: An array of attribute values for the HTML element.
 *   It is flattened into a string within the variable $html_attributes.
 * - $body_attributes:  String of attributes for the BODY element. It can be
 *   manipulated through the variable $body_attributes_array from preprocess
 *   functions.
 * - $body_attributes_array: An array of attribute values for the BODY element.
 *   It is flattened into a string within the variable $body_attributes.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 */
?><!DOCTYPE html>
<html
lang="en"
xml:lang="en"
<?php print $rdf_namespaces;?>>
<head>
  <link rel="profile" href="<?php print $grddl_profile; ?>" />
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1.0"/>
  <?php print $head; ?>
  <link rel="icon" type="image/x-icon" href="<?php print path_to_theme(); ?>/favicon.ico" />
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
  <![endif]-->
	  <link rel="apple-touch-icon" sizes="57x57" href="../../../../../sites/all/themes/material_custom/apple-icon-57x57.png">
	  <link rel="apple-touch-icon" sizes="60x60" href="../../../../../sites/all/themes/material_custom/apple-icon-60x60.png">
	  <link rel="apple-touch-icon" sizes="72x72" href="../../../../../sites/all/themes/material_custom/apple-icon-72x72.png">
	  <link rel="apple-touch-icon" sizes="76x76" href="../../../../../sites/all/themes/material_custom/apple-icon-76x76.png">
	  <link rel="apple-touch-icon" sizes="114x114" href="../../../../../sites/all/themes/material_custom/apple-icon-114x114.png">
	  <link rel="apple-touch-icon" sizes="120x120" href="../../../../../sites/all/themes/material_custom/apple-icon-120x120.png">
	  <link rel="apple-touch-icon" sizes="144x144" href="../../../../../sites/all/themes/material_custom/apple-icon-144x144.png">
	  <link rel="apple-touch-icon" sizes="152x152" href="../../../../../sites/all/themes/material_custom/apple-icon-152x152.png">
	  <link rel="apple-touch-icon" sizes="180x180" href="../../../../../sites/all/themes/material_custom/apple-icon-180x180.png">
	  <link rel="icon" type="image/png" sizes="192x192"  href="../../../../../sites/all/themes/material_custom/android-icon-192x192.png">
	  <link rel="icon" type="image/png" sizes="32x32" href="../../../../../sites/all/themes/material_custom/favicon-32x32.png">
	  <link rel="icon" type="image/png" sizes="96x96" href="../../../../../sites/all/themes/material_custom/favicon-96x96.png">
	  <link rel="icon" type="image/png" sizes="16x16" href="../../../../../sites/all/themes/material_custom/favicon-16x16.png">
	  <meta name="msapplication-TileColor" content="#ffffff">
	  <meta name="msapplication-TileImage" content="../../../../../sites/all/themes/material_custom/ms-icon-144x144.png">
	  <meta name="theme-color" content="#ffffff">
  <?php print $scripts; ?>
  <script>
  jQuery(document).ready(function($){
    var deviceAgent = navigator.userAgent.toLowerCase();
    var agentID = deviceAgent.match(/(iphone|ipod|ipad)/);
    if (agentID) {
  	  $('html').addClass('ios');
    }
  });</script>
</head>
<body class="<?php print $classes; ?>">
  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
</body>
</html>
