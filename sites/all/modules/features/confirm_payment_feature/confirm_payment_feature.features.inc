<?php
/**
 * @file
 * confirm_payment_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function confirm_payment_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function confirm_payment_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function confirm_payment_feature_node_info() {
  $items = array(
    'confirm_payment' => array(
      'name' => t('Confirm Payment'),
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
