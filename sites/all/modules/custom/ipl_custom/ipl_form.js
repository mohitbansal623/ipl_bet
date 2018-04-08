// Js for payu page
(function ($) {

  Drupal.behaviors.ipl_form = {
    attach: function (context, settings) {
      $(window).load(function(){
        $('#payment-form .redirect_to_submission').click();
      });
    }
  }
})(jQuery);
