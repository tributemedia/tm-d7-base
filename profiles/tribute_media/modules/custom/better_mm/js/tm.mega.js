;(function($){
  
$(document).ready(function() {

  $('.button-collapse').sideNav({
    menuWidth: 300, // Default is 240
    closeOnClick: true
  });
  
  $(".hide-on-med-and-down .plus-button").click(function(){
    var height = $(this).closest("ul").height();
    $(this).closest("ul").css("min-height", height);
    
    if ($(this).hasClass("opened")) {
      $(this).next("ul").slideToggle("slow");
      $(this).removeClass("opened");
    } else {
      $(".opened").next("ul").slideToggle("slow");
      $(".hide-on-med-and-down .plus-button").removeClass("opened");
      $(this).addClass("opened");
      $(this).next("ul").slideToggle("slow");
    }
  });
  
  $("#nav-mobile .plus-button").click(function(){
    $(this).next("ul").slideToggle("slow");
    $(this).toggleClass("opened");
  });

});

})(jQuery);
