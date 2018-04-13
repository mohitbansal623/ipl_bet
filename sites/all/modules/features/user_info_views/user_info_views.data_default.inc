<?php
/**
 * @file
 * user_info_views.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function user_info_views_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Forms';
  $data_table->name = 'forms';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'form_id' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'form_name' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'forms',
    'primary key' => array(
      0 => 'id',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'id' => array(
        'label' => 'ID',
      ),
      'form_id' => array(
        'label' => 'Form ID',
      ),
      'form_name' => array(
        'label' => 'Form Name',
      ),
    ),
  );
  $export['forms'] = $data_table;

  return $export;
}
