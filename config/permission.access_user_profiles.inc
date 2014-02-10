<?php
/**
 * @file
 * permission.access_user_profiles.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'access user profiles',
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
  0 => 'user',
);
