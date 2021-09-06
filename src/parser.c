#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  aux_sym_php_token1 = 1,
  aux_sym_php_token2 = 2,
  anon_sym_QMARK_GT = 3,
  sym__eof = 4,
  sym_template = 5,
  sym_php = 6,
  sym_content = 7,
  aux_sym_template_repeat1 = 8,
  aux_sym_php_repeat1 = 9,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_php_token1] = "php_token1",
  [aux_sym_php_token2] = "php_token2",
  [anon_sym_QMARK_GT] = "\?>",
  [sym__eof] = "_eof",
  [sym_template] = "template",
  [sym_php] = "php",
  [sym_content] = "content",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_php_repeat1] = "php_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_php_token1] = aux_sym_php_token1,
  [aux_sym_php_token2] = aux_sym_php_token2,
  [anon_sym_QMARK_GT] = anon_sym_QMARK_GT,
  [sym__eof] = sym__eof,
  [sym_template] = sym_template,
  [sym_php] = sym_php,
  [sym_content] = sym_content,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_php_repeat1] = aux_sym_php_repeat1,
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
  [anon_sym_QMARK_GT] = {
    .visible = true,
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
      if (eof) ADVANCE(6);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '?') ADVANCE(10);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_php_token1);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_php_token1);
      if (lookahead == '=') ADVANCE(7);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_php_token2);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_php_token2);
      if (lookahead == '>') ADVANCE(12);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_php_token2);
      if (lookahead == '?') ADVANCE(8);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_QMARK_GT);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 1, .external_lex_state = 1},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 1, .external_lex_state = 1},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
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
    [anon_sym_QMARK_GT] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(10),
    [sym_php] = STATE(2),
    [sym_content] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_php_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_php_token1] = ACTIONS(5),
    [aux_sym_php_token2] = ACTIONS(7),
  },
  [2] = {
    [sym_php] = STATE(3),
    [sym_content] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_php_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_php_token1] = ACTIONS(5),
    [aux_sym_php_token2] = ACTIONS(7),
  },
  [3] = {
    [sym_php] = STATE(3),
    [sym_content] = STATE(3),
    [aux_sym_template_repeat1] = STATE(3),
    [aux_sym_php_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_php_token1] = ACTIONS(13),
    [aux_sym_php_token2] = ACTIONS(16),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_php_token1,
    ACTIONS(23), 1,
      aux_sym_php_token2,
    STATE(6), 1,
      aux_sym_php_repeat1,
  [13] = 4,
    ACTIONS(25), 1,
      aux_sym_php_token2,
    ACTIONS(27), 1,
      anon_sym_QMARK_GT,
    ACTIONS(29), 1,
      sym__eof,
    STATE(7), 1,
      aux_sym_php_repeat1,
  [26] = 4,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_php_token1,
    ACTIONS(35), 1,
      aux_sym_php_token2,
    STATE(6), 1,
      aux_sym_php_repeat1,
  [39] = 4,
    ACTIONS(31), 1,
      sym__eof,
    ACTIONS(33), 1,
      anon_sym_QMARK_GT,
    ACTIONS(38), 1,
      aux_sym_php_token2,
    STATE(7), 1,
      aux_sym_php_repeat1,
  [52] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 2,
      aux_sym_php_token1,
      aux_sym_php_token2,
  [60] = 2,
    ACTIONS(45), 1,
      aux_sym_php_token2,
    STATE(5), 1,
      aux_sym_php_repeat1,
  [67] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 39,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 67,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(9),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_php_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_php_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_repeat1, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_php, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_php, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
