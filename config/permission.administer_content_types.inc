<?php
/**
 * @file
 * permission.administer_content_types.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer content types',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'node',
);