<?php
/**
 * @file
 * permission.administer_image_styles.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer image styles',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'role.administrator' => 'role.administrator',
);

$optional = array();

$modules = array(
  0 => 'image',
);
