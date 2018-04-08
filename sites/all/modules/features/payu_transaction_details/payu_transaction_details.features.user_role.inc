<?php
/**
 * @file
 * payu_transaction_details.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function payu_transaction_details_user_default_roles() {
  $roles = array();

  // Exported role: Admin.
  $roles['Admin'] = array(
    'name' => 'Admin',
    'weight' => 3,
  );

  return $roles;
}
