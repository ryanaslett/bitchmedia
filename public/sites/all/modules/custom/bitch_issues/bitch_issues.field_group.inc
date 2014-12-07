<?php
/**
 * @file
 * bitch_issues.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bitch_issues_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_content|multifield|magazine_review|form';
  $field_group->group_name = 'group_article_content';
  $field_group->entity_type = 'multifield';
  $field_group->bundle = 'magazine_review';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Online/Offline',
    'weight' => '0',
    'children' => array(
      0 => 'group_online_content',
      1 => 'group_offline',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_article_content|multifield|magazine_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bitch_list|node|issue|default';
  $field_group->group_name = 'group_bitch_list';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'The Bitch List',
    'weight' => '9',
    'children' => array(
      0 => 'field_bitch_list',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'The Bitch List',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bitch_list|node|issue|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_books|node|issue|default';
  $field_group->group_name = 'group_books';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Books',
    'weight' => '10',
    'children' => array(
      0 => 'field_book_reviews',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Books',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_books|node|issue|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_columns|node|issue|default';
  $field_group->group_name = 'group_columns';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columns',
    'weight' => '7',
    'children' => array(
      0 => 'field_columns',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Columns',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_columns|node|issue|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|digital_download|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_download';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_product_images',
      2 => 'field_store_category',
      3 => 'field_issue',
      4 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|digital_download|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_every_issue|node|issue|default';
  $field_group->group_name = 'group_every_issue';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'In Every Issue',
    'weight' => '13',
    'children' => array(
      0 => 'field_in_every_issue',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'In Every Issue',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_every_issue|node|issue|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_features|node|issue|default';
  $field_group->group_name = 'group_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Features',
    'weight' => '8',
    'children' => array(
      0 => 'field_features',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Features',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_features|node|issue|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_issue_title|node|issue|default';
  $field_group->group_name = 'group_issue_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Issue Title',
    'weight' => '0',
    'children' => array(
      0 => 'field_issue_season_and_year',
      1 => 'field_issue_year',
      2 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Issue Title',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_issue_title|node|issue|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_loveit_shoveit|node|issue|default';
  $field_group->group_name = 'group_loveit_shoveit';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Love it/Shove it',
    'weight' => '6',
    'children' => array(
      0 => 'field_love_it_shove_it',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Love it/Shove it',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_loveit_shoveit|node|issue|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mag_bitchlist|node|issue|form';
  $field_group->group_name = 'group_mag_bitchlist';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'The Bitch List',
    'weight' => '5',
    'children' => array(
      0 => 'field_bitch_list',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mag_bitchlist|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mag_book_reviews|node|issue|form';
  $field_group->group_name = 'group_mag_book_reviews';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Book Reviews',
    'weight' => '6',
    'children' => array(
      0 => 'field_book_reviews',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mag_book_reviews|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mag_columns|node|issue|form';
  $field_group->group_name = 'group_mag_columns';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Columns',
    'weight' => '3',
    'children' => array(
      0 => 'field_columns',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mag_columns|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mag_every_issue|node|issue|form';
  $field_group->group_name = 'group_mag_every_issue';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'In Every Issue',
    'weight' => '9',
    'children' => array(
      0 => 'field_in_every_issue',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mag_every_issue|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mag_features|node|issue|form';
  $field_group->group_name = 'group_mag_features';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Features',
    'weight' => '4',
    'children' => array(
      0 => 'field_features',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mag_features|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mag_info|node|issue|form';
  $field_group->group_name = 'group_mag_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Magazine Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_issue_cover',
      1 => 'field_issue_number',
      2 => 'field_issue_season_and_year',
      3 => 'field_cover_lines',
      4 => 'field_issue_year',
      5 => 'field_sold_out_flag',
      6 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mag_info|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mag_loveshove|node|issue|form';
  $field_group->group_name = 'group_mag_loveshove';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Love It/Shove It',
    'weight' => '2',
    'children' => array(
      0 => 'field_love_it_shove_it',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mag_loveshove|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mag_misc|node|issue|form';
  $field_group->group_name = 'group_mag_misc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Misc',
    'weight' => '10',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mag_misc|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mag_music_reviews|node|issue|form';
  $field_group->group_name = 'group_mag_music_reviews';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Music Reviews',
    'weight' => '8',
    'children' => array(
      0 => 'field_music_reviews',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mag_music_reviews|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mag_screen_reviews|node|issue|form';
  $field_group->group_name = 'group_mag_screen_reviews';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Screen Reviews',
    'weight' => '7',
    'children' => array(
      0 => 'field_screen_reviews',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_mag_screen_reviews|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|digital_download|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'digital_download';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '0',
    'children' => array(
      0 => 'field_metadata',
      1 => 'metatags',
      2 => 'path',
      3 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadata|node|digital_download|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|issue|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '0',
    'children' => array(
      0 => 'field_metadata',
      1 => 'metatags',
      2 => 'path',
      3 => 'redirect',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadata|node|issue|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_music|node|issue|default';
  $field_group->group_name = 'group_music';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Music',
    'weight' => '11',
    'children' => array(
      0 => 'field_music_reviews',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Music',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_music|node|issue|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offline|multifield|magazine_content|form';
  $field_group->group_name = 'group_offline';
  $field_group->entity_type = 'multifield';
  $field_group->bundle = 'magazine_content';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_online_offline';
  $field_group->data = array(
    'label' => 'Offline',
    'weight' => '10',
    'children' => array(
      0 => 'field_headline',
      1 => 'field_subhead',
      2 => 'field_author_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_offline|multifield|magazine_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offline|multifield|magazine_review|form';
  $field_group->group_name = 'group_offline';
  $field_group->entity_type = 'multifield';
  $field_group->bundle = 'magazine_review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_article_content';
  $field_group->data = array(
    'label' => 'Offline',
    'weight' => '4',
    'children' => array(
      0 => 'field_book_movie_album_title',
      1 => 'field_creator',
      2 => 'field_organization',
      3 => 'field_review_author',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_offline|multifield|magazine_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_online_content|multifield|magazine_content|form';
  $field_group->group_name = 'group_online_content';
  $field_group->entity_type = 'multifield';
  $field_group->bundle = 'magazine_content';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_online_offline';
  $field_group->data = array(
    'label' => 'Online',
    'weight' => '8',
    'children' => array(
      0 => 'field_article',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_online_content|multifield|magazine_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_online_content|multifield|magazine_review|form';
  $field_group->group_name = 'group_online_content';
  $field_group->entity_type = 'multifield';
  $field_group->bundle = 'magazine_review';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_article_content';
  $field_group->data = array(
    'label' => 'Online',
    'weight' => '3',
    'children' => array(
      0 => 'field_article',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_online_content|multifield|magazine_review|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_online_offline|multifield|magazine_content|form';
  $field_group->group_name = 'group_online_offline';
  $field_group->entity_type = 'multifield';
  $field_group->bundle = 'magazine_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Article Type',
    'weight' => '0',
    'children' => array(
      0 => 'group_online_content',
      1 => 'group_offline',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_online_offline|multifield|magazine_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_purchase_info|node|issue|default';
  $field_group->group_name = 'group_purchase_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Purchase Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_issue_cover',
      1 => 'field_issue_number',
      2 => 'display_price',
      3 => 'sell_price',
      4 => 'add_to_cart',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Purchase Info',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_purchase_info|node|issue|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_screen|node|issue|default';
  $field_group->group_name = 'group_screen';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'issue';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Screen',
    'weight' => '12',
    'children' => array(
      0 => 'field_screen_reviews',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Screen',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_screen|node|issue|default'] = $field_group;

  return $export;
}
