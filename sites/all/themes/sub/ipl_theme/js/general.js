jQuery(document).ready(function(){
    // jQuery(".page-betting-form #betting-form div:first-child").not(".form-item").addClass("row");
    jQuery(".page-pay-online-payment-status header.navbar").addClass("navbar-fixed-top");

    jQuery(".page-prediction-form input.form-radio").click(function() {
      if (jQuery(this).hasClass('checked')){
        jQuery(this).removeClass('checked');
      } else {
        jQuery(this).addClass('checked');
        jQuery(this).prop("checked", false);
      }
    });
});
