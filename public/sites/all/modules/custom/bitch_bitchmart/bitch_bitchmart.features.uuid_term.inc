<?php
/**
 * @file
 * bitch_bitchmart.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function bitch_bitchmart_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Calendars',
    'description' => 'Calendars',
    'format' => 'plain_text',
    'weight' => 10,
    'uuid' => '126e7f3c-c6f4-4b62-a786-ed5476e6b4f2',
    'vocabulary_machine_name' => 'store_category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Pens & Stationery',
    'description' => 'Pens & Stationery',
    'format' => 'plain_text',
    'weight' => 7,
    'uuid' => '1714dfdc-746d-404f-af1c-a8e74f2364e9',
    'vocabulary_machine_name' => 'store_category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Prints',
    'description' => 'Prints',
    'format' => 'plain_text',
    'weight' => 9,
    'uuid' => '1e60976f-a12f-4930-a162-55add2d08c2a',
    'vocabulary_machine_name' => 'store_category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Apparel',
    'description' => 'Things you can wear',
    'format' => 'plain_text',
    'weight' => 4,
    'uuid' => '1f717924-3142-4c74-8c99-1d43d648ae8e',
    'vocabulary_machine_name' => 'store_category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Subscriptions',
    'description' => 'Any type of subscription offered.',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '37b9b199-e4b4-4beb-8f5b-9a9b8ed281c2',
    'vocabulary_machine_name' => 'store_category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Donations',
    'description' => 'This is the term that corresponds to the "donate" item in the store',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '388f578b-c89e-481b-903a-281c96cf7e85',
    'vocabulary_machine_name' => 'store_category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Drinkware',
    'description' => 'Mugs and Water Bottles',
    'format' => 'plain_text',
    'weight' => 5,
    'uuid' => '4f61f869-38c7-41e2-9b85-2319dee1f383',
    'vocabulary_machine_name' => 'store_category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Digital Readers',
    'description' => 'Bitch on Campus Digial Readers',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => '5e06c3b9-795c-41cf-a6cd-3001b5c2664e',
    'vocabulary_machine_name' => 'store_category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Books',
    'description' => 'Books',
    'format' => 'plain_text',
    'weight' => 8,
    'uuid' => '751de4d7-528b-4d14-a9ac-a4a3e7cfa506',
    'vocabulary_machine_name' => 'store_category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Accessories',
    'description' => 'Aprons and Totes',
    'format' => 'plain_text',
    'weight' => 6,
    'uuid' => 'a658f4b9-06bc-4f07-ad2e-11d4d64cd60e',
    'vocabulary_machine_name' => 'store_category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Sustainership',
    'description' => 'Bee Hive Sustainers',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'd2283dc7-7479-416a-a641-ac1abd672772',
    'vocabulary_machine_name' => 'store_category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => 'Back Issues',
    'description' => 'Back issues of Bitch Magazine',
    'format' => 'plain_text',
    'weight' => 3,
    'uuid' => 'f1e1b85c-eece-4b39-92f8-4b1e7e1b4281',
    'vocabulary_machine_name' => 'store_category',
    'metatags' => array(),
  );
  return $terms;
}
