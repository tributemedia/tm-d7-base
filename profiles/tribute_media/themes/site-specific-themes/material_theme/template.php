<?php

function material_theme_preprocess_html(&$variables) { // If you rename the sub theme, make sure you change the name on this line. e.g. if your theme name is MyTheme, change material_theme to MyTheme.
  /**
   * Add default icon
   */
  $apple_icon =  array(

    '#tag' => 'link',
    '#attributes' => array(
      'href' => '/'.path_to_theme() .'/apple-touch-icon.png',
      'rel' => 'apple-touch-icon-precomposed',
    ),
  );

  /**
   * Loop through to add various sizes
   */
  $apple_icon_sizes = array(57,72,114,144);

  foreach($apple_icon_sizes as $size){
    $apple = array(
      '#tag' => 'link',
      '#attributes' => array(
        'href' => '/'.path_to_theme().'/apple-touch-icon-'.$size.'x'.$size.'.png',
        'rel' => 'apple-touch-icon-precomposed',
        'sizes' => $size . 'x' . $size,
      ),
    );
    drupal_add_html_head($apple, 'apple-touch-icon-'.$size);
  }
}

