module.exports = grammar({
  name: "embedded_php",

  extras: ($) => [/\r?\n/],

  externals: ($) => [$._eof],

  rules: {
    template: ($) => repeat(choice($.php, $.content)),

    php: ($) =>
      seq(
        // regex copied from tree-sitter-php
        /<\?([pP][hH][pP]|=)?/,

        repeat(
          choice(
            // swallow anything w/i php tags
            /./,

            // swallow anything w/i strings
            // This prevents end tag w/i a string (eg `echo "?>"`) from
            // prematurely ending the php node
            // FIXME this will match unbalanced quotes, eg: "my string'
            // FIXME this does not handle heredoc or nowdoc
            /['"].*['"]/,

            // swallow anything w/i comments
            // This prevents end tags and string chars from affecting parsing
            /(\/\/|#).*\n/,
            /\/\*(.|\r?\n)*\*\//
          )
        ),

        choice(
          // Specifying the end tag as a regex means that it will be included
          // in the main `(php)` node. If we instead specified it as a string,
          // it would be added as an anonymous child node of `(php)`.
          /\?>/,
          $._eof
        )
      ),

    content: ($) => prec.right(repeat1(/./)),
  },
});
