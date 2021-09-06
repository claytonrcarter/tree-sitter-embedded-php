#include <tree_sitter/parser.h>
#include <cwctype>

namespace {

enum TokenType {
  EOF,
};

struct Scanner {
  Scanner() {}
  unsigned serialize(char *buffer) { return 0; }
  void deserialize(const char *buffer, unsigned length) {}

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    while (iswspace(lexer->lookahead)) {
      lexer->advance(lexer, true);
    }

    if (valid_symbols[EOF] && lexer->eof(lexer)) {
      lexer->result_symbol = EOF;
      return true;
    }

    return false;
  }
};

}

extern "C" {

void *tree_sitter_embedded_php_external_scanner_create() {
  return new Scanner();
}

bool tree_sitter_embedded_php_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_embedded_php_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_embedded_php_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_embedded_php_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

}
