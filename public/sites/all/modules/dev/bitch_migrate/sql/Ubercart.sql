/* UBERCART STUFF */

/* Ensure that d7 ubercart is empty first */
TRUNCATE TABLE bitch_d7.uc_attribute_options;
TRUNCATE TABLE bitch_d7.uc_attributes;
TRUNCATE TABLE bitch_d7.uc_cart_link_clicks;
TRUNCATE TABLE bitch_d7.uc_cart_products;
TRUNCATE TABLE bitch_d7.uc_class_attribute_options;
TRUNCATE TABLE bitch_d7.uc_class_attributes;
TRUNCATE TABLE bitch_d7.uc_file_products;
TRUNCATE TABLE bitch_d7.uc_file_users;
TRUNCATE TABLE bitch_d7.uc_files;
TRUNCATE TABLE bitch_d7.uc_flatrate_methods;
TRUNCATE TABLE bitch_d7.uc_flatrate_products;
TRUNCATE TABLE bitch_d7.uc_order_admin_comments;
TRUNCATE TABLE bitch_d7.uc_order_comments;
TRUNCATE TABLE bitch_d7.uc_order_line_items;
TRUNCATE TABLE bitch_d7.uc_order_log;
TRUNCATE TABLE bitch_d7.uc_order_statuses;
TRUNCATE TABLE bitch_d7.uc_packaged_products;
TRUNCATE TABLE bitch_d7.uc_packages;
TRUNCATE TABLE bitch_d7.uc_payment_receipts;
TRUNCATE TABLE bitch_d7.uc_product_adjustments;
TRUNCATE TABLE bitch_d7.uc_product_attributes;
TRUNCATE TABLE bitch_d7.uc_product_classes;
TRUNCATE TABLE bitch_d7.uc_product_features;
TRUNCATE TABLE bitch_d7.uc_product_options;
TRUNCATE TABLE bitch_d7.uc_product_stock;
TRUNCATE TABLE bitch_d7.uc_products;
TRUNCATE TABLE bitch_d7.uc_quote_product_locations;
TRUNCATE TABLE bitch_d7.uc_quote_shipping_types;
TRUNCATE TABLE bitch_d7.uc_recurring_extensions;
TRUNCATE TABLE bitch_d7.uc_recurring_orders;
TRUNCATE TABLE bitch_d7.uc_recurring_product;
TRUNCATE TABLE bitch_d7.uc_recurring_schedule;
TRUNCATE TABLE bitch_d7.uc_recurring_users;
TRUNCATE TABLE bitch_d7.uc_roles_expirations;
TRUNCATE TABLE bitch_d7.uc_roles_products;
TRUNCATE TABLE bitch_d7.uc_usps_products;
TRUNCATE TABLE bitch_d7.uc_zones;
TRUNCATE TABLE bitch_d7.uc_countries;
TRUNCATE TABLE bitch_d7.uc_order_quotes;
TRUNCATE TABLE bitch_d7.uc_orders;
TRUNCATE TABLE bitch_d7.uc_shipments;
TRUNCATE TABLE bitch_d7.uc_order_products;
TRUNCATE TABLE bitch_d7.uc_varprice_products;
/* Copy data from d6 to d7 */
INSERT IGNORE INTO bitch_d7.uc_attribute_options SELECT * FROM bitch_prod.uc_attribute_options;
INSERT IGNORE INTO bitch_d7.uc_attributes SELECT * FROM bitch_prod.uc_attributes;
INSERT IGNORE INTO bitch_d7.uc_cart_link_clicks SELECT * FROM bitch_prod.uc_cart_link_clicks;
INSERT IGNORE INTO bitch_d7.uc_cart_products SELECT * FROM bitch_prod.uc_cart_products;
INSERT IGNORE INTO bitch_d7.uc_class_attribute_options SELECT * FROM bitch_prod.uc_class_attribute_options;
INSERT IGNORE INTO bitch_d7.uc_class_attributes SELECT * FROM bitch_prod.uc_class_attributes;
INSERT IGNORE INTO bitch_d7.uc_file_products SELECT * FROM bitch_prod.uc_file_products;
INSERT IGNORE INTO bitch_d7.uc_file_users SELECT * FROM bitch_prod.uc_file_users;
INSERT IGNORE INTO bitch_d7.uc_files SELECT * FROM bitch_prod.uc_files;
INSERT IGNORE INTO bitch_d7.uc_flatrate_methods SELECT * FROM bitch_prod.uc_flatrate_methods;
INSERT IGNORE INTO bitch_d7.uc_flatrate_products SELECT * FROM bitch_prod.uc_flatrate_products;
INSERT IGNORE INTO bitch_d7.uc_order_admin_comments SELECT * FROM bitch_prod.uc_order_admin_comments;
INSERT IGNORE INTO bitch_d7.uc_order_comments SELECT * FROM bitch_prod.uc_order_comments;
INSERT IGNORE INTO bitch_d7.uc_order_line_items SELECT * FROM bitch_prod.uc_order_line_items;
INSERT IGNORE INTO bitch_d7.uc_order_log SELECT * FROM bitch_prod.uc_order_log;
INSERT IGNORE INTO bitch_d7.uc_order_statuses SELECT * FROM bitch_prod.uc_order_statuses;
INSERT IGNORE INTO bitch_d7.uc_packaged_products SELECT * FROM bitch_prod.uc_packaged_products;
INSERT IGNORE INTO bitch_d7.uc_packages SELECT * FROM bitch_prod.uc_packages;
INSERT IGNORE INTO bitch_d7.uc_payment_receipts SELECT * FROM bitch_prod.uc_payment_receipts;
INSERT IGNORE INTO bitch_d7.uc_product_adjustments SELECT * FROM bitch_prod.uc_product_adjustments;
INSERT IGNORE INTO bitch_d7.uc_product_attributes SELECT * FROM bitch_prod.uc_product_attributes;
INSERT IGNORE INTO bitch_d7.uc_product_classes SELECT * FROM bitch_prod.uc_product_classes;
INSERT IGNORE INTO bitch_d7.uc_product_features SELECT * FROM bitch_prod.uc_product_features;
INSERT IGNORE INTO bitch_d7.uc_product_options SELECT * FROM bitch_prod.uc_product_options;
INSERT IGNORE INTO bitch_d7.uc_product_stock SELECT * FROM bitch_prod.uc_product_stock;
INSERT IGNORE INTO bitch_d7.uc_products SELECT * FROM bitch_prod.uc_products;
INSERT IGNORE INTO bitch_d7.uc_quote_product_locations SELECT * FROM bitch_prod.uc_quote_product_locations;
INSERT IGNORE INTO bitch_d7.uc_quote_shipping_types SELECT * FROM bitch_prod.uc_quote_shipping_types;
INSERT IGNORE INTO bitch_d7.uc_recurring_extensions SELECT * FROM bitch_prod.uc_recurring_extensions;
INSERT IGNORE INTO bitch_d7.uc_recurring_orders SELECT * FROM bitch_prod.uc_recurring_orders;
INSERT IGNORE INTO bitch_d7.uc_recurring_product SELECT * FROM bitch_prod.uc_recurring_product;
INSERT IGNORE INTO bitch_d7.uc_recurring_schedule SELECT * FROM bitch_prod.uc_recurring_schedule;
INSERT IGNORE INTO bitch_d7.uc_recurring_users SELECT * FROM bitch_prod.uc_recurring_users;
INSERT IGNORE INTO bitch_d7.uc_roles_expirations SELECT * FROM bitch_prod.uc_roles_expirations;
INSERT IGNORE INTO bitch_d7.uc_roles_products SELECT * FROM bitch_prod.uc_roles_products;
INSERT IGNORE INTO bitch_d7.uc_usps_products SELECT * FROM bitch_prod.uc_usps_products;
INSERT IGNORE INTO bitch_d7.uc_zones SELECT * FROM bitch_prod.uc_zones;
INSERT IGNORE INTO bitch_d7.uc_countries SELECT * FROM bitch_prod.uc_countries;
INSERT IGNORE INTO bitch_d7.uc_order_quotes SELECT * FROM bitch_prod.uc_order_quotes;
INSERT IGNORE INTO bitch_d7.uc_orders SELECT * FROM bitch_prod.uc_orders;
INSERT IGNORE INTO bitch_d7.uc_shipments SELECT * FROM bitch_prod.uc_shipments;
INSERT IGNORE INTO bitch_d7.uc_order_products SELECT * FROM bitch_prod.uc_order_products;
INSERT IGNORE INTO bitch_d7.uc_varprice_products SELECT * FROM bitch_prod.uc_varprice_products;
DELETE uca FROM bitch_d7.uc_class_attribute_options uca WHERE uca.pcid like 'don%';
DELETE uca FROM bitch_d7.uc_class_attributes uca WHERE uca.pcid like 'don%';
UPDATE bitch_d7.uc_class_attributes SET pcid = 'donation' where pcid = 'one_time_donation';
UPDATE bitch_d7.uc_class_attributes SET pcid = 'merchandise' where pcid = 'buzzfactory_product';
UPDATE bitch_d7.uc_class_attributes SET pcid = 'membership' where pcid = 'sustainer';
UPDATE bitch_d7.uc_class_attribute_options SET pcid = 'donation' where pcid = 'one_time_donation';
UPDATE bitch_d7.uc_class_attribute_options SET pcid = 'merchandise' where pcid = 'buzzfactory_product';
UPDATE bitch_d7.uc_class_attribute_options SET pcid = 'membership' where pcid = 'sustainer';
UPDATE bitch_d7.uc_product_classes SET pcid = 'donation' where pcid = 'one_time_donation';
UPDATE bitch_d7.uc_product_classes SET pcid = 'merchandise' where pcid = 'buzzfactory_product';
UPDATE bitch_d7.uc_product_classes SET pcid = 'membership' where pcid = 'sustainer';
DELETE upc FROM bitch_d7.uc_product_classes upc WHERE upc.pcid like 'combined_donation';

