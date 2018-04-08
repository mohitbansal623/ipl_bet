<?php
/**
 * @file
 * matches_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function matches_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'list_of_matches';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'List of Matches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_match_location' => 'field_match_location',
    'nid' => 'nid',
    'field_team_a' => 'field_team_a',
    'field_team_a_icon' => 'field_team_a_icon',
    'field_team_b' => 'field_team_b',
    'field_team_b_icon' => 'field_team_b_icon',
    'php' => 'php',
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
    'field_match_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_team_a' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_team_a_icon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_team_b' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_team_b_icon' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2>Today\'s Matches</h2>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Match Location */
  $handler->display->display_options['fields']['field_match_location']['id'] = 'field_match_location';
  $handler->display->display_options['fields']['field_match_location']['table'] = 'field_data_field_match_location';
  $handler->display->display_options['fields']['field_match_location']['field'] = 'field_match_location';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Team A */
  $handler->display->display_options['fields']['field_team_a']['id'] = 'field_team_a';
  $handler->display->display_options['fields']['field_team_a']['table'] = 'field_data_field_team_a';
  $handler->display->display_options['fields']['field_team_a']['field'] = 'field_team_a';
  /* Field: Content: Team A Icon */
  $handler->display->display_options['fields']['field_team_a_icon']['id'] = 'field_team_a_icon';
  $handler->display->display_options['fields']['field_team_a_icon']['table'] = 'field_data_field_team_a_icon';
  $handler->display->display_options['fields']['field_team_a_icon']['field'] = 'field_team_a_icon';
  $handler->display->display_options['fields']['field_team_a_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_team_a_icon']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Team B */
  $handler->display->display_options['fields']['field_team_b']['id'] = 'field_team_b';
  $handler->display->display_options['fields']['field_team_b']['table'] = 'field_data_field_team_b';
  $handler->display->display_options['fields']['field_team_b']['field'] = 'field_team_b';
  /* Field: Content: Team B Icon */
  $handler->display->display_options['fields']['field_team_b_icon']['id'] = 'field_team_b_icon';
  $handler->display->display_options['fields']['field_team_b_icon']['table'] = 'field_data_field_team_b_icon';
  $handler->display->display_options['fields']['field_team_b_icon']['field'] = 'field_team_b_icon';
  $handler->display->display_options['fields']['field_team_b_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_team_b_icon']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ipl_matches' => 'ipl_matches',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_match_date.field_match_date_value' => 'field_data_field_match_date.field_match_date_value',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Match Location */
  $handler->display->display_options['fields']['field_match_location']['id'] = 'field_match_location';
  $handler->display->display_options['fields']['field_match_location']['table'] = 'field_data_field_match_location';
  $handler->display->display_options['fields']['field_match_location']['field'] = 'field_match_location';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Team A */
  $handler->display->display_options['fields']['field_team_a']['id'] = 'field_team_a';
  $handler->display->display_options['fields']['field_team_a']['table'] = 'field_data_field_team_a';
  $handler->display->display_options['fields']['field_team_a']['field'] = 'field_team_a';
  /* Field: Content: Team A Icon */
  $handler->display->display_options['fields']['field_team_a_icon']['id'] = 'field_team_a_icon';
  $handler->display->display_options['fields']['field_team_a_icon']['table'] = 'field_data_field_team_a_icon';
  $handler->display->display_options['fields']['field_team_a_icon']['field'] = 'field_team_a_icon';
  $handler->display->display_options['fields']['field_team_a_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_team_a_icon']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Team B */
  $handler->display->display_options['fields']['field_team_b']['id'] = 'field_team_b';
  $handler->display->display_options['fields']['field_team_b']['table'] = 'field_data_field_team_b';
  $handler->display->display_options['fields']['field_team_b']['field'] = 'field_team_b';
  /* Field: Content: Team B Icon */
  $handler->display->display_options['fields']['field_team_b_icon']['id'] = 'field_team_b_icon';
  $handler->display->display_options['fields']['field_team_b_icon']['table'] = 'field_data_field_team_b_icon';
  $handler->display->display_options['fields']['field_team_b_icon']['field'] = 'field_team_b_icon';
  $handler->display->display_options['fields']['field_team_b_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_team_b_icon']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Match Date */
  $handler->display->display_options['fields']['field_match_date']['id'] = 'field_match_date';
  $handler->display->display_options['fields']['field_match_date']['table'] = 'field_data_field_match_date';
  $handler->display->display_options['fields']['field_match_date']['field'] = 'field_match_date';
  $handler->display->display_options['fields']['field_match_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Bet Now';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$result = check_betting_time($row->nid);
if ($result) {
$_SESSION[\'nid\'] = $row->nid;
echo "<a href=\'/betting-form\'> Bet Now";
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ipl_matches' => 'ipl_matches',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_match_date.field_match_date_value' => 'field_data_field_match_date.field_match_date_value',
  );
  $handler->display->display_options['path'] = 'list-of-matches';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Past Matches';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Match Location */
  $handler->display->display_options['fields']['field_match_location']['id'] = 'field_match_location';
  $handler->display->display_options['fields']['field_match_location']['table'] = 'field_data_field_match_location';
  $handler->display->display_options['fields']['field_match_location']['field'] = 'field_match_location';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Team A */
  $handler->display->display_options['fields']['field_team_a']['id'] = 'field_team_a';
  $handler->display->display_options['fields']['field_team_a']['table'] = 'field_data_field_team_a';
  $handler->display->display_options['fields']['field_team_a']['field'] = 'field_team_a';
  /* Field: Content: Team A Icon */
  $handler->display->display_options['fields']['field_team_a_icon']['id'] = 'field_team_a_icon';
  $handler->display->display_options['fields']['field_team_a_icon']['table'] = 'field_data_field_team_a_icon';
  $handler->display->display_options['fields']['field_team_a_icon']['field'] = 'field_team_a_icon';
  $handler->display->display_options['fields']['field_team_a_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_team_a_icon']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Team B */
  $handler->display->display_options['fields']['field_team_b']['id'] = 'field_team_b';
  $handler->display->display_options['fields']['field_team_b']['table'] = 'field_data_field_team_b';
  $handler->display->display_options['fields']['field_team_b']['field'] = 'field_team_b';
  /* Field: Content: Team B Icon */
  $handler->display->display_options['fields']['field_team_b_icon']['id'] = 'field_team_b_icon';
  $handler->display->display_options['fields']['field_team_b_icon']['table'] = 'field_data_field_team_b_icon';
  $handler->display->display_options['fields']['field_team_b_icon']['field'] = 'field_team_b_icon';
  $handler->display->display_options['fields']['field_team_b_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_team_b_icon']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Match Date */
  $handler->display->display_options['fields']['field_match_date']['id'] = 'field_match_date';
  $handler->display->display_options['fields']['field_match_date']['table'] = 'field_data_field_match_date';
  $handler->display->display_options['fields']['field_match_date']['field'] = 'field_match_date';
  $handler->display->display_options['fields']['field_match_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ipl_matches' => 'ipl_matches',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '<=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '-1 day';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_match_date.field_match_date_value' => 'field_data_field_match_date.field_match_date_value',
  );
  $handler->display->display_options['block_description'] = 'Past Matches';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Matches';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Match Location */
  $handler->display->display_options['fields']['field_match_location']['id'] = 'field_match_location';
  $handler->display->display_options['fields']['field_match_location']['table'] = 'field_data_field_match_location';
  $handler->display->display_options['fields']['field_match_location']['field'] = 'field_match_location';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Team A */
  $handler->display->display_options['fields']['field_team_a']['id'] = 'field_team_a';
  $handler->display->display_options['fields']['field_team_a']['table'] = 'field_data_field_team_a';
  $handler->display->display_options['fields']['field_team_a']['field'] = 'field_team_a';
  /* Field: Content: Team A Icon */
  $handler->display->display_options['fields']['field_team_a_icon']['id'] = 'field_team_a_icon';
  $handler->display->display_options['fields']['field_team_a_icon']['table'] = 'field_data_field_team_a_icon';
  $handler->display->display_options['fields']['field_team_a_icon']['field'] = 'field_team_a_icon';
  $handler->display->display_options['fields']['field_team_a_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_team_a_icon']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Team B */
  $handler->display->display_options['fields']['field_team_b']['id'] = 'field_team_b';
  $handler->display->display_options['fields']['field_team_b']['table'] = 'field_data_field_team_b';
  $handler->display->display_options['fields']['field_team_b']['field'] = 'field_team_b';
  /* Field: Content: Team B Icon */
  $handler->display->display_options['fields']['field_team_b_icon']['id'] = 'field_team_b_icon';
  $handler->display->display_options['fields']['field_team_b_icon']['table'] = 'field_data_field_team_b_icon';
  $handler->display->display_options['fields']['field_team_b_icon']['field'] = 'field_team_b_icon';
  $handler->display->display_options['fields']['field_team_b_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_team_b_icon']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Match Date */
  $handler->display->display_options['fields']['field_match_date']['id'] = 'field_match_date';
  $handler->display->display_options['fields']['field_match_date']['table'] = 'field_data_field_match_date';
  $handler->display->display_options['fields']['field_match_date']['field'] = 'field_match_date';
  $handler->display->display_options['fields']['field_match_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'ipl_matches' => 'ipl_matches',
  );
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = '+1 day';
  $handler->display->display_options['filters']['date_filter']['year_range'] = '-0:+0';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_match_date.field_match_date_value' => 'field_data_field_match_date.field_match_date_value',
  );
  $handler->display->display_options['block_description'] = 'Upcoming Matches';
  $export['list_of_matches'] = $view;

  return $export;
}
