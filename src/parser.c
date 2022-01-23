#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 20
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
  anon_sym_DQUOTE = 3,
  aux_sym_php_token3 = 4,
  anon_sym_SQUOTE = 5,
  aux_sym_php_token4 = 6,
  sym__eof = 7,
  sym_template = 8,
  sym_php = 9,
  sym_content = 10,
  aux_sym_template_repeat1 = 11,
  aux_sym_php_repeat1 = 12,
  aux_sym_php_repeat2 = 13,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_php_token1] = "php_token1",
  [aux_sym_php_token2] = "php_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_php_token3] = "php_token3",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_php_token4] = "php_token4",
  [sym__eof] = "_eof",
  [sym_template] = "template",
  [sym_php] = "php",
  [sym_content] = "content",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_php_repeat1] = "php_repeat1",
  [aux_sym_php_repeat2] = "php_repeat2",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_php_token1] = aux_sym_php_token1,
  [aux_sym_php_token2] = aux_sym_php_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_php_token3] = aux_sym_php_token3,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_php_token4] = aux_sym_php_token4,
  [sym__eof] = sym__eof,
  [sym_template] = sym_template,
  [sym_php] = sym_php,
  [sym_content] = sym_content,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_php_repeat1] = aux_sym_php_repeat1,
  [aux_sym_php_repeat2] = aux_sym_php_repeat2,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_php_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_php_token4] = {
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
  [aux_sym_php_repeat2] = {
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
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '?') ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == '?') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_php_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_php_token1);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_php_token2);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_php_token2);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(13);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_php_token2);
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_php_token3);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_php_token3);
      if (lookahead == '?') ADVANCE(12);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_php_token4);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 1, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 1},
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 1, .external_lex_state = 1},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_php_token4] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(19),
    [sym_php] = STATE(2),
    [sym_content] = STATE(2),
    [aux_sym_template_repeat1] = STATE(2),
    [aux_sym_php_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_php_token1] = ACTIONS(5),
    [aux_sym_php_token3] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      aux_sym_php_token1,
    ACTIONS(7), 1,
      aux_sym_php_token3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_php_repeat1,
    STATE(3), 3,
      sym_php,
      sym_content,
      aux_sym_template_repeat1,
  [18] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_php_token1,
    ACTIONS(16), 1,
      aux_sym_php_token3,
    STATE(9), 1,
      aux_sym_php_repeat1,
    STATE(3), 3,
      sym_php,
      sym_content,
      aux_sym_template_repeat1,
  [36] = 6,
    ACTIONS(19), 1,
      aux_sym_php_token2,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      aux_sym_php_token4,
    ACTIONS(27), 1,
      sym__eof,
    STATE(5), 1,
      aux_sym_php_repeat2,
  [55] = 6,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      aux_sym_php_token2,
    ACTIONS(31), 1,
      aux_sym_php_token4,
    ACTIONS(33), 1,
      sym__eof,
    STATE(6), 1,
      aux_sym_php_repeat2,
  [74] = 6,
    ACTIONS(35), 1,
      aux_sym_php_token2,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(44), 1,
      aux_sym_php_token4,
    ACTIONS(46), 1,
      sym__eof,
    STATE(6), 1,
      aux_sym_php_repeat2,
  [93] = 2,
    ACTIONS(46), 1,
      sym__eof,
    ACTIONS(44), 4,
      aux_sym_php_token2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_php_token4,
  [103] = 2,
    ACTIONS(50), 1,
      sym__eof,
    ACTIONS(48), 4,
      aux_sym_php_token2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_php_token4,
  [113] = 4,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      aux_sym_php_token1,
    ACTIONS(56), 1,
      aux_sym_php_token3,
    STATE(10), 1,
      aux_sym_php_repeat1,
  [126] = 4,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym_php_token1,
    ACTIONS(62), 1,
      aux_sym_php_token3,
    STATE(10), 1,
      aux_sym_php_repeat1,
  [139] = 2,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 2,
      aux_sym_php_token1,
      aux_sym_php_token3,
  [147] = 3,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      aux_sym_php_token3,
    STATE(14), 1,
      aux_sym_php_repeat1,
  [157] = 3,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_php_token3,
    STATE(15), 1,
      aux_sym_php_repeat1,
  [167] = 3,
    ACTIONS(75), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      aux_sym_php_token3,
    STATE(17), 1,
      aux_sym_php_repeat1,
  [177] = 3,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(79), 1,
      aux_sym_php_token3,
    STATE(18), 1,
      aux_sym_php_repeat1,
  [187] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 2,
      aux_sym_php_token1,
      aux_sym_php_token3,
  [195] = 3,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      aux_sym_php_token3,
    STATE(17), 1,
      aux_sym_php_repeat1,
  [205] = 3,
    ACTIONS(60), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      aux_sym_php_token3,
    STATE(18), 1,
      aux_sym_php_repeat1,
  [215] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 93,
  [SMALL_STATE(8)] = 103,
  [SMALL_STATE(9)] = 113,
  [SMALL_STATE(10)] = 126,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 167,
  [SMALL_STATE(15)] = 177,
  [SMALL_STATE(16)] = 187,
  [SMALL_STATE(17)] = 195,
  [SMALL_STATE(18)] = 205,
  [SMALL_STATE(19)] = 215,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(4),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_repeat2, 2), SHIFT_REPEAT(6),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_repeat2, 2), SHIFT_REPEAT(12),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_repeat2, 2), SHIFT_REPEAT(13),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_php_repeat2, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_php_repeat2, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_php_repeat2, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_php_repeat2, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_php_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_php_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_repeat1, 2), SHIFT_REPEAT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_php, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_php, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_php, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_php, 3),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_repeat1, 2), SHIFT_REPEAT(17),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_php_repeat1, 2), SHIFT_REPEAT(18),
  [91] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
