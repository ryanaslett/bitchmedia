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

  // Test to add break after author field on issues
  $('<br />').insertAfter('.node-type-issue .field-name-field-author-text');
  $('<br />').insertAfter('.node-type-issue .field-name-field-content-author');

  // Collapse comments
  $( "#comments" ).accordion({
    active: false,
    collapsible: true,
    header: "h2.comments__title",
    animate: 300
  });

  // Scroll to comments tab when clicked
   $('#comments h2.comments__title').bind('click',function(){
      var self = this;
      setTimeout(function() {
        theOffset = $(self).offset();
          $('body,html').animate({ scrollTop: theOffset.top - 100 });
      }, 310); // ensure the collapse animation is done
    });

   // Slider function
   $(window).scroll(function(){
        var distanceTop = $('#comments').offset().top - $(window).height();

        // Only perform slider if laptop width or above
        if( $(window).width() > 1023) {
   
          if  ($(window).scrollTop() > distanceTop)
              $('#slider').animate({'right':'0px'},300);
          else
              $('#slider').stop(true).animate({'right':'-430px'},100);

        }
    });
 
    // Close button
    $('#slider .close').bind('click',function(){
        $(this).parent().remove();
    });

  }
};


})(jQuery, Drupal, this, this.document);
