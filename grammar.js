module.exports = grammar({
  name: "php_embedded",

  externals: $ => [
    $._eof,
  ],

  conflicts: $ => [
      [$.html]
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.php,
      $.html
    )),

    php: $ => seq(
        /<\?([pP][hH][pP]|=)?/,
        repeat(/./),
        choice(
          '?>',
          $._eof
      )
    ),

    // this is taken from the `text` rule in tree-sitter-php
    html: $ => repeat1(choice(
      token(prec(-1, /</)),
      /[^\s<][^<]*/
    )),
  },
})
