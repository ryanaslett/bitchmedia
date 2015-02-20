<?php
/**
 * @file
 * bitch_content_frame.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function bitch_content_frame_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Copyright Block',
    'description' => NULL,
    'title' => '',
    'type' => 'rich_text_block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'copyright-block',
    'view_mode' => 'default',
    'created' => 1422232129,
    'log' => '',
    'default_revision' => 1,
    'revisions' => array(),
    'uuid' => 'ba9ade51-184f-4486-beff-0f1aca0d04b2',
    'title_field' => array(
      'und' => array(
        0 => array(
          'value' => NULL,
          'format' => NULL,
        ),
      ),
    ),
    'field_block_content' => array(
      'und' => array(
        0 => array(
          'value' => '<p>© 2015 Bitch Media</p>
',
          'format' => 'wysywyg_format',
        ),
      ),
    ),
    'user_uuid' => '7f1cd4fe-f35c-436f-8943-fce57dc951a3',
  );
  return $beans;
}
