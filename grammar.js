module.exports = grammar({
  name: "embedded_php",

  extras: $ => [/\r?\n/],

  externals: $ => [
    $._eof,
  ],

  rules: {
    template: $ => repeat(choice(
      $.php,
      $.content
    )),

    php: $ => seq(
        // regex copied from tree-sitter-php
        /<\?([pP][hH][pP]|=)?/,
        repeat(/./),
        choice(
          // Specifying the end tag as a regex means that it will be  included
          // in the main `(php)` node. If we instead specified it as a string,
          // it would be added as an anonymous child node of `(php)`.
          /\?>/,
          $._eof
      )
    ),

    content: $ => prec.right(repeat1(/./)),
  },
})
