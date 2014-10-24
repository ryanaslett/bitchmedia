Drupal.ucExpress = Drupal.ucExpress || {};


var uc_express = function(context) {
	  jQuery('.uc-express-product',context).ucExpressAttach();
	 };
Drupal.behaviors = $.extend({uc_express: uc_express}, Drupal.behaviors);

//Drupal.behaviors.ucExpress = function(context) {
//	// Submit the form
//	$('.uc-express-product').not('.uc-express-processed').ucExpressInitialCartAdd().addClass('uc-express-processed');
//}


function ucExpressCartAdd(element) {
  var form = $(element).parents('form');
  form.ajaxSubmit({
    url: 'uc_express/add',
    dataType: 'json',
    success: function(data) {
      // Replace HTML elements with new values.

    	if (data.errors){
    	  // console.log(data.errors);
    	   $('#cart-pane').html(data.errors);
    	} else {
    	  $('#edit-cart-contents').val(data.cart_contents);
   	      $('#cart-pane').html(data.cart_review);
   	      set_line_item('subtotal', 'Subtotal', data.subtotal, -10);
    	}


    }
  });
}


jQuery.fn.ucExpressAttach = function(context) {
  $(this).find('select[name^=attributes], input:text[name^=attributes], input:text[name^=varprice], input:text[name^=qty]').not('.uc-express-processed').change(function() {
	  ucExpressCartAdd(this);
  }).addClass('uc-express-processed');

  $(this).find('input:radio[name^=attributes], input:radio[name^=varprice]:not([value^=other]), input:checkbox[name^=attributes]').not('.uc-express-processed').click(function() {
	  ucExpressCartAdd(this);
  }).addClass('uc-express-processed');


};
