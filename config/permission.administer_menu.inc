<?php
/**
 * @file
 * permission.administer_menu.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer menu',
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
  0 => 'menu',
);
