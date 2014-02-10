<?php
/**
 * @file
 * permission.view_the_administration_theme.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'view the administration theme',
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
  0 => 'system',
);
