<?php
/**
 * @file
 * context.configured_default.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'configured_default';
$context->description = 'Default page blocks placement';
$context->tag = 'configured';
$context->conditions = array(
  'sitewide' => array(
    'values' => array(
      1 => 1,
    ),
  ),
  'theme' => array(
    'values' => array(
      'omega' => 'omega',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'delta_blocks-breadcrumb' => array(
        'module' => 'delta_blocks',
        'delta' => 'breadcrumb',
        'region' => 'content',
        'weight' => '-10',
      ),
      'delta_blocks-messages' => array(
        'module' => 'delta_blocks',
        'delta' => 'messages',
        'region' => 'content',
        'weight' => '-9',
      ),
      'system-help' => array(
        'module' => 'system',
        'delta' => 'help',
        'region' => 'content',
        'weight' => '-8',
      ),
      'delta_blocks-page-title' => array(
        'module' => 'delta_blocks',
        'delta' => 'page-title',
        'region' => 'content',
        'weight' => '-7',
      ),
      'delta_blocks-tabs' => array(
        'module' => 'delta_blocks',
        'delta' => 'tabs',
        'region' => 'content',
        'weight' => '-6',
      ),
      'delta_blocks-action-links' => array(
        'module' => 'delta_blocks',
        'delta' => 'action-links',
        'region' => 'content',
        'weight' => '-5',
      ),
      'system-main' => array(
        'module' => 'system',
        'delta' => 'main',
        'region' => 'content',
        'weight' => '-4',
      ),
      'system-user-menu' => array(
        'module' => 'system',
        'delta' => 'user-menu',
        'region' => 'user_second',
        'weight' => '-10',
      ),
      'user-login' => array(
        'module' => 'user',
        'delta' => 'login',
        'region' => 'user_second',
        'weight' => '-9',
      ),
      'search-form' => array(
        'module' => 'search',
        'delta' => 'form',
        'region' => 'user_second',
        'weight' => '-8',
      ),
      'delta_blocks-logo' => array(
        'module' => 'delta_blocks',
        'delta' => 'logo',
        'region' => 'branding',
        'weight' => '-10',
      ),
      'delta_blocks-site-name' => array(
        'module' => 'delta_blocks',
        'delta' => 'site-name',
        'region' => 'branding',
        'weight' => '-9',
      ),
      'delta_blocks-site-slogan' => array(
        'module' => 'delta_blocks',
        'delta' => 'site-slogan',
        'region' => 'branding',
        'weight' => '-8',
      ),
      'system-main-menu' => array(
        'module' => 'system',
        'delta' => 'main-menu',
        'region' => 'menu',
        'weight' => '-10',
      ),
      'system-powered-by' => array(
        'module' => 'system',
        'delta' => 'powered-by',
        'region' => 'footer_second',
        'weight' => '-9',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('Default page blocks placement');
t('configured');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
