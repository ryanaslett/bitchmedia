(function ($) {
  Drupal.behaviors.pullquote = {
    attach: function(context) {
      var newCss = document.createElement('link');
      newCss.rel = 'stylesheet';
      newCss.id = 'pullquote-sheet';
      newCss.type = 'text/css';
      newCss.href = Drupal.settings.pullquoteCurrent;
      document.head.appendChild(newCss);
      $('#edit-pullquote-css-selection').change(function() {
        $('link#pullquote-sheet').attr("href", '/sites/all/modules/pullquote/css/' + $(this).val());
      });
      $('#edit-pullquote-css-source-selection').click(function() {
        var selection = $('#edit-pullquote-css-selection').val();
        $('link#pullquote-sheet').attr("href", '/sites/all/modules/pullquote/css/' + selection); 
      });
    }
  };
})(jQuery);

