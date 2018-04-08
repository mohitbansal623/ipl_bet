<?php
/**
 * @file
 * payu_transaction_details.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function payu_transaction_details_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Payu Details';
  $data_table->name = 'max_payu_transaction_details';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'transaction_id' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => TRUE,
        'default' => '',
        'description' => '',
      ),
      'mihpayid' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'max_id' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'amount' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'status' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'added_on' => array(
        'type' => 'int',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'ip_id' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'registration_no' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'hpslocation_id' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ia_code' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'paid_by' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'ptn_status' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'contact_no' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'reciept_no' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'payment_mode' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
      'card_type' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
        'description' => '',
      ),
    ),
    'name' => 'max_payu_transaction_details',
    'primary key' => array(
      0 => 'transaction_id',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'transaction_id' => array(
        'label' => 'transaction_id',
      ),
      'mihpayid' => array(
        'label' => 'mihpayid',
      ),
      'max_id' => array(
        'label' => 'max_id',
      ),
      'amount' => array(
        'label' => 'amount',
      ),
      'status' => array(
        'label' => 'status',
      ),
      'added_on' => array(
        'label' => 'added_on',
      ),
      'ip_id' => array(
        'label' => 'ip_id',
      ),
      'registration_no' => array(
        'label' => 'registration_no',
      ),
      'hpslocation_id' => array(
        'label' => 'hpslocation_id',
      ),
      'ia_code' => array(
        'label' => 'ia_code',
      ),
      'paid_by' => array(
        'label' => 'paid_by',
      ),
      'ptn_status' => array(
        'label' => 'ptn_status',
      ),
      'contact_no' => array(
        'label' => 'contact_no',
      ),
      'reciept_no' => array(
        'label' => 'reciept_no',
      ),
      'payment_mode' => array(
        'label' => 'payment_mode',
      ),
      'card_type' => array(
        'label' => 'card_type',
      ),
    ),
  );
  $export['max_payu_transaction_details'] = $data_table;

  return $export;
}
