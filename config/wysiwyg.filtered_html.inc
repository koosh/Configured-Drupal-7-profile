<?php
/**
 * @file
 * wysiwyg.filtered_html.inc
 */

$api = '2.0.0';

$data = (object) array(
  'editor' => 'ckeditor',
  'format' => 'filtered_html',
  'settings' => array(
    'apply_source_formatting' => 0,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'buttons' => array(
      'default' => array(
        'Anchor' => 1,
        'Bold' => 1,
        'BulletedList' => 1,
        'Format' => 1,
        'Italic' => 1,
        'Link' => 1,
        'NumberedList' => 1,
        'PasteText' => 1,
        'Blockqoute' => 1,
        'Source' => 1,
        'Table' => 1,
      ),
      'drupal' => array(
        'media' => 1,
      ),
    ),
    'convert_fonts_to_spans' => 1,
    'css_classes' => '',
    'css_path' => '',
    'css_setting' => 'theme',
    'default' => 1,
    'language' => NULL,
    'paste_auto_cleanup_on_paste' => 1,
    'path_loc' => 'bottom',
    'preformatted' => 0,
    'remove_linebreaks' => 1,
    'resizing' => 1,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'toolbar_align' => 'left',
    'toolbar_loc' => 'top',
    'user_choose' => 0,
    'verify_html' => 1,
  ),
);

$dependencies = array(
  'text_format.filtered_html' => 'text_format.filtered_html',
);

$optional = array();

$modules = array(
  0 => 'wysiwyg',
);
