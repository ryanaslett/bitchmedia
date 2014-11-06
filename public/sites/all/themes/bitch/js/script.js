/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

  // On click, add active class and remove all other tout classes
  $('h2.tout-header').click(function (e) {
    $('body').toggleClass('tout-active');
    $('body').removeClass('search-active menu-active login-active');
    e.preventDefault();
  });

  $('h2.search-header').click(function (e) {
    $('body').toggleClass('search-active');
    $('body').removeClass('tout-active menu-active login-active');
    e.preventDefault();
  });

  $('h2.menu-header').click(function (e) {
    $('body').toggleClass('menu-active');
    $('body').removeClass('tout-active search-active login-active');
    e.preventDefault();
  });

  $('h2.login-header').click(function (e) {
    $('body').toggleClass('login-active');
    $('body').removeClass('tout-active search-active menu-active');
    e.preventDefault();
  });

  // On close button click, remove all active classes
  $('.tout-close').click(function (e) {
    $('body').removeClass('tout-active search-active login-active menu-active');
    e.preventDefault();
  });

  }
};


})(jQuery, Drupal, this, this.document);
