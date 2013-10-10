<?php
/**
 * @file
 * os2intra_outdated_flag.features.inc
 */

/**
 * Implements hook_views_api().
 */
function os2intra_outdated_flag_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function os2intra_outdated_flag_flag_default_flags() {
  $flags = array();
  // Exported flag: "Forældet".
  $flags['os2intra_flag_outdated'] = array(
    'content_type' => 'node',
    'title' => 'Forældet',
    'global' => 0,
    'types' => array(
      0 => 'group',
      1 => 'os2web_base_contentpage',
      2 => 'post',
      3 => 'os2intra_base_page',
      4 => 'page',
    ),
    'flag_short' => 'Forældet',
    'flag_long' => 'Angiv dette indhold som at være forældet',
    'flag_message' => 'Indhold er angivet som forældet.',
    'unflag_short' => 'Ikke forældet',
    'unflag_long' => 'Angives dette indhold til at være ikke forældet.',
    'unflag_message' => 'Indhold angivet som ikke forældet.',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
        1 => 3,
      ),
      'unflag' => array(
        0 => 2,
        1 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => 'others',
    'show_on_page' => 1,
    'show_on_teaser' => 0,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'module' => 'os2intra_outdated_flag',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}