/* remap sustainer nodes */
UPDATE bitch_d7.uc_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesustainer mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_flatrate_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesustainer mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_usps_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesustainer mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_order_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesustainer mm ON mm.sourceid1 = stb.nid
   SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_cart_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesustainer mm ON mm.sourceid1 = stb.nid
  SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_adjustments stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesustainer mm ON mm.sourceid1 = stb.nid
  SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_attributes stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesustainer mm ON mm.sourceid1 = stb.nid
  SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_features stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesustainer mm ON mm.sourceid1 = stb.nid
   SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_options stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesustainer mm ON mm.sourceid1 = stb.nid
  SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_stock stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesustainer mm ON mm.sourceid1 = stb.nid
  SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_quote_product_locations stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesustainer mm ON mm.sourceid1 = stb.nid
  SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_roles_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesustainer mm ON mm.sourceid1 = stb.nid
  SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
/* remap subscription nodes */
UPDATE bitch_d7.uc_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesubscription mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_flatrate_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesubscription mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_usps_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesubscription mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_order_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesubscription mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_cart_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesubscription mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_adjustments stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesubscription mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_attributes stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesubscription mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_features stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesubscription mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_options stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesubscription mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_stock stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesubscription mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_quote_product_locations stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesubscription mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_roles_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodesubscription mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
/* remap donation nodes */
UPDATE bitch_d7.uc_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodeone_time_donation mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_flatrate_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodeone_time_donation mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_usps_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodeone_time_donation mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_order_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodeone_time_donation mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_cart_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodeone_time_donation mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_adjustments stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodeone_time_donation mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_attributes stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodeone_time_donation mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_features stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodeone_time_donation mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_options stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodeone_time_donation mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_stock stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodeone_time_donation mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_quote_product_locations stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodeone_time_donation mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_roles_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodeone_time_donation mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
/* remap issue nodes */
UPDATE bitch_d7.uc_products stb
  LEFT JOIN bitch_d7.migrate_map_modbitchmedianodeissue mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_flatrate_products stb
  LEFT JOIN bitch_d7.migrate_map_modbitchmedianodeissue mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_usps_products stb
  LEFT JOIN bitch_d7.migrate_map_modbitchmedianodeissue mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_order_products stb
  LEFT JOIN bitch_d7.migrate_map_modbitchmedianodeissue mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_cart_products stb
  LEFT JOIN bitch_d7.migrate_map_modbitchmedianodeissue mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_adjustments stb
  LEFT JOIN bitch_d7.migrate_map_modbitchmedianodeissue mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_attributes stb
  LEFT JOIN bitch_d7.migrate_map_modbitchmedianodeissue mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_features stb
  LEFT JOIN bitch_d7.migrate_map_modbitchmedianodeissue mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_options stb
  LEFT JOIN bitch_d7.migrate_map_modbitchmedianodeissue mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_stock stb
  LEFT JOIN bitch_d7.migrate_map_modbitchmedianodeissue mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_quote_product_locations stb
  LEFT JOIN bitch_d7.migrate_map_modbitchmedianodeissue mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_roles_products stb
  LEFT JOIN bitch_d7.migrate_map_modbitchmedianodeissue mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
