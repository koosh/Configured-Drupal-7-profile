<?php
/**
 * @file
 * permission.download_any_audio_files.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'download any audio files',
  'roles' => array(
    0 => 'administrator',
    1 => 'editor',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
  'role.editor' => 'role.editor',
);

$optional = array();

$modules = array(
  0 => 'file_entity',
);
