<?php
/**
 * @file
 * permission.view_own_files.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'view own files',
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
