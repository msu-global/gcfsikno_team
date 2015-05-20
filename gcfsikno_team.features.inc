<?php
/**
 * @file
 * gcfsikno_team.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gcfsikno_team_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
