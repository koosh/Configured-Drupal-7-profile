<?php
/**
 * @file
 * permission.flush_caches.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'flush caches',
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
