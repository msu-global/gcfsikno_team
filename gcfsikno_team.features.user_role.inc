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

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 7,
  );

  // Exported role: approver.
  $roles['approver'] = array(
    'name' => 'approver',
    'weight' => 5,
  );

  // Exported role: client.
  $roles['client'] = array(
    'name' => 'client',
    'weight' => 3,
  );

  // Exported role: content admin.
  $roles['content admin'] = array(
    'name' => 'content admin',
    'weight' => 6,
  );

  // Exported role: scholar.
  $roles['scholar'] = array(
    'name' => 'scholar',
    'weight' => 4,
  );

  // Exported role: visitor.
  $roles['visitor'] = array(
    'name' => 'visitor',
    'weight' => 2,
  );

  return $roles;
}
