<?php
/**
 * @file
 * ipl_matches.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ipl_matches_node_info() {
  $items = array(
    'ipl_matches' => array(
      'name' => t('IPL Matches'),
      'base' => 'node_content',
      'description' => t('It will contain the list of IPL matches along with all details.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
