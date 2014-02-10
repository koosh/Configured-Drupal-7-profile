<?php
/**
 * @file
 * permission.administer_media_browser.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer media browser',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'media',
);
