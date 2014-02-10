<?php
/**
 * @file
 * permission.administer_themes.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer themes',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'system',
);
