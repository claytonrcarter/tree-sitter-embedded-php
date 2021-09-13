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
          '?>',
          $._eof
      )
    ),

    content: $ => prec.right(repeat1(/./)),
  },
})
