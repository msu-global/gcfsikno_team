<?php
/**
 * @file
 * gcfsikno_team.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gcfsikno_team_taxonomy_default_vocabularies() {
  return array(
    'field_of_study' => array(
      'name' => 'Field of Study',
      'machine_name' => 'field_of_study',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
