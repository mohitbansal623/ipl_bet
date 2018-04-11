<?php
/**
 * @file
 * ads.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ads_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ads_node_info() {
  $items = array(
    'ads' => array(
      'name' => t('Ads'),
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
