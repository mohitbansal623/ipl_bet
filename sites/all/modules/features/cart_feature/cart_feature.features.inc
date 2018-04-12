<?php
/**
 * @file
 * cart_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function cart_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cart_feature_node_info() {
  $items = array(
    'add_to_cart' => array(
      'name' => t('Add to Cart'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
