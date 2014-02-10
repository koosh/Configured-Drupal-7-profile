<?php
/**
 * @file
 * permission.search_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'search content',
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
  0 => 'search',
);
