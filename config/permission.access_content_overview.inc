<?php
/**
 * @file
 * permission.access_content_overview.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'access content overview',
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
  0 => 'node',
);