/* remap digital edition nodes */
UPDATE bitch_d7.uc_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodedigital_download mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_flatrate_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodedigital_download mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_usps_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodedigital_download mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_order_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodedigital_download mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_cart_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodedigital_download mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_adjustments stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodedigital_download mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_attributes stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodedigital_download mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_features stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodedigital_download mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_options stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodedigital_download mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_stock stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodedigital_download mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_quote_product_locations stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodedigital_download mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_roles_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodedigital_download mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
/* remap merchandise nodes */
UPDATE bitch_d7.uc_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_flatrate_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_usps_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1, stb.vid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_order_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_cart_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_adjustments stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_attributes stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_features stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_options stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_product_stock stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_quote_product_locations stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;
UPDATE bitch_d7.uc_roles_products stb
  LEFT JOIN bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm ON mm.sourceid1 = stb.nid
SET stb.nid = mm.destid1 WHERE stb.nid = mm.sourceid1;


TRUNCATE TABLE field_revision_field_store_category;
TRUNCATE TABLE field_data_field_store_category;

INSERT INTO field_data_field_store_category
  SELECT
    'node'        AS entity_type,
    'merchandise' AS bundle,
    0             AS deleted,
    entity_id,
    revision_id,
    'und'         AS language,
    delta,
    field_store_category_target_id
  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  ttd.tid    AS field_store_category_target_id
                FROM bitch_d7.migrate_map_bitchmedianodebuzzfactory_product mm
                  LEFT JOIN bitch_prod.term_node tn ON tn.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data td ON td.tid = tn.tid AND td.vid = 7
                  LEFT JOIN bitch_d7.taxonomy_term_data ttd ON ttd.name = td.name AND ttd.vid = 9
                WHERE ttd.tid IS NOT NULL
              ) zz
       ) zx;

