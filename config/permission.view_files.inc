<?php
/**
 * @file
 * permission.view_files.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'view files',
  'roles' => array(
    0 => 'administrator',
    1 => 'anonymous user',
    2 => 'authenticated user',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'file_entity',
);
