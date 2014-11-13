<?php
/**
 * @file
 * editor_settings.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function editor_settings_ckeditor_profile_defaults() {
  $data = array(
    'Advanced' => array(
      'name' => 'Advanced',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'custom',
        'uicolor_user' => '#339999',
        'toolbar' => '[
    [\'Maximize\',\'-\',\'SelectAll\',\'Cut\',\'Copy\',\'Paste\'],
    [\'PasteText\',\'PasteFromWord\',\'Replace\',\'-\',\'Source\'],
    \'/\',
    [\'Styles\',\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'NumberedList\',\'BulletedList\',\'RemoveFormat\',\'-\',\'Subscript\',\'Superscript\'],
    [\'SpecialChar\',\'Image\',\'Table\',\'HorizontalRule\',\'-\',\'Link\',\'Unlink\',\'Anchor\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 'f',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'ckfinder',
        'filebrowser_image' => 'ckfinder',
        'filebrowser_flash' => 'ckfinder',
        'UserFilesPath' => '%b%f/images/uploaded',
        'UserFilesAbsolutePath' => '%d%b%f/images/uploaded',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
        'full_html' => 'Full HTML',
        'full_html_no_auto_line_breaks' => 'Full HTML, No auto-line breaks',
        'wysywyg_format' => 'Wysywyg Format',
      ),
    ),
    'Brief' => array(
      'name' => 'Brief',
      'settings' => array(
        'ss' => 2,
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'custom',
        'uicolor_user' => '#14B8C4',
        'toolbar' => '[
    [\'Bold\',\'Italic\',\'Underline\'],
    [\'Strike\',\'Subscript\',\'Superscript\',\'SpecialChar\'],
    [\'Link\',\'Unlink\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => 'config.height = \'50px\';
config.autoGrow_maxHeight = \'50px\';',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(
        'brief_wysiwyg' => 'Brief Wysiwyg',
      ),
    ),
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'skin' => 'moonocolor',
        'ckeditor_path' => '%l/ckeditor',
        'ckeditor_local_path' => '',
        'ckeditor_plugins_path' => '%m/plugins',
        'ckeditor_plugins_local_path' => '',
        'ckfinder_path' => '%m/ckfinder',
        'ckfinder_local_path' => '',
        'ckeditor_aggregate' => 'f',
        'toolbar_wizard' => 't',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(),
    ),
  );
  return $data;
}
