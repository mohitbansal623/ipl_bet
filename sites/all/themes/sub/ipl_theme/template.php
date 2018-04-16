<?php

/**
 * @file
 * The primary PHP file for this theme.
 */

function ipl_theme_preprocess_page(&$variables) {
  $path = path_to_theme();
    drupal_add_css($path . '/stylesheets/homepage.css');

  if (drupal_is_front_page()) {
    drupal_add_css(libraries_get_path('slick') . '/slick/slick.css', 'file');
    drupal_add_css(libraries_get_path('slick') . '/slick/slick-theme.css', 'file');
    drupal_add_css(libraries_get_path('slick') . '/slick/slick.theme.css', 'file');
    drupal_add_js(libraries_get_path('slick') . '/slick/slick.min.js', 'file');
  }
}
