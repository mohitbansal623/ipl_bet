<?php
/**
 * @file
 * data_table.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function data_table_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Betting';
  $data_table->name = 'betting';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'seq_id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'not null' => TRUE,
        'description' => '',
      ),
      'uid' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'nid' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'form_id' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'option' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'timestamp' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'betting',
    'primary key' => array(
      0 => 'seq_id',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'seq_id' => array(
        'label' => 'Seq ID',
      ),
      'uid' => array(
        'label' => 'UID',
      ),
      'nid' => array(
        'label' => 'NID',
      ),
      'form_id' => array(
        'label' => 'Form ID',
      ),
      'option' => array(
        'label' => 'Option Selected',
      ),
      'timestamp' => array(
        'label' => 'TimeStamp',
      ),
    ),
  );
  $export['betting'] = $data_table;

  return $export;
}
