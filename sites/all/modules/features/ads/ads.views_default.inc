<?php
/**
 * @file
 * ads.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ads_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'advertisements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Advertisements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Advertisements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Shop Photos */
  $handler->display->display_options['fields']['field_shop_photos']['id'] = 'field_shop_photos';
  $handler->display->display_options['fields']['field_shop_photos']['table'] = 'field_data_field_shop_photos';
  $handler->display->display_options['fields']['field_shop_photos']['field'] = 'field_shop_photos';
  $handler->display->display_options['fields']['field_shop_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shop_photos']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_shop_photos']['delta_offset'] = '0';
  /* Field: Content: Shop Items */
  $handler->display->display_options['fields']['field_shop_items']['id'] = 'field_shop_items';
  $handler->display->display_options['fields']['field_shop_items']['table'] = 'field_data_field_shop_items';
  $handler->display->display_options['fields']['field_shop_items']['field'] = 'field_shop_items';
  /* Field: Content: Shop Address */
  $handler->display->display_options['fields']['field_shop_address']['id'] = 'field_shop_address';
  $handler->display->display_options['fields']['field_shop_address']['table'] = 'field_data_field_shop_address';
  $handler->display->display_options['fields']['field_shop_address']['field'] = 'field_shop_address';
  /* Field: Content: Shop City */
  $handler->display->display_options['fields']['field_shop_city']['id'] = 'field_shop_city';
  $handler->display->display_options['fields']['field_shop_city']['table'] = 'field_data_field_shop_city';
  $handler->display->display_options['fields']['field_shop_city']['field'] = 'field_shop_city';
  /* Field: Content: Shop State */
  $handler->display->display_options['fields']['field_shop_state']['id'] = 'field_shop_state';
  $handler->display->display_options['fields']['field_shop_state']['table'] = 'field_data_field_shop_state';
  $handler->display->display_options['fields']['field_shop_state']['field'] = 'field_shop_state';
  /* Field: Content: Shop Pin Code */
  $handler->display->display_options['fields']['field_shop_pin_code']['id'] = 'field_shop_pin_code';
  $handler->display->display_options['fields']['field_shop_pin_code']['table'] = 'field_data_field_shop_pin_code';
  $handler->display->display_options['fields']['field_shop_pin_code']['field'] = 'field_shop_pin_code';
  $handler->display->display_options['fields']['field_shop_pin_code']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ads' => 'ads',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Shop Pin Code (field_shop_pin_code) */
  $handler->display->display_options['filters']['field_shop_pin_code_value']['id'] = 'field_shop_pin_code_value';
  $handler->display->display_options['filters']['field_shop_pin_code_value']['table'] = 'field_data_field_shop_pin_code';
  $handler->display->display_options['filters']['field_shop_pin_code_value']['field'] = 'field_shop_pin_code_value';
  $handler->display->display_options['filters']['field_shop_pin_code_value']['group'] = 2;
  $handler->display->display_options['filters']['field_shop_pin_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shop_pin_code_value']['expose']['operator_id'] = 'field_shop_pin_code_value_op';
  $handler->display->display_options['filters']['field_shop_pin_code_value']['expose']['label'] = 'Search By Pin Code';
  $handler->display->display_options['filters']['field_shop_pin_code_value']['expose']['operator'] = 'field_shop_pin_code_value_op';
  $handler->display->display_options['filters']['field_shop_pin_code_value']['expose']['identifier'] = 'field_shop_pin_code_value';
  $handler->display->display_options['filters']['field_shop_pin_code_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Shop City (field_shop_city) */
  $handler->display->display_options['filters']['field_shop_city_value']['id'] = 'field_shop_city_value';
  $handler->display->display_options['filters']['field_shop_city_value']['table'] = 'field_data_field_shop_city';
  $handler->display->display_options['filters']['field_shop_city_value']['field'] = 'field_shop_city_value';
  $handler->display->display_options['filters']['field_shop_city_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_shop_city_value']['group'] = 2;
  $handler->display->display_options['filters']['field_shop_city_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shop_city_value']['expose']['operator_id'] = 'field_shop_city_value_op';
  $handler->display->display_options['filters']['field_shop_city_value']['expose']['label'] = 'Search By City';
  $handler->display->display_options['filters']['field_shop_city_value']['expose']['operator'] = 'field_shop_city_value_op';
  $handler->display->display_options['filters']['field_shop_city_value']['expose']['identifier'] = 'field_shop_city_value';
  $handler->display->display_options['filters']['field_shop_city_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Shop State (field_shop_state) */
  $handler->display->display_options['filters']['field_shop_state_value']['id'] = 'field_shop_state_value';
  $handler->display->display_options['filters']['field_shop_state_value']['table'] = 'field_data_field_shop_state';
  $handler->display->display_options['filters']['field_shop_state_value']['field'] = 'field_shop_state_value';
  $handler->display->display_options['filters']['field_shop_state_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_shop_state_value']['group'] = 2;
  $handler->display->display_options['filters']['field_shop_state_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_shop_state_value']['expose']['operator_id'] = 'field_shop_state_value_op';
  $handler->display->display_options['filters']['field_shop_state_value']['expose']['label'] = 'Search By State';
  $handler->display->display_options['filters']['field_shop_state_value']['expose']['operator'] = 'field_shop_state_value_op';
  $handler->display->display_options['filters']['field_shop_state_value']['expose']['identifier'] = 'field_shop_state_value';
  $handler->display->display_options['filters']['field_shop_state_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_shop_photos' => 'field_shop_photos',
    'field_shop_items' => 'field_shop_items',
    'field_shop_address' => 'field_shop_address',
    'field_shop_city' => 'field_shop_city',
    'field_shop_state' => 'field_shop_state',
    'field_shop_pin_code' => 'field_shop_pin_code',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shop_photos' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shop_items' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shop_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shop_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shop_state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_shop_pin_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No results found';
  $handler->display->display_options['path'] = 'advertisements';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'All advertisements';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'advertisements';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Shop Photos */
  $handler->display->display_options['fields']['field_shop_photos']['id'] = 'field_shop_photos';
  $handler->display->display_options['fields']['field_shop_photos']['table'] = 'field_data_field_shop_photos';
  $handler->display->display_options['fields']['field_shop_photos']['field'] = 'field_shop_photos';
  $handler->display->display_options['fields']['field_shop_photos']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_shop_photos']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_shop_photos']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_shop_photos']['delta_offset'] = '0';
  /* Field: Content: Shop Items */
  $handler->display->display_options['fields']['field_shop_items']['id'] = 'field_shop_items';
  $handler->display->display_options['fields']['field_shop_items']['table'] = 'field_data_field_shop_items';
  $handler->display->display_options['fields']['field_shop_items']['field'] = 'field_shop_items';
  $handler->display->display_options['fields']['field_shop_items']['exclude'] = TRUE;
  /* Field: Content: Shop Address */
  $handler->display->display_options['fields']['field_shop_address']['id'] = 'field_shop_address';
  $handler->display->display_options['fields']['field_shop_address']['table'] = 'field_data_field_shop_address';
  $handler->display->display_options['fields']['field_shop_address']['field'] = 'field_shop_address';
  $handler->display->display_options['fields']['field_shop_address']['exclude'] = TRUE;
  /* Field: Content: Shop City */
  $handler->display->display_options['fields']['field_shop_city']['id'] = 'field_shop_city';
  $handler->display->display_options['fields']['field_shop_city']['table'] = 'field_data_field_shop_city';
  $handler->display->display_options['fields']['field_shop_city']['field'] = 'field_shop_city';
  $handler->display->display_options['fields']['field_shop_city']['exclude'] = TRUE;
  /* Field: Content: Shop State */
  $handler->display->display_options['fields']['field_shop_state']['id'] = 'field_shop_state';
  $handler->display->display_options['fields']['field_shop_state']['table'] = 'field_data_field_shop_state';
  $handler->display->display_options['fields']['field_shop_state']['field'] = 'field_shop_state';
  $handler->display->display_options['fields']['field_shop_state']['exclude'] = TRUE;
  /* Field: Content: Shop Pin Code */
  $handler->display->display_options['fields']['field_shop_pin_code']['id'] = 'field_shop_pin_code';
  $handler->display->display_options['fields']['field_shop_pin_code']['table'] = 'field_data_field_shop_pin_code';
  $handler->display->display_options['fields']['field_shop_pin_code']['field'] = 'field_shop_pin_code';
  $handler->display->display_options['fields']['field_shop_pin_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_shop_pin_code']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['block_description'] = 'Ads Block';
  $export['advertisements'] = $view;

  return $export;
}
