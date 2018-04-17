
jQuery(document).ready(function(){
<<<<<<< HEAD
//    jQuery(".page-betting-form #betting-form div:first-child").not(".form-item").addClass("row");
   jQuery(".page-pay-online-payment-status header.navbar").addClass("navbar-fixed-top");
=======
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

    if (jQuery('body.front .view-advertisements.view-display-id-block .view-content').length) {
			jQuery('body.front .view-advertisements.view-display-id-block .view-content').slick({
				infinite: true,
				slidesToShow: 1,
				arrows: true,
        // dots: true,
				slidesToScroll: 1
			});
		}
>>>>>>> 08952c657d9c88478abe77d6745571d66eb0523d
});
