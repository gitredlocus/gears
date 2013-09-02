/**
 * @name		jQuery touchTouch plugin
 * @author		Martin Angelov
 * @version 	1.0
 * @url			http://tutorialzine.com/2012/04/mobile-touch-gallery/
 * @license		MIT License
 */
(function(){var e=$('<div id="galleryOverlay">'),t=$('<div id="gallerySlider">'),n=$('<a id="prevArrow"><i class="icon-angle-left icon-4x"></i></a>'),r=$('<a id="nextArrow"><i class="icon-angle-right icon-4x"></i></a>'),i=!1;$.fn.touchTouch=function(){function a(t){if(i)return!1;e.show(),setTimeout(function(){e.addClass("visible")},100),l(t),i=!0}function f(){if(!i)return!1;e.hide().removeClass("visible"),i=!1}function l(e){t.css("left",-e*100+"%")}function c(e){setTimeout(function(){h(e)},1e3)}function h(e){if(e<0||e>=u.length)return!1;p(u.eq(e).attr("href"),function(){s.eq(e).html(this)})}function p(e,t){var n=$("<img>").on("load",function(){t.call(n)});n.attr("src",e)}function d(){o+1<u.length?(o++,l(o),c(o+1)):(t.addClass("rightSpring"),setTimeout(function(){t.removeClass("rightSpring")},500))}function v(){o>0?(o--,l(o),c(o-1)):(t.addClass("leftSpring"),setTimeout(function(){t.removeClass("leftSpring")},500))}var s=$([]),o=0,u=this;e.hide().appendTo("body"),t.appendTo(e),u.each(function(){s=s.add($('<div class="placeholder">'))}),t.append(s).on("click",function(e){$(e.target).is("img")||f()}),$("body").on("touchstart","#gallerySlider img",function(e){var n=e.originalEvent,r=n.changedTouches[0].pageX;return t.on("touchmove",function(e){e.preventDefault(),n=e.originalEvent.touches[0]||e.originalEvent.changedTouches[0],n.pageX-r>10?(t.off("touchmove"),v()):n.pageX-r<-10&&(t.off("touchmove"),d())}),!1}).on("touchend",function(){t.off("touchmove")}),u.on("click",function(e){e.preventDefault(),o=u.index(this),a(o),h(o),c(o+1),c(o-1)}),"ontouchstart"in window||(e.append(n).append(r),n.click(function(e){e.preventDefault(),v()}),r.click(function(e){e.preventDefault(),d()})),$(window).bind("keydown",function(e){e.keyCode==37?v():e.keyCode==39&&d()})}})(jQuery);