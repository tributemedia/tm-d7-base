(function($){

console.log('1. tm_jquery is loaded');
	
$(document).ready(function() {
console.log('2. document is ready');
console.log(window.innerWidth);

/***
if (window.innerWidth < 992) {

$("div#site-info").css('width','100%');

}//end if screen
***/

});//end doc.ready	

	//************** NOT needed ******************//
    //Drupal.behaviors.custom_site = {
    //	attach: function (context, settings) {
			//var $ = jQuery.noConflict();
			//console.log('tm_jquery is loaded');
    //	}    
 	//};
	//*********** end NOT needed ****************//

	//***** TM jQuery overrides *****//
	//var $ = jQuery.noConflict();

console.log('3. tm_jquery el fin');	

})(jQuery);
