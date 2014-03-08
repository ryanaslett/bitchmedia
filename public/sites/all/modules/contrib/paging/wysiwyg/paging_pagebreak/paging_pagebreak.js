Drupal.wysiwyg.plugins.paging_pagebreak = {

  /**
   * Return whether the passed node belongs to this plugin.
   */
  isNode: function(node) {
    return ($(node).is('hr.paging-pagebreak'));
  },

  /**
   * Execute the button.
   */
  invoke: function(data, settings, instanceId) {
    if (data.format == 'html') {
      // Prevent duplicating a pagebreak.
      if ($(data.node).is('hr.paging-pagebreak')) {
        return;
      }
      var content = this._getPlaceholder(settings);
    }
    else {
      var content = '<!--pagebreak-->';
    }
    if (typeof content != 'undefined') {
      Drupal.wysiwyg.instances[instanceId].insert(content);
    }
  },

  /**
   * Replace all <!--pagebreak--> tags with images.
   */
  attach: function(content, settings, instanceId) {
    content = content.replace(/<!--pagebreak-->/g, this._getPlaceholder(settings));
    return content;
  },

  /**
   * Replace images with <!--pagebreak--> tags in content upon detaching editor.
   */
  detach: function(content, settings, instanceId) {
    var $content = $('<div>' + content + '</div>'); // No .outerHTML() in jQuery :(
    // #404532: document.createComment() required or IE will strip the comment.
    // #474908: IE 8 breaks when using jQuery methods to replace the elements.
    // @todo Add a generic implementation for all Drupal plugins for this.
    $.each($('hr.paging-pagebreak', $content), function (i, elem) {
      elem.parentNode.insertBefore(document.createComment('pagebreak'), elem);
      elem.parentNode.removeChild(elem);
    });
    return $content.html();
  },

  /**
   * Helper function to return a HTML placeholder.
   */
  _getPlaceholder: function (settings) {
    return '<hr title="&lt;--pagebreak--&gt;" class="paging-pagebreak" />';
  }
};