INSERT INTO field_data_field_store_category
  SELECT
    'node'        AS entity_type,
    'issue' AS bundle,
    0             AS deleted,
    entity_id,
    revision_id,
    'und'         AS language,
    delta,
    field_store_category_target_id
  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  ttd.tid    AS field_store_category_target_id
                FROM bitch_d7.migrate_map_modbitchmedianodeissue mm
                  LEFT JOIN bitch_prod.term_node tn ON tn.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data td ON td.tid = tn.tid AND td.vid = 7
                  LEFT JOIN bitch_d7.taxonomy_term_data ttd ON ttd.name = td.name AND ttd.vid = 9
                WHERE ttd.tid IS NOT NULL
              ) zz
       ) zx;
INSERT INTO field_data_field_store_category
  SELECT
    'node'        AS entity_type,
    'donation' AS bundle,
    0             AS deleted,
    entity_id,
    revision_id,
    'und'         AS language,
    delta,
    field_store_category_target_id
  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  ttd.tid    AS field_store_category_target_id
                FROM bitch_d7.migrate_map_bitchmedianodeone_time_donation mm
                  LEFT JOIN bitch_prod.term_node tn ON tn.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data td ON td.tid = tn.tid AND td.vid = 7
                  LEFT JOIN bitch_d7.taxonomy_term_data ttd ON ttd.name = td.name AND ttd.vid = 9
                WHERE ttd.tid IS NOT NULL
              ) zz
       ) zx;

