Drupal.TBMegaMenu = Drupal.TBMegaMenu || {};

(function ($) {
  Drupal.TBMegaMenu.menuInstance = false;
  Drupal.behaviors.tbMegaMenuAction = {
    attach: function(context) {
      var isTouch = 'ontouchstart' in window && !(/hp-tablet/gi).test(navigator.appVersion);
      if(!isTouch){
        $(document).ready(function($){
          var mm_duration = 0;
          if ($('.navbar-toggle').css("display") == "none" ) {
            //$('.nav-child-fixed-width').parent().css('position', 'static');
            var mm_timeout = mm_duration ? 100 + mm_duration : 500;
            $('.nav > li, li.mega').hover(function(event) {
              var $this = $(this);
              if ($this.hasClass ('mega')) {
                $this.addClass ('animating');
                clearTimeout ($this.data('animatingTimeout'));
                $this.data('animatingTimeout', setTimeout(function(){$this.removeClass ('animating')}, mm_timeout));
                clearTimeout ($this.data('hoverTimeout'));
                $this.data('hoverTimeout', setTimeout(function(){$this.addClass ('open')}, 100));
              } else {
                clearTimeout ($this.data('hoverTimeout'));
                $this.data('hoverTimeout',
                setTimeout(function(){$this.addClass ('open')}, 100));
              }
            },
            function(event) {
              var $this = $(this);
              if ($this.hasClass ('mega')) {
                $this.addClass ('animating');
                clearTimeout ($this.data('animatingTimeout'));
                $this.data('animatingTimeout',
                setTimeout(function(){$this.removeClass ('animating')}, mm_timeout));
                clearTimeout ($this.data('hoverTimeout'));
                $this.data('hoverTimeout', setTimeout(function(){$this.removeClass ('open')}, 100));
              } else {
                clearTimeout ($this.data('hoverTimeout'));
                $this.data('hoverTimeout',
                setTimeout(function(){$this.removeClass ('open')}, 100));
              }
            });
          }
        });
      }
    }
  }
})(jQuery);

