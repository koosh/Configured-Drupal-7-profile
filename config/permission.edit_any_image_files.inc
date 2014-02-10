<?php
/**
 * @file
 * permission.edit_any_image_files.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any image files',
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