INSERT INTO field_data_field_store_category
  SELECT
    'node'        AS entity_type,
    'sustainer' AS bundle,
    0             AS deleted,
    entity_id,
    revision_id,
    'und'         AS language,
    delta,
    field_store_category_target_id
  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  ttd.tid    AS field_store_category_target_id
                FROM bitch_d7.migrate_map_bitchmedianodesustainer mm
                  LEFT JOIN bitch_prod.term_node tn ON tn.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data td ON td.tid = tn.tid AND td.vid = 7
                  LEFT JOIN bitch_d7.taxonomy_term_data ttd ON ttd.name = td.name AND ttd.vid = 9
                WHERE ttd.tid IS NOT NULL
              ) zz
       ) zx;

INSERT INTO field_data_field_store_category
  SELECT
    'node'        AS entity_type,
    'digital_download' AS bundle,
    0             AS deleted,
    entity_id,
    revision_id,
    'und'         AS language,
    delta,
    field_store_category_target_id
  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  ttd.tid    AS field_store_category_target_id
                FROM bitch_d7.migrate_map_bitchmedianodedigital_download mm
                  LEFT JOIN bitch_prod.term_node tn ON tn.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data td ON td.tid = tn.tid AND td.vid = 7
                  LEFT JOIN bitch_d7.taxonomy_term_data ttd ON ttd.name = td.name AND ttd.vid = 9
                WHERE ttd.tid IS NOT NULL
              ) zz
       ) zx;
INSERT INTO field_data_field_store_category
  SELECT
    'node'        AS entity_type,
    'subscription' AS bundle,
    0             AS deleted,
    entity_id,
    revision_id,
    'und'         AS language,
    delta,
    field_store_category_target_id
  FROM (
         SELECT
           *,
           @curRow := if(@curType = entity_id, @curRow + 1, 0) AS delta,
           @curType := entity_id
         FROM (
                SELECT DISTINCT
                  mm.destid1 AS entity_id,
                  mm.destid1 AS revision_id,
                  ttd.tid    AS field_store_category_target_id
                FROM bitch_d7.migrate_map_bitchmedianodesubscription mm
                  LEFT JOIN bitch_prod.term_node tn ON tn.nid = mm.sourceid1
                  LEFT JOIN bitch_prod.term_data td ON td.tid = tn.tid AND td.vid = 7
                  LEFT JOIN bitch_d7.taxonomy_term_data ttd ON ttd.name = td.name AND ttd.vid = 9
                WHERE ttd.tid IS NOT NULL
              ) zz
       ) zx;

INSERT INTO field_revision_field_store_category
  SELECT * FROM field_data_field_store_category;

/* Update all the product Types */
UPDATE bitch_d7.node_type
SET base = 'uc_product'
WHERE type IN ('digital_download', 'donation', 'issue', 'membership', 'merchandise', 'subscription');

/* Clean up random product features */
DELETE ucp FROM bitch_d7.uc_product_features ucp
  LEFT JOIN node n on n.nid = ucp.nid
WHERE n.type = 'issue';
