tree-sitter-embedded-php
===========================

A [tree-sitter](https://github.com/tree-sitter/tree-sitter) parser for PHP embedded in HTML. Closely modelled on [tree-sitter-embedded-template](https://github.com/tree-sitter/tree-sitter-embedded-template), this grammar simply parses HTML documents into nodes of `php` and `content` (ie HTML), and you will still need to use [tree-sitter-php](https://github.com/tree-sitter/tree-sitter-php) to parse the actual PHP code. This is primarily intended for use in Atom's `language-php` package. Other projects may find the core tree-sitter-php parser sufficient.
