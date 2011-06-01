<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_applications_user_default_roles() {
  $roles = array();

  // Exported role: applications admin
  $roles['applications admin'] = array(
    'name' => 'applications admin',
  );

  return $roles;
}
