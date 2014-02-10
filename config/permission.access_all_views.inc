<?php
/**
 * @file
 * permission.access_all_views.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'access all views',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'views',
);
