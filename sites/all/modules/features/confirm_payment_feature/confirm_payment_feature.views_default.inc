<?php
/**
 * @file
 * confirm_payment_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function confirm_payment_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'confirm_payment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'confirm-payment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'confirm-payment';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_upload_confirmation_image' => 'field_upload_confirmation_image',
    'field_bhim_number' => 'field_bhim_number',
    'field_paytm_number' => 'field_paytm_number',
    'field_phone_pay_number' => 'field_phone_pay_number',
    'field_tez_number' => 'field_tez_number',
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
    'field_upload_confirmation_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bhim_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_paytm_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_phone_pay_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_tez_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Upload Confirmation image of Payment */
  $handler->display->display_options['fields']['field_upload_confirmation_image']['id'] = 'field_upload_confirmation_image';
  $handler->display->display_options['fields']['field_upload_confirmation_image']['table'] = 'field_data_field_upload_confirmation_image';
  $handler->display->display_options['fields']['field_upload_confirmation_image']['field'] = 'field_upload_confirmation_image';
  $handler->display->display_options['fields']['field_upload_confirmation_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_upload_confirmation_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Paytm  Number */
  $handler->display->display_options['fields']['field_paytm_number']['id'] = 'field_paytm_number';
  $handler->display->display_options['fields']['field_paytm_number']['table'] = 'field_data_field_paytm_number';
  $handler->display->display_options['fields']['field_paytm_number']['field'] = 'field_paytm_number';
  /* Field: Content: Tez Number */
  $handler->display->display_options['fields']['field_tez_number']['id'] = 'field_tez_number';
  $handler->display->display_options['fields']['field_tez_number']['table'] = 'field_data_field_tez_number';
  $handler->display->display_options['fields']['field_tez_number']['field'] = 'field_tez_number';
  /* Field: Content: Bhim Number */
  $handler->display->display_options['fields']['field_bhim_number']['id'] = 'field_bhim_number';
  $handler->display->display_options['fields']['field_bhim_number']['table'] = 'field_data_field_bhim_number';
  $handler->display->display_options['fields']['field_bhim_number']['field'] = 'field_bhim_number';
  /* Field: Content: Phone Pay Number */
  $handler->display->display_options['fields']['field_phone_pay_number']['id'] = 'field_phone_pay_number';
  $handler->display->display_options['fields']['field_phone_pay_number']['table'] = 'field_data_field_phone_pay_number';
  $handler->display->display_options['fields']['field_phone_pay_number']['field'] = 'field_phone_pay_number';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'confirm_payment' => 'confirm_payment',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'confirm-payment';
  $export['confirm_payment'] = $view;

  return $export;
}
