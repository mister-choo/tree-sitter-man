#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 3
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym_manual_token1 = 1,
  aux_sym_manual_token2 = 2,
  aux_sym_subsection_heading_token1 = 3,
  aux_sym__text_token1 = 4,
  aux_sym__text_token2 = 5,
  aux_sym__text_token3 = 6,
  aux_sym__line_10_token1 = 7,
  aux_sym__line_token1 = 8,
  sym_reference = 9,
  aux_sym_option_long_line_token1 = 10,
  anon_sym_COMMA = 11,
  aux_sym_option_list_token1 = 12,
  sym_short_option = 13,
  sym_short_option_value = 14,
  sym_short_option_value_pair = 15,
  aux_sym_long_option_simple_token1 = 16,
  aux_sym_long_option_token1 = 17,
  aux_sym_long_option_token2 = 18,
  aux_sym_long_option_token3 = 19,
  aux_sym_long_option_token4 = 20,
  aux_sym_long_option_token5 = 21,
  aux_sym_value_option_bracket_token1 = 22,
  anon_sym_LT = 23,
  aux_sym_bracket_token1 = 24,
  anon_sym_GT = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  sym_manual = 30,
  sym_footer = 31,
  sym_section = 32,
  sym_subsection_heading = 33,
  sym_body = 34,
  sym__block = 35,
  sym__text = 36,
  sym__line_10 = 37,
  sym__line = 38,
  sym_option_section = 39,
  sym_option_line = 40,
  sym_option_long_line = 41,
  sym_long_option_long_line = 42,
  sym_long_line_description = 43,
  sym_option_list = 44,
  sym_long_option_simple = 45,
  sym_long_option = 46,
  sym_value_option_bracket = 47,
  sym_bracket = 48,
  sym_option_description = 49,
  aux_sym_manual_repeat1 = 50,
  aux_sym_section_repeat1 = 51,
  aux_sym_subsection_heading_repeat1 = 52,
  aux_sym_body_repeat1 = 53,
  aux_sym__block_repeat1 = 54,
  aux_sym__text_repeat1 = 55,
  aux_sym_option_list_repeat1 = 56,
  aux_sym_value_option_bracket_repeat1 = 57,
  aux_sym_option_description_repeat1 = 58,
  alias_sym_section_title = 59,
  alias_sym_subsection_title = 60,
  alias_sym_title = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_manual_token1] = "manual_token1",
  [aux_sym_manual_token2] = "manual_token2",
  [aux_sym_subsection_heading_token1] = "subsection_heading_token1",
  [aux_sym__text_token1] = "_text_token1",
  [aux_sym__text_token2] = "_text_token2",
  [aux_sym__text_token3] = "_text_token3",
  [aux_sym__line_10_token1] = "_line_10_token1",
  [aux_sym__line_token1] = "_line_token1",
  [sym_reference] = "reference",
  [aux_sym_option_long_line_token1] = "option_long_line_token1",
  [anon_sym_COMMA] = ",",
  [aux_sym_option_list_token1] = "option_list_token1",
  [sym_short_option] = "short_option",
  [sym_short_option_value] = "short_option_value",
  [sym_short_option_value_pair] = "short_option_value_pair",
  [aux_sym_long_option_simple_token1] = "long_option_simple_token1",
  [aux_sym_long_option_token1] = "long_option_token1",
  [aux_sym_long_option_token2] = "long_option_token2",
  [aux_sym_long_option_token3] = "long_option_token3",
  [aux_sym_long_option_token4] = "long_option_token4",
  [aux_sym_long_option_token5] = "long_option_token5",
  [aux_sym_value_option_bracket_token1] = "value_option_bracket_token1",
  [anon_sym_LT] = "<",
  [aux_sym_bracket_token1] = "bracket_token1",
  [anon_sym_GT] = ">",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_manual] = "manual",
  [sym_footer] = "footer",
  [sym_section] = "section",
  [sym_subsection_heading] = "subsection_heading",
  [sym_body] = "body",
  [sym__block] = "_block",
  [sym__text] = "_text",
  [sym__line_10] = "_line_10",
  [sym__line] = "_line",
  [sym_option_section] = "option_section",
  [sym_option_line] = "option_line",
  [sym_option_long_line] = "option_long_line",
  [sym_long_option_long_line] = "long_option_long_line",
  [sym_long_line_description] = "long_line_description",
  [sym_option_list] = "option_list",
  [sym_long_option_simple] = "long_option_simple",
  [sym_long_option] = "long_option",
  [sym_value_option_bracket] = "value_option_bracket",
  [sym_bracket] = "bracket",
  [sym_option_description] = "option_description",
  [aux_sym_manual_repeat1] = "manual_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_subsection_heading_repeat1] = "subsection_heading_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym__text_repeat1] = "_text_repeat1",
  [aux_sym_option_list_repeat1] = "option_list_repeat1",
  [aux_sym_value_option_bracket_repeat1] = "value_option_bracket_repeat1",
  [aux_sym_option_description_repeat1] = "option_description_repeat1",
  [alias_sym_section_title] = "section_title",
  [alias_sym_subsection_title] = "subsection_title",
  [alias_sym_title] = "title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_manual_token1] = aux_sym_manual_token1,
  [aux_sym_manual_token2] = aux_sym_manual_token2,
  [aux_sym_subsection_heading_token1] = aux_sym_subsection_heading_token1,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [aux_sym__text_token2] = aux_sym__text_token2,
  [aux_sym__text_token3] = aux_sym__text_token3,
  [aux_sym__line_10_token1] = aux_sym__line_10_token1,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [sym_reference] = sym_reference,
  [aux_sym_option_long_line_token1] = aux_sym_option_long_line_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_option_list_token1] = aux_sym_option_list_token1,
  [sym_short_option] = sym_short_option,
  [sym_short_option_value] = sym_short_option_value,
  [sym_short_option_value_pair] = sym_short_option_value_pair,
  [aux_sym_long_option_simple_token1] = aux_sym_long_option_simple_token1,
  [aux_sym_long_option_token1] = aux_sym_long_option_token1,
  [aux_sym_long_option_token2] = aux_sym_long_option_token2,
  [aux_sym_long_option_token3] = aux_sym_long_option_token3,
  [aux_sym_long_option_token4] = aux_sym_long_option_token4,
  [aux_sym_long_option_token5] = aux_sym_long_option_token5,
  [aux_sym_value_option_bracket_token1] = aux_sym_value_option_bracket_token1,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_bracket_token1] = aux_sym_bracket_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_manual] = sym_manual,
  [sym_footer] = sym_footer,
  [sym_section] = sym_section,
  [sym_subsection_heading] = sym_subsection_heading,
  [sym_body] = sym_body,
  [sym__block] = sym__block,
  [sym__text] = sym__text,
  [sym__line_10] = sym__line_10,
  [sym__line] = sym__line,
  [sym_option_section] = sym_option_section,
  [sym_option_line] = sym_option_line,
  [sym_option_long_line] = sym_option_long_line,
  [sym_long_option_long_line] = sym_long_option_long_line,
  [sym_long_line_description] = sym_long_line_description,
  [sym_option_list] = sym_option_list,
  [sym_long_option_simple] = sym_long_option_simple,
  [sym_long_option] = sym_long_option,
  [sym_value_option_bracket] = sym_value_option_bracket,
  [sym_bracket] = sym_bracket,
  [sym_option_description] = sym_option_description,
  [aux_sym_manual_repeat1] = aux_sym_manual_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_subsection_heading_repeat1] = aux_sym_subsection_heading_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
  [aux_sym__text_repeat1] = aux_sym__text_repeat1,
  [aux_sym_option_list_repeat1] = aux_sym_option_list_repeat1,
  [aux_sym_value_option_bracket_repeat1] = aux_sym_value_option_bracket_repeat1,
  [aux_sym_option_description_repeat1] = aux_sym_option_description_repeat1,
  [alias_sym_section_title] = alias_sym_section_title,
  [alias_sym_subsection_title] = alias_sym_subsection_title,
  [alias_sym_title] = alias_sym_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_manual_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_manual_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subsection_heading_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_10_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_option_long_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_option_list_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_short_option] = {
    .visible = true,
    .named = true,
  },
  [sym_short_option_value] = {
    .visible = true,
    .named = true,
  },
  [sym_short_option_value_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_long_option_simple_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_long_option_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_long_option_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_long_option_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_long_option_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_long_option_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_option_bracket_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bracket_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_manual] = {
    .visible = true,
    .named = true,
  },
  [sym_footer] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_subsection_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__line_10] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_option_section] = {
    .visible = true,
    .named = true,
  },
  [sym_option_line] = {
    .visible = true,
    .named = true,
  },
  [sym_option_long_line] = {
    .visible = true,
    .named = true,
  },
  [sym_long_option_long_line] = {
    .visible = true,
    .named = true,
  },
  [sym_long_line_description] = {
    .visible = true,
    .named = true,
  },
  [sym_option_list] = {
    .visible = true,
    .named = true,
  },
  [sym_long_option_simple] = {
    .visible = true,
    .named = true,
  },
  [sym_long_option] = {
    .visible = true,
    .named = true,
  },
  [sym_value_option_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_option_description] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_manual_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subsection_heading_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_option_bracket_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_section_title] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_subsection_title] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_title] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_title,
  },
  [2] = {
    [0] = alias_sym_section_title,
  },
  [3] = {
    [1] = alias_sym_subsection_title,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '\n', 41,
        '\r', 1,
        ' ', 90,
        '(', 124,
        ')', 125,
        '+', 87,
        ',', 96,
        '-', 71,
        '<', 121,
        '>', 123,
        '[', 126,
        ']', 127,
        '\t', 68,
        0x0b, 68,
        '\f', 68,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(90);
      if (lookahead == ',') ADVANCE(96);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(89);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 41,
        '\r', 1,
        ' ', 19,
        '(', 124,
        ')', 125,
        ',', 96,
        '<', 121,
        '>', 123,
        '[', 126,
        ']', 127,
      );
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == '<') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 27:
      if (lookahead == '<') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '[') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == ']') ADVANCE(108);
      END_STATE();
    case 31:
      if (lookahead == ']') ADVANCE(116);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(122);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(6);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(6);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_manual_token2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_subsection_heading_token1);
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_subsection_heading_token1);
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ')') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '9') ADVANCE(59);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '>') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'Z') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '[') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ']') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(60);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == ')') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '9') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '>') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == 'A') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == 'Z') ADVANCE(74);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '[') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__text_token3);
      if (lookahead == ' ') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__line_10_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_reference);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_option_long_line_token1);
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_option_list_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_short_option);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_short_option);
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_short_option_value);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_short_option_value);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_short_option_value);
      if (lookahead == '>') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_short_option_value);
      if (lookahead == '>') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_short_option_value_pair);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_long_option_simple_token1);
      if (lookahead == '=') ADVANCE(117);
      if (lookahead == '[') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_long_option_simple_token1);
      if (lookahead == '=') ADVANCE(118);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_long_option_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_long_option_token2);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_long_option_token3);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_long_option_token4);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_long_option_token4);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead == '_') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_long_option_token4);
      if (lookahead == ' ') ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_long_option_token4);
      if (lookahead == '[') ADVANCE(79);
      if (lookahead == '_') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_long_option_token4);
      if (lookahead == '_') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_long_option_token4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_long_option_token5);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_value_option_bracket_token1);
      if (lookahead == '=') ADVANCE(119);
      if (lookahead == '_') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_value_option_bracket_token1);
      if (lookahead == '=') ADVANCE(119);
      if (lookahead == '_') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(110);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_value_option_bracket_token1);
      if (lookahead == '=') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_value_option_bracket_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_bracket_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 37},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 37},
  [6] = {.lex_state = 37},
  [7] = {.lex_state = 37},
  [8] = {.lex_state = 37},
  [9] = {.lex_state = 37},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 37},
  [13] = {.lex_state = 38},
  [14] = {.lex_state = 38},
  [15] = {.lex_state = 38},
  [16] = {.lex_state = 38},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 38},
  [20] = {.lex_state = 38},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 37},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 37},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 37},
  [32] = {.lex_state = 37},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 32},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 32},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 32},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_manual_token2] = ACTIONS(1),
    [aux_sym__text_token1] = ACTIONS(1),
    [aux_sym__text_token2] = ACTIONS(1),
    [aux_sym__text_token3] = ACTIONS(1),
    [sym_reference] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_short_option] = ACTIONS(1),
    [aux_sym_long_option_simple_token1] = ACTIONS(1),
    [aux_sym_long_option_token1] = ACTIONS(1),
    [aux_sym_long_option_token3] = ACTIONS(1),
    [aux_sym_long_option_token4] = ACTIONS(1),
    [aux_sym_value_option_bracket_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_manual] = STATE(63),
    [aux_sym_manual_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      aux_sym__text_token1,
    ACTIONS(7), 1,
      sym_reference,
    ACTIONS(9), 1,
      sym_short_option,
    ACTIONS(11), 1,
      sym_short_option_value,
    ACTIONS(13), 1,
      sym_short_option_value_pair,
    ACTIONS(15), 1,
      aux_sym_long_option_simple_token1,
    ACTIONS(19), 1,
      aux_sym_long_option_token4,
    ACTIONS(21), 1,
      aux_sym_value_option_bracket_token1,
    STATE(50), 1,
      sym_option_list,
    STATE(52), 1,
      sym_long_option_simple,
    STATE(64), 1,
      sym__text,
    STATE(42), 2,
      sym_long_option,
      sym_value_option_bracket,
    ACTIONS(17), 4,
      aux_sym_long_option_token1,
      aux_sym_long_option_token2,
      aux_sym_long_option_token3,
      aux_sym_long_option_token5,
  [44] = 8,
    ACTIONS(25), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(27), 1,
      aux_sym__line_token1,
    STATE(13), 1,
      sym_option_line,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
    STATE(27), 2,
      sym_option_long_line,
      sym_long_option_long_line,
    STATE(29), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(4), 3,
      sym_subsection_heading,
      sym_body,
      aux_sym_section_repeat1,
    STATE(10), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [76] = 8,
    ACTIONS(31), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(34), 1,
      aux_sym__line_token1,
    STATE(13), 1,
      sym_option_line,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
    STATE(27), 2,
      sym_option_long_line,
      sym_long_option_long_line,
    STATE(29), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(4), 3,
      sym_subsection_heading,
      sym_body,
      aux_sym_section_repeat1,
    STATE(10), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [108] = 8,
    ACTIONS(25), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(27), 1,
      aux_sym__line_token1,
    ACTIONS(37), 1,
      aux_sym_manual_token2,
    STATE(13), 1,
      sym_option_line,
    STATE(27), 2,
      sym_option_long_line,
      sym_long_option_long_line,
    STATE(29), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(3), 3,
      sym_subsection_heading,
      sym_body,
      aux_sym_section_repeat1,
    STATE(10), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [139] = 8,
    ACTIONS(27), 1,
      aux_sym__line_token1,
    ACTIONS(41), 1,
      aux_sym_subsection_heading_token1,
    STATE(13), 1,
      sym_option_line,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
    STATE(8), 2,
      sym_body,
      aux_sym_subsection_heading_repeat1,
    STATE(27), 2,
      sym_option_long_line,
      sym_long_option_long_line,
    STATE(29), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(10), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [170] = 8,
    ACTIONS(45), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(47), 1,
      aux_sym__line_token1,
    STATE(13), 1,
      sym_option_line,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
    STATE(7), 2,
      sym_body,
      aux_sym_subsection_heading_repeat1,
    STATE(27), 2,
      sym_option_long_line,
      sym_long_option_long_line,
    STATE(29), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(10), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [201] = 8,
    ACTIONS(27), 1,
      aux_sym__line_token1,
    ACTIONS(52), 1,
      aux_sym_subsection_heading_token1,
    STATE(13), 1,
      sym_option_line,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
    STATE(7), 2,
      sym_body,
      aux_sym_subsection_heading_repeat1,
    STATE(27), 2,
      sym_option_long_line,
      sym_long_option_long_line,
    STATE(29), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(10), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [232] = 7,
    ACTIONS(25), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(27), 1,
      aux_sym__line_token1,
    STATE(13), 1,
      sym_option_line,
    STATE(27), 2,
      sym_option_long_line,
      sym_long_option_long_line,
    STATE(29), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(3), 3,
      sym_subsection_heading,
      sym_body,
      aux_sym_section_repeat1,
    STATE(10), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [260] = 7,
    ACTIONS(27), 1,
      aux_sym__line_token1,
    ACTIONS(56), 1,
      aux_sym_subsection_heading_token1,
    STATE(13), 1,
      sym_option_line,
    ACTIONS(54), 2,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
    STATE(27), 2,
      sym_option_long_line,
      sym_long_option_long_line,
    STATE(29), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(12), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [287] = 6,
    ACTIONS(21), 1,
      aux_sym_value_option_bracket_token1,
    ACTIONS(60), 1,
      sym_short_option_value_pair,
    ACTIONS(19), 2,
      aux_sym_long_option_simple_token1,
      aux_sym_long_option_token4,
    ACTIONS(58), 2,
      sym_short_option,
      sym_short_option_value,
    STATE(47), 2,
      sym_long_option,
      sym_value_option_bracket,
    ACTIONS(17), 4,
      aux_sym_long_option_token1,
      aux_sym_long_option_token2,
      aux_sym_long_option_token3,
      aux_sym_long_option_token5,
  [312] = 7,
    ACTIONS(64), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(66), 1,
      aux_sym__line_token1,
    STATE(13), 1,
      sym_option_line,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
    STATE(27), 2,
      sym_option_long_line,
      sym_long_option_long_line,
    STATE(29), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(12), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [339] = 6,
    ACTIONS(71), 1,
      aux_sym_manual_token2,
    ACTIONS(75), 1,
      aux_sym__line_10_token1,
    STATE(28), 1,
      sym_option_description,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
    ACTIONS(73), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    STATE(15), 2,
      sym__line_10,
      aux_sym_option_description_repeat1,
  [361] = 6,
    ACTIONS(71), 1,
      aux_sym_manual_token2,
    ACTIONS(75), 1,
      aux_sym__line_10_token1,
    STATE(36), 1,
      sym_option_description,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
    ACTIONS(79), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    STATE(15), 2,
      sym__line_10,
      aux_sym_option_description_repeat1,
  [383] = 5,
    ACTIONS(75), 1,
      aux_sym__line_10_token1,
    ACTIONS(83), 1,
      aux_sym_manual_token2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
    ACTIONS(85), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    STATE(16), 2,
      sym__line_10,
      aux_sym_option_description_repeat1,
  [402] = 5,
    ACTIONS(89), 1,
      aux_sym_manual_token2,
    ACTIONS(94), 1,
      aux_sym__line_10_token1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
    ACTIONS(92), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    STATE(16), 2,
      sym__line_10,
      aux_sym_option_description_repeat1,
  [421] = 5,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 2,
      aux_sym_manual_token2,
      anon_sym_COMMA,
    STATE(18), 2,
      sym_bracket,
      aux_sym_value_option_bracket_repeat1,
  [439] = 5,
    ACTIONS(107), 1,
      anon_sym_LT,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 2,
      aux_sym_manual_token2,
      anon_sym_COMMA,
    STATE(18), 2,
      sym_bracket,
      aux_sym_value_option_bracket_repeat1,
  [457] = 2,
    ACTIONS(118), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
      aux_sym_manual_token2,
      aux_sym__line_10_token1,
  [468] = 2,
    ACTIONS(122), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
      aux_sym_manual_token2,
      aux_sym__line_10_token1,
  [479] = 4,
    ACTIONS(124), 1,
      aux_sym_manual_token2,
    ACTIONS(126), 1,
      aux_sym__text_token2,
    STATE(21), 1,
      aux_sym__text_repeat1,
    ACTIONS(129), 2,
      aux_sym__text_token3,
      sym_reference,
  [493] = 4,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(17), 2,
      sym_bracket,
      aux_sym_value_option_bracket_repeat1,
  [507] = 4,
    ACTIONS(132), 1,
      aux_sym_manual_token2,
    ACTIONS(134), 1,
      aux_sym__text_token2,
    STATE(21), 1,
      aux_sym__text_repeat1,
    ACTIONS(136), 2,
      aux_sym__text_token3,
      sym_reference,
  [521] = 4,
    ACTIONS(138), 1,
      aux_sym_manual_token2,
    ACTIONS(140), 1,
      aux_sym__text_token2,
    STATE(23), 1,
      aux_sym__text_repeat1,
    ACTIONS(142), 2,
      aux_sym__text_token3,
      sym_reference,
  [535] = 4,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      aux_sym_manual_token1,
    STATE(57), 1,
      sym_footer,
    STATE(32), 2,
      sym_section,
      aux_sym_manual_repeat1,
  [549] = 1,
    ACTIONS(148), 5,
      aux_sym_manual_token2,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [557] = 2,
    ACTIONS(73), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
      aux_sym__line_token1,
  [566] = 2,
    ACTIONS(152), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
      aux_sym__line_token1,
  [575] = 3,
    ACTIONS(154), 1,
      aux_sym_manual_token2,
    ACTIONS(156), 1,
      aux_sym__line_token1,
    STATE(35), 2,
      sym__line,
      aux_sym__block_repeat1,
  [586] = 4,
    ACTIONS(158), 1,
      aux_sym_manual_token2,
    ACTIONS(160), 1,
      aux_sym_option_long_line_token1,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_option_list_repeat1,
  [599] = 2,
    ACTIONS(166), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
      aux_sym__line_token1,
  [608] = 3,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      aux_sym_manual_token1,
    STATE(32), 2,
      sym_section,
      aux_sym_manual_repeat1,
  [619] = 2,
    ACTIONS(175), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
      aux_sym__line_token1,
  [628] = 2,
    ACTIONS(179), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
      aux_sym__line_token1,
  [637] = 3,
    ACTIONS(181), 1,
      aux_sym_manual_token2,
    ACTIONS(183), 1,
      aux_sym__line_token1,
    STATE(35), 2,
      sym__line,
      aux_sym__block_repeat1,
  [648] = 2,
    ACTIONS(188), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      aux_sym_manual_token1,
      aux_sym__line_token1,
  [657] = 2,
    ACTIONS(190), 1,
      aux_sym_manual_token1,
    STATE(25), 2,
      sym_section,
      aux_sym_manual_repeat1,
  [665] = 3,
    ACTIONS(5), 1,
      aux_sym__text_token1,
    ACTIONS(7), 1,
      sym_reference,
    STATE(54), 1,
      sym__text,
  [675] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      aux_sym_manual_token2,
    STATE(40), 1,
      aux_sym_option_list_repeat1,
  [685] = 3,
    ACTIONS(194), 1,
      aux_sym_manual_token2,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_option_list_repeat1,
  [695] = 3,
    ACTIONS(5), 1,
      aux_sym__text_token1,
    ACTIONS(7), 1,
      sym_reference,
    STATE(64), 1,
      sym__text,
  [705] = 3,
    ACTIONS(158), 1,
      aux_sym_manual_token2,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_option_list_repeat1,
  [715] = 2,
    ACTIONS(201), 1,
      aux_sym__text_token3,
    ACTIONS(199), 2,
      aux_sym_manual_token2,
      anon_sym_COMMA,
  [723] = 2,
    ACTIONS(203), 1,
      aux_sym_manual_token1,
    STATE(31), 1,
      sym_long_line_description,
  [730] = 1,
    ACTIONS(205), 2,
      aux_sym_manual_token2,
      aux_sym__line_token1,
  [735] = 2,
    ACTIONS(203), 1,
      aux_sym_manual_token1,
    STATE(34), 1,
      sym_long_line_description,
  [742] = 1,
    ACTIONS(207), 2,
      aux_sym_manual_token2,
      anon_sym_COMMA,
  [747] = 1,
    ACTIONS(199), 2,
      aux_sym_manual_token2,
      anon_sym_COMMA,
  [752] = 1,
    ACTIONS(209), 1,
      aux_sym_option_list_token1,
  [756] = 1,
    ACTIONS(211), 1,
      aux_sym_manual_token2,
  [760] = 1,
    ACTIONS(213), 1,
      aux_sym_bracket_token1,
  [764] = 1,
    ACTIONS(215), 1,
      aux_sym__text_token3,
  [768] = 1,
    ACTIONS(217), 1,
      aux_sym_bracket_token1,
  [772] = 1,
    ACTIONS(219), 1,
      aux_sym_manual_token2,
  [776] = 1,
    ACTIONS(221), 1,
      aux_sym_bracket_token1,
  [780] = 1,
    ACTIONS(223), 1,
      aux_sym_manual_token1,
  [784] = 1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
  [788] = 1,
    ACTIONS(227), 1,
      anon_sym_GT,
  [792] = 1,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
  [796] = 1,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
  [800] = 1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
  [804] = 1,
    ACTIONS(231), 1,
      aux_sym_manual_token2,
  [808] = 1,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
  [812] = 1,
    ACTIONS(235), 1,
      aux_sym_manual_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 170,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 232,
  [SMALL_STATE(10)] = 260,
  [SMALL_STATE(11)] = 287,
  [SMALL_STATE(12)] = 312,
  [SMALL_STATE(13)] = 339,
  [SMALL_STATE(14)] = 361,
  [SMALL_STATE(15)] = 383,
  [SMALL_STATE(16)] = 402,
  [SMALL_STATE(17)] = 421,
  [SMALL_STATE(18)] = 439,
  [SMALL_STATE(19)] = 457,
  [SMALL_STATE(20)] = 468,
  [SMALL_STATE(21)] = 479,
  [SMALL_STATE(22)] = 493,
  [SMALL_STATE(23)] = 507,
  [SMALL_STATE(24)] = 521,
  [SMALL_STATE(25)] = 535,
  [SMALL_STATE(26)] = 549,
  [SMALL_STATE(27)] = 557,
  [SMALL_STATE(28)] = 566,
  [SMALL_STATE(29)] = 575,
  [SMALL_STATE(30)] = 586,
  [SMALL_STATE(31)] = 599,
  [SMALL_STATE(32)] = 608,
  [SMALL_STATE(33)] = 619,
  [SMALL_STATE(34)] = 628,
  [SMALL_STATE(35)] = 637,
  [SMALL_STATE(36)] = 648,
  [SMALL_STATE(37)] = 657,
  [SMALL_STATE(38)] = 665,
  [SMALL_STATE(39)] = 675,
  [SMALL_STATE(40)] = 685,
  [SMALL_STATE(41)] = 695,
  [SMALL_STATE(42)] = 705,
  [SMALL_STATE(43)] = 715,
  [SMALL_STATE(44)] = 723,
  [SMALL_STATE(45)] = 730,
  [SMALL_STATE(46)] = 735,
  [SMALL_STATE(47)] = 742,
  [SMALL_STATE(48)] = 747,
  [SMALL_STATE(49)] = 752,
  [SMALL_STATE(50)] = 756,
  [SMALL_STATE(51)] = 760,
  [SMALL_STATE(52)] = 764,
  [SMALL_STATE(53)] = 768,
  [SMALL_STATE(54)] = 772,
  [SMALL_STATE(55)] = 776,
  [SMALL_STATE(56)] = 780,
  [SMALL_STATE(57)] = 784,
  [SMALL_STATE(58)] = 788,
  [SMALL_STATE(59)] = 792,
  [SMALL_STATE(60)] = 796,
  [SMALL_STATE(61)] = 800,
  [SMALL_STATE(62)] = 804,
  [SMALL_STATE(63)] = 808,
  [SMALL_STATE(64)] = 812,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_heading, 2, 0, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_heading, 2, 0, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_heading, 3, 0, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_heading, 3, 0, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_section, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_section, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_line_description, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_long_line_description, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_description, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_description, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_description_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_description_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_description_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_description_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_option_bracket, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_option_bracket_repeat1, 2, 0, 0),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_option_bracket_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_option_bracket_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_option_bracket_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_line, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_line, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_10, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_10, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manual, 3, 0, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_section, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_section, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_long_line, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_long_line, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_manual_repeat1, 2, 0, 0),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_manual_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_option_long_line, 4, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_long_option_long_line, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_line_description, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_long_line_description, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_option, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_option_simple, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manual, 4, 0, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_footer, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [233] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_man(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
