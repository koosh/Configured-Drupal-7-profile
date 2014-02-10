<?php
/**
 * @file
 * permission.administer_views.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer views',
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
