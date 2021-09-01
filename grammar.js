const HTML = require('tree-sitter-html/grammar');

module.exports = grammar(HTML, {
  name: "php_embedded",

  externals: $ => [
    $._end_of_file,
    ...HTML.externals,
  ],

  rules: {
    // add a PHP "node" to the list of existing HTML nodes
    _node: $ => choice(
      HTML.rules._node,
      $.php
    ),

    php: $ => seq(
        // regex copied from tree-sitter-php
        /<\?([pP][hH][pP]|=)?/,
        repeat(/./),
        choice(
          '?>',
          $._end_of_file
      )
    ),
  },
})
