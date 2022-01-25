#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  aux_sym_php_token1 = 1,
  aux_sym_php_token2 = 2,
  aux_sym_php_token3 = 3,
  aux_sym_php_token4 = 4,
  aux_sym_php_token5 = 5,
  aux_sym_php_token6 = 6,
  sym__eof = 7,
  sym_template = 8,
  sym_php = 9,
  sym_content = 10,
  aux_sym_template_repeat1 = 11,
  aux_sym_php_repeat1 = 12,
  aux_sym_content_repeat1 = 13,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_php_token1] = "php_token1",
  [aux_sym_php_token2] = "php_token2",
  [aux_sym_php_token3] = "php_token3",
  [aux_sym_php_token4] = "php_token4",
  [aux_sym_php_token5] = "php_token5",
  [aux_sym_php_token6] = "php_token6",
  [sym__eof] = "_eof",
  [sym_template] = "template",
  [sym_php] = "php",
  [sym_content] = "content",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_php_repeat1] = "php_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_php_token1] = aux_sym_php_token1,
  [aux_sym_php_token2] = aux_sym_php_token2,
  [aux_sym_php_token3] = aux_sym_php_token3,
  [aux_sym_php_token4] = aux_sym_php_token4,
  [aux_sym_php_token5] = aux_sym_php_token5,
  [aux_sym_php_token6] = aux_sym_php_token6,
  [sym__eof] = sym__eof,
  [sym_template] = sym_template,
  [sym_php] = sym_php,
  [sym_content] = sym_content,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_php_repeat1] = aux_sym_php_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_php_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_php_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_php_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_php_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_php_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_php_token6] = {
    .visible = false,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_php] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_php_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(17);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(17);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_php_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_php_token1);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_php_token2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_php_token2);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_php_token2);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_php_token2);
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_php_token2);
      if (lookahead == '?') ADVANCE(11);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_php_token2);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_php_token3);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_php_token4);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_php_token5);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_php_token6);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 2, .external_lex_state = 1},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 2, .external_lex_state = 1},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 2, .external_lex_state = 1},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 0},
};

enum {
  ts_external_token__eof = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_php_token1] = ACTIONS(1),
    [aux_sym_php_token2] = ACTIONS(1),
    [aux_sym_php_token3] = ACTIONS(1),
    [aux_sym_php_token4] = ACTIONS(1),
    [aux_sym_php_token5] = ACTIONS(1),
    [aux_sym_php_token6] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(11),
    [sym_php] = STATE(3),
    [sym_content] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_content_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_php_token1] = ACTIONS(5),
    [aux_sym_php_token2] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 1,
      aux_sym_php_token6,
    ACTIONS(13), 1,
      sym__eof,
    STATE(4), 1,
      aux_sym_php_repeat1,
    ACTIONS(9), 4,
      aux_sym_php_token2,
      aux_sym_php_token3,
      aux_sym_php_token4,
      aux_sym_php_token5,
  [16] = 5,
    ACTIONS(5), 1,
      aux_sym_php_token1,
    ACTIONS(7), 1,
      aux_sym_php_token2,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_content_repeat1,
    STATE(5), 3,
      sym_php,
      sym_content,
      aux_sym_template_repeat1,
  [34] = 4,
    ACTIONS(19), 1,
      aux_sym_php_token6,
    ACTIONS(21), 1,
      sym__eof,
    STATE(6), 1,
      aux_sym_php_repeat1,
    ACTIONS(17), 4,
      aux_sym_php_token2,
      aux_sym_php_token3,
      aux_sym_php_token4,
      aux_sym_php_token5,
  [50] = 5,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym_php_token1,
    ACTIONS(28), 1,
      aux_sym_php_token2,
    STATE(7), 1,
      aux_sym_content_repeat1,
    STATE(5), 3,
      sym_php,
      sym_content,
      aux_sym_template_repeat1,
  [68] = 4,
    ACTIONS(34), 1,
      aux_sym_php_token6,
    ACTIONS(36), 1,
      sym__eof,
    STATE(6), 1,
      aux_sym_php_repeat1,
    ACTIONS(31), 4,
      aux_sym_php_token2,
      aux_sym_php_token3,
      aux_sym_php_token4,
      aux_sym_php_token5,
  [84] = 4,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      aux_sym_php_token1,
    ACTIONS(42), 1,
      aux_sym_php_token2,
    STATE(8), 1,
      aux_sym_content_repeat1,
  [97] = 4,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      aux_sym_php_token1,
    ACTIONS(48), 1,
      aux_sym_php_token2,
    STATE(8), 1,
      aux_sym_content_repeat1,
  [110] = 2,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 2,
      aux_sym_php_token1,
      aux_sym_php_token2,
  [118] = 2,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 2,
      aux_sym_php_token1,
      aux_sym_php_token2,
  [126] = 1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 97,
  [SMALL_STATE(9)] = 110,
  [SMALL_STATE(10)] = 118,
  [SMALL_STATE(11)] = 126,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(7),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_repeat1, 2), SHIFT_REPEAT(6),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_php_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_php_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2), SHIFT_REPEAT(8),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_php, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_php, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_php, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_php, 3),
  [59] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_embedded_php_external_scanner_create(void);
void tree_sitter_embedded_php_external_scanner_destroy(void *);
bool tree_sitter_embedded_php_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_embedded_php_external_scanner_serialize(void *, char *);
void tree_sitter_embedded_php_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_embedded_php(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_embedded_php_external_scanner_create,
      tree_sitter_embedded_php_external_scanner_destroy,
      tree_sitter_embedded_php_external_scanner_scan,
      tree_sitter_embedded_php_external_scanner_serialize,
      tree_sitter_embedded_php_external_scanner_deserialize,
    },
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
