// Js for payu page
(function ($) {

  Drupal.behaviors.ipl_form = {
    attach: function (context, settings) {
      $(window).load(function(){
        $('#max-payu-paid-amount button.redirect_to_submission').click();
      });
    }
  }
})(jQuery);
