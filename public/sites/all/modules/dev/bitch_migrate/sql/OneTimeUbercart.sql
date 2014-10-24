/* These queries update the d7 database to have stuff we want from d7 */
ALTER TABLE  bitch_d7.uc_countries add column  `pdmg_country` VARCHAR( 6 ) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL;

DROP TABLE bitch_d7.uc_varprice_products;
CREATE TABLE `uc_varprice_products` (
  `vpid` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `pfid` int(10) unsigned NOT NULL DEFAULT '0',
  `price_default` decimal(10,2) NOT NULL DEFAULT '0.00' COMMENT 'Default product price.',
  `price_minimum` varchar(255) NOT NULL DEFAULT '' COMMENT 'Minimum product price.',
  `price_maximum` varchar(255) NOT NULL DEFAULT '' COMMENT 'Maximum product price.',
  `add_to_cart_title` varchar(255) NOT NULL DEFAULT '',
  `amount_title` varchar(255) NOT NULL DEFAULT '',
  `arbitrary` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `selectable` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `sel_widget` varchar(8) NOT NULL DEFAULT 'radios',
  `sel_options` text NOT NULL,
  PRIMARY KEY (`vpid`),
  KEY `pfid` (`pfid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/* Fix the incoming source ubercart stuff to match the d7 ubercart */
/* quote_form removed */
ALTER TABLE bitch_prod.uc_order_quotes DROP `quote_form`;
/* currency added */
ALTER TABLE bitch_prod.uc_orders ADD `currency` CHAR( 3 ) NOT NULL COMMENT  'The ISO currency code for the order.' AFTER `host`;
/* changed added */
ALTER TABLE bitch_prod.uc_shipments ADD `changed` int(11) NOT NULL DEFAULT '0' COMMENT 'The Unix timestamp indicating the last time the shipment was modified.' AFTER `cost`;
/* manufacturer removed, weight_units added */
ALTER TABLE bitch_prod.uc_order_products DROP `manufacturer`;
ALTER TABLE bitch_prod.uc_order_products ADD `weight_units` varchar(255) NOT NULL DEFAULT 'lb' COMMENT 'Unit of measure for the weight field.' AFTER `weight`;


/* Update all the ubercart tables to have the proper NID */
