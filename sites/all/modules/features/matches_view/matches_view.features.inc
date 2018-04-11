<?php
/**
 * @file
 * matches_view.features.inc
 */

/**
 * Implements hook_views_api().
 */
function matches_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function matches_view_image_default_styles() {
  $styles = array();

  // Exported image style: ipl_logos.
  $styles['ipl_logos'] = array(
    'label' => 'Ipl logos',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 60,
          'height' => 60,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
