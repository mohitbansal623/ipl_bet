<?php
/**
 * @file
 * user_info_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function user_info_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "data" && $api == "data_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function user_info_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
