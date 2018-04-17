<?php
/**
 * @file
 * confirm_payment_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function confirm_payment_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_payment_numbers|node|confirm_payment|form';
  $field_group->group_name = 'group_payment_numbers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'confirm_payment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Payment Numbers',
    'weight' => '4',
    'children' => array(
      0 => 'field_paytm_number',
      1 => 'field_tez_number',
      2 => 'field_bhim_number',
      3 => 'field_phone_pay_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-payment-numbers field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_payment_numbers|node|confirm_payment|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Your Payment Numbers');

  return $field_groups;
}
