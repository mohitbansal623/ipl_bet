jQuery(document).ready(function(){
    // jQuery(".page-betting-form #betting-form div:first-child").not(".form-item").addClass("row");
    jQuery(".page-pay-online-payment-status header.navbar").addClass("navbar-fixed-top");

    jQuery(".page-prediction-form input.form-radio").click(function() {
      if (jQuery('.form-radio').hasClass('checked')){
        jQuery('.form-radio').removeClass('checked');
      } else {
        jQuery('.form-radio').addClass('checked');
        jQuery(".form-radio").prop("checked", false);
      }
    });
});
