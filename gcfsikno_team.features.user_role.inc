<?php
/**
 * @file
 * gcfsikno_team.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gcfsikno_team_user_default_roles() {
  $roles = array();

  // Exported role: super user.
  $roles['super user'] = array(
    'name' => 'super user',
    'weight' => 2,
  );

  return $roles;
}
