<?php

/**
 * @file
 * The primary PHP file for this theme.
 */

function ipl_theme_preprocess_page(&$variables) {
  $path = path_to_theme();
  // if (drupal_is_front_page()) {
    drupal_add_css($path . '/stylesheets/homepage.css');
    drupal_add_js($path . '/js/particles.js');
    drupal_add_js($path . '/js/app.js');
  // }
}
