;(function($){
    Drupal.behaviors.custom_materialize = {
<<<<<<< HEAD
    attach: function (context, settings) {
=======
    attach: function (context, settings) {	        
>>>>>>> core-update

        $('.button').addClass('waves-light btn waves-effect');
        $('.webform-submit').addClass('waves-light btn waves-effect button');
        $('.tabs.primary a').addClass('waves-light waves-effect');
        $('.contextual-links-wrapper .contextual-links a').addClass('waves-light waves-effect');
        $('.field--name-field-tags a').addClass('waves-light waves-effect');
        $('.field-name-field-tags a').addClass('waves-light waves-effect');
        $('.node-readmore').addClass('waves-dark waves-effect btn');
        $('.more-link').addClass('waves-dark waves-effect btn');
<<<<<<< HEAD

        $('.parallax').parallax();

=======
        
        $('.parallax').parallax();
        
>>>>>>> core-update
        $(document).ready(function(){
        	$('a[href^="#"]').on('click',function (e) {
        	    e.preventDefault();

        	    var target = this.hash;
        	    var $target = $(target);

              $('html, body').stop().animate({
<<<<<<< HEAD
                   'scrollTop': $target.offset().top - $('.top-wrapper.wo-navigation').height()
              }, 900, 'swing');
        	});
        });

        //body on scroll
=======
                   'scrollTop': $target.offset().top
              }, 900, 'swing');
        	});
        });
        
        //body on scroll 
>>>>>>> core-update
        $(document).on("scroll", function(){
            if($(document).scrollTop() > 100){
              $(".page-inner").addClass("shrink"),
              $("header").addClass("shrink"),
              $("#content-area-wrapper").addClass("shrink"),
              $("#main-navigation-wrapper").addClass("shrink");
            }
            else
<<<<<<< HEAD
            {
=======
            {                
>>>>>>> core-update
              $(".page-inner").removeClass("shrink"),
              $("header").removeClass("shrink"),
              $("#content-area-wrappr").removeClass("shrink"),
              $("#main-navigation-wrapper").removeClass("shrink");
            };

        });
<<<<<<< HEAD

=======
    
>>>>>>> core-update
        $(document).on("scroll", function(){
            if($(document).scrollTop() > 500){
             $("#back-to-top-wrapper").addClass("show");
            }
            else
            {
              $("#back-to-top-wrapper").removeClass("show");
            };
        });
<<<<<<< HEAD




    }
=======
        

        
        
    }    
>>>>>>> core-update
 };

})(jQuery);

