Drupal.TBMegaMenu = Drupal.TBMegaMenu || {};

(function ($) {
  Drupal.behaviors.tbMegaMenuBackendAction = {
    attach: function(context) {
      Drupal.extend_tb = Drupal.extend_tb || {
        sendBackwards: function() {
          var item = $(this).parent().parent();
          var prev = item.prev();
          if (prev.length > 0) {
            item.insertBefore(prev);
          }
        },
        sendForward: function() {
          var item = $(this).parent().parent();
          var next = item.next();
          if (next.length > 0) {
            item.insertAfter(next);
          }
        }
      }
      $('select[name="tb-megamenu-animation"]').change(function() {
        $('#tb-megamenu-duration-wrapper').css({'display': ($(this).val() == 'none' ? 'none' : 'inline-block')});
        $('#tb-megamenu-delay-wrapper').css({'display': ($(this).val() == 'none' ? 'none' : 'inline-block')});
      });
      $(".tb-megamenu-column-inner .close").click(function() {
        $(this).parent().html("");
      });
      $("#tb-megamenu-admin select").chosen({
        disable_search_threshold : 15,
        allow_single_deselect: true
      });
    }
  }
  /**
   * Attach extendTBMegaMenuControls behavior.
   *
   * Modifies the tb_megamenu admin screen to adds "move row up/down" buttons to
   * rows and "move column left/right" buttons to columns.
   */
  Drupal.behaviors.extendTBMegaMenuControls = {
    attach: function(context, settings) {
      $('.tb-megamenu-admin', context).once('extendTBMegaMenuControls', function() {
        var buttonStyles = {
          border: "1px solid #CCC",
          margin: "5px",
          display: "inline-block",
          borderRadius: "5px",
          background: "#EEE",
          padding: "3px 5px",
          cursor: "pointer"
        }
        $('.tb-megamenu-row', this).not('.tb-megamenu-row .tb-megamenu-row').each(function() {
          var buttons = $('<div class="row-buttons" />')
            .appendTo(this);
          $('<span class="up-button"><i class="fa fa-arrow-up"/></span> ')
            .appendTo(buttons)
            .click(Drupal.extend_tb.sendBackwards);
          $('<span class="down-button"><i class="fa fa-arrow-down"/></span>')
            .appendTo(buttons)
            .click(Drupal.extend_tb.sendForward);
        });
        $('.tb-megamenu-column', this).not('.tb-megamenu-column .tb-megamenu-column').each(function() {
          var buttons = $('<div class="column-buttons" />')
            .appendTo(this);
          $('<span class="left-button"><i class="fa fa-arrow-left"/></span> ')
            .appendTo(buttons)
            .click(Drupal.extend_tb.sendBackwards);
          $('<span class="right-button"><i class="fa fa-arrow-right"/></span>')
            .appendTo(buttons)
            .click(Drupal.extend_tb.sendForward);
        });
        $('.row-buttons span, .column-buttons span').css(buttonStyles);
      });
    }
  };
})(jQuery);

