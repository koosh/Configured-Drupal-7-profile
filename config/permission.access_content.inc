<?php
/**
 * @file
 * permission.access_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'access content',
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
  0 => 'node',
);
