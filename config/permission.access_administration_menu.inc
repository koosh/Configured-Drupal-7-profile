<?php
/**
 * @file
 * permission.access_administration_menu.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'access administration menu',
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
  0 => 'admin_menu',
);
