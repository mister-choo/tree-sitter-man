#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 3
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  sym_short_option = 10,
  sym_long_option = 11,
  anon_sym_COMMA = 12,
  aux_sym_option_list_token1 = 13,
  sym_short_option_value = 14,
  sym_short_option_value_pair = 15,
  aux_sym_value_option_bracket_token1 = 16,
  aux_sym_value_option_bracket_token2 = 17,
  sym_manual = 18,
  sym_section = 19,
  sym_subsection_heading = 20,
  sym_body = 21,
  sym__block = 22,
  sym__text = 23,
  sym__line_10 = 24,
  sym__line = 25,
  sym_option_section = 26,
  sym_option_line = 27,
  sym_option_list = 28,
  sym_value_option_bracket = 29,
  sym_option_description = 30,
  aux_sym_manual_repeat1 = 31,
  aux_sym_section_repeat1 = 32,
  aux_sym_subsection_heading_repeat1 = 33,
  aux_sym_body_repeat1 = 34,
  aux_sym__block_repeat1 = 35,
  aux_sym__text_repeat1 = 36,
  aux_sym_option_list_repeat1 = 37,
  aux_sym_option_description_repeat1 = 38,
  alias_sym_footer = 39,
  alias_sym_section_title = 40,
  alias_sym_subsection_title = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_manual_token1] = "title",
  [aux_sym_manual_token2] = "manual_token2",
  [aux_sym_subsection_heading_token1] = "subsection_heading_token1",
  [aux_sym__text_token1] = "_text_token1",
  [aux_sym__text_token2] = "_text_token2",
  [aux_sym__text_token3] = "_text_token3",
  [aux_sym__line_10_token1] = "_line_10_token1",
  [aux_sym__line_token1] = "_line_token1",
  [sym_reference] = "reference",
  [sym_short_option] = "short_option",
  [sym_long_option] = "long_option",
  [anon_sym_COMMA] = ",",
  [aux_sym_option_list_token1] = "option_list_token1",
  [sym_short_option_value] = "short_option_value",
  [sym_short_option_value_pair] = "short_option_value_pair",
  [aux_sym_value_option_bracket_token1] = "value_option_bracket_token1",
  [aux_sym_value_option_bracket_token2] = "value_option_bracket_token2",
  [sym_manual] = "manual",
  [sym_section] = "section",
  [sym_subsection_heading] = "subsection_heading",
  [sym_body] = "body",
  [sym__block] = "_block",
  [sym__text] = "_text",
  [sym__line_10] = "_line_10",
  [sym__line] = "_line",
  [sym_option_section] = "option_section",
  [sym_option_line] = "option_line",
  [sym_option_list] = "option_list",
  [sym_value_option_bracket] = "value_option_bracket",
  [sym_option_description] = "option_description",
  [aux_sym_manual_repeat1] = "manual_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_subsection_heading_repeat1] = "subsection_heading_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym__text_repeat1] = "_text_repeat1",
  [aux_sym_option_list_repeat1] = "option_list_repeat1",
  [aux_sym_option_description_repeat1] = "option_description_repeat1",
  [alias_sym_footer] = "footer",
  [alias_sym_section_title] = "section_title",
  [alias_sym_subsection_title] = "subsection_title",
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
  [sym_short_option] = sym_short_option,
  [sym_long_option] = sym_long_option,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_option_list_token1] = aux_sym_option_list_token1,
  [sym_short_option_value] = sym_short_option_value,
  [sym_short_option_value_pair] = sym_short_option_value_pair,
  [aux_sym_value_option_bracket_token1] = aux_sym_value_option_bracket_token1,
  [aux_sym_value_option_bracket_token2] = aux_sym_value_option_bracket_token2,
  [sym_manual] = sym_manual,
  [sym_section] = sym_section,
  [sym_subsection_heading] = sym_subsection_heading,
  [sym_body] = sym_body,
  [sym__block] = sym__block,
  [sym__text] = sym__text,
  [sym__line_10] = sym__line_10,
  [sym__line] = sym__line,
  [sym_option_section] = sym_option_section,
  [sym_option_line] = sym_option_line,
  [sym_option_list] = sym_option_list,
  [sym_value_option_bracket] = sym_value_option_bracket,
  [sym_option_description] = sym_option_description,
  [aux_sym_manual_repeat1] = aux_sym_manual_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_subsection_heading_repeat1] = aux_sym_subsection_heading_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
  [aux_sym__text_repeat1] = aux_sym__text_repeat1,
  [aux_sym_option_list_repeat1] = aux_sym_option_list_repeat1,
  [aux_sym_option_description_repeat1] = aux_sym_option_description_repeat1,
  [alias_sym_footer] = alias_sym_footer,
  [alias_sym_section_title] = alias_sym_section_title,
  [alias_sym_subsection_title] = alias_sym_subsection_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_manual_token1] = {
    .visible = true,
    .named = true,
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
  [sym_short_option] = {
    .visible = true,
    .named = true,
  },
  [sym_long_option] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_option_list_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_short_option_value] = {
    .visible = true,
    .named = true,
  },
  [sym_short_option_value_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_option_bracket_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_option_bracket_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_manual] = {
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
  [sym_option_list] = {
    .visible = true,
    .named = true,
  },
  [sym_value_option_bracket] = {
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
  [aux_sym_option_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_footer] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_section_title] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_subsection_title] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_section_title,
  },
  [2] = {
    [3] = alias_sym_footer,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 29,
        '\r', 1,
        ' ', 46,
        '+', 43,
        ',', 55,
        '-', 64,
        '_', 44,
        '\t', 39,
        0x0b, 39,
        '\f', 39,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(39);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(6);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_manual_token2);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_subsection_heading_token1);
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_subsection_heading_token1);
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ')') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == ')') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__text_token3);
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__line_10_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_reference);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_short_option);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_short_option);
      if (lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_short_option);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_long_option);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_option_list_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_short_option_value);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_short_option_value);
      if (lookahead == '=') ADVANCE(21);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_short_option_value);
      if (lookahead == '>') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_short_option_value);
      if (lookahead == '>') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_short_option_value_pair);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_value_option_bracket_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_value_option_bracket_token2);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_value_option_bracket_token2);
      if (lookahead == '-') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_value_option_bracket_token2);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_value_option_bracket_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_value_option_bracket_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 26},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_manual_token2] = ACTIONS(1),
    [aux_sym__text_token1] = ACTIONS(1),
    [aux_sym__text_token2] = ACTIONS(1),
    [aux_sym__text_token3] = ACTIONS(1),
    [sym_reference] = ACTIONS(1),
    [sym_short_option] = ACTIONS(1),
    [sym_long_option] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_value_option_bracket_token1] = ACTIONS(1),
    [aux_sym_value_option_bracket_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_manual] = STATE(41),
    [aux_sym_manual_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 1,
      aux_sym_manual_token2,
    ACTIONS(9), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(11), 1,
      aux_sym__line_token1,
    STATE(12), 1,
      sym_option_line,
    STATE(21), 2,
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
  [30] = 7,
    ACTIONS(9), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(11), 1,
      aux_sym__line_token1,
    ACTIONS(13), 1,
      aux_sym_manual_token1,
    STATE(12), 1,
      sym_option_line,
    STATE(21), 2,
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
  [57] = 7,
    ACTIONS(15), 1,
      aux_sym_manual_token1,
    ACTIONS(17), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(20), 1,
      aux_sym__line_token1,
    STATE(12), 1,
      sym_option_line,
    STATE(21), 2,
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
  [84] = 7,
    ACTIONS(23), 1,
      aux_sym_manual_token1,
    ACTIONS(25), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(27), 1,
      aux_sym__line_token1,
    STATE(12), 1,
      sym_option_line,
    STATE(5), 2,
      sym_body,
      aux_sym_subsection_heading_repeat1,
    STATE(21), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(10), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [110] = 7,
    ACTIONS(11), 1,
      aux_sym__line_token1,
    ACTIONS(30), 1,
      aux_sym_manual_token1,
    ACTIONS(32), 1,
      aux_sym_subsection_heading_token1,
    STATE(12), 1,
      sym_option_line,
    STATE(8), 2,
      sym_body,
      aux_sym_subsection_heading_repeat1,
    STATE(21), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(10), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [136] = 6,
    ACTIONS(9), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(11), 1,
      aux_sym__line_token1,
    STATE(12), 1,
      sym_option_line,
    STATE(21), 2,
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
  [160] = 7,
    ACTIONS(11), 1,
      aux_sym__line_token1,
    ACTIONS(34), 1,
      aux_sym_manual_token1,
    ACTIONS(36), 1,
      aux_sym_subsection_heading_token1,
    STATE(12), 1,
      sym_option_line,
    STATE(5), 2,
      sym_body,
      aux_sym_subsection_heading_repeat1,
    STATE(21), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(10), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [186] = 8,
    ACTIONS(38), 1,
      aux_sym__text_token1,
    ACTIONS(40), 1,
      sym_reference,
    ACTIONS(44), 1,
      sym_short_option_value_pair,
    ACTIONS(46), 1,
      aux_sym_value_option_bracket_token1,
    STATE(24), 1,
      sym_value_option_bracket,
    STATE(36), 1,
      sym_option_list,
    STATE(44), 1,
      sym__text,
    ACTIONS(42), 3,
      sym_short_option,
      sym_long_option,
      sym_short_option_value,
  [213] = 6,
    ACTIONS(11), 1,
      aux_sym__line_token1,
    ACTIONS(48), 1,
      aux_sym_manual_token1,
    ACTIONS(50), 1,
      aux_sym_subsection_heading_token1,
    STATE(12), 1,
      sym_option_line,
    STATE(21), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(11), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [235] = 6,
    ACTIONS(52), 1,
      aux_sym_manual_token1,
    ACTIONS(54), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(56), 1,
      aux_sym__line_token1,
    STATE(12), 1,
      sym_option_line,
    STATE(21), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(11), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [257] = 6,
    ACTIONS(59), 1,
      aux_sym_manual_token1,
    ACTIONS(61), 1,
      aux_sym_manual_token2,
    ACTIONS(65), 1,
      aux_sym__line_10_token1,
    STATE(25), 1,
      sym_option_description,
    ACTIONS(63), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    STATE(13), 2,
      sym__line_10,
      aux_sym_option_description_repeat1,
  [278] = 5,
    ACTIONS(65), 1,
      aux_sym__line_10_token1,
    ACTIONS(67), 1,
      aux_sym_manual_token1,
    ACTIONS(69), 1,
      aux_sym_manual_token2,
    ACTIONS(71), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    STATE(14), 2,
      sym__line_10,
      aux_sym_option_description_repeat1,
  [296] = 5,
    ACTIONS(73), 1,
      aux_sym_manual_token1,
    ACTIONS(75), 1,
      aux_sym_manual_token2,
    ACTIONS(80), 1,
      aux_sym__line_10_token1,
    ACTIONS(78), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    STATE(14), 2,
      sym__line_10,
      aux_sym_option_description_repeat1,
  [314] = 4,
    ACTIONS(46), 1,
      aux_sym_value_option_bracket_token1,
    ACTIONS(85), 1,
      sym_short_option_value_pair,
    STATE(35), 1,
      sym_value_option_bracket,
    ACTIONS(83), 3,
      sym_short_option,
      sym_long_option,
      sym_short_option_value,
  [329] = 4,
    ACTIONS(87), 1,
      aux_sym_manual_token2,
    ACTIONS(89), 1,
      aux_sym__text_token2,
    STATE(17), 1,
      aux_sym__text_repeat1,
    ACTIONS(91), 2,
      aux_sym__text_token3,
      sym_reference,
  [343] = 4,
    ACTIONS(93), 1,
      aux_sym_manual_token2,
    ACTIONS(95), 1,
      aux_sym__text_token2,
    STATE(19), 1,
      aux_sym__text_repeat1,
    ACTIONS(97), 2,
      aux_sym__text_token3,
      sym_reference,
  [357] = 2,
    ACTIONS(101), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    ACTIONS(99), 3,
      aux_sym_manual_token1,
      aux_sym_manual_token2,
      aux_sym__line_10_token1,
  [367] = 4,
    ACTIONS(103), 1,
      aux_sym_manual_token2,
    ACTIONS(105), 1,
      aux_sym__text_token2,
    STATE(19), 1,
      aux_sym__text_repeat1,
    ACTIONS(108), 2,
      aux_sym__text_token3,
      sym_reference,
  [381] = 2,
    ACTIONS(113), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    ACTIONS(111), 3,
      aux_sym_manual_token1,
      aux_sym_manual_token2,
      aux_sym__line_10_token1,
  [391] = 3,
    ACTIONS(115), 1,
      aux_sym_manual_token2,
    ACTIONS(117), 1,
      aux_sym__line_token1,
    STATE(22), 2,
      sym__line,
      aux_sym__block_repeat1,
  [402] = 3,
    ACTIONS(119), 1,
      aux_sym_manual_token2,
    ACTIONS(121), 1,
      aux_sym__line_token1,
    STATE(22), 2,
      sym__line,
      aux_sym__block_repeat1,
  [413] = 2,
    ACTIONS(124), 1,
      aux_sym_manual_token1,
    STATE(27), 2,
      sym_section,
      aux_sym_manual_repeat1,
  [421] = 3,
    ACTIONS(126), 1,
      aux_sym_manual_token2,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_option_list_repeat1,
  [431] = 2,
    ACTIONS(132), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(130), 2,
      aux_sym_manual_token1,
      aux_sym__line_token1,
  [439] = 3,
    ACTIONS(38), 1,
      aux_sym__text_token1,
    ACTIONS(40), 1,
      sym_reference,
    STATE(38), 1,
      sym__text,
  [449] = 2,
    ACTIONS(134), 1,
      aux_sym_manual_token1,
    STATE(27), 2,
      sym_section,
      aux_sym_manual_repeat1,
  [457] = 2,
    ACTIONS(137), 1,
      aux_sym_manual_token1,
    STATE(23), 2,
      sym_section,
      aux_sym_manual_repeat1,
  [465] = 2,
    ACTIONS(141), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(139), 2,
      aux_sym_manual_token1,
      aux_sym__line_token1,
  [473] = 3,
    ACTIONS(38), 1,
      aux_sym__text_token1,
    ACTIONS(40), 1,
      sym_reference,
    STATE(44), 1,
      sym__text,
  [483] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      aux_sym_manual_token2,
    STATE(32), 1,
      aux_sym_option_list_repeat1,
  [493] = 3,
    ACTIONS(145), 1,
      aux_sym_manual_token2,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_option_list_repeat1,
  [503] = 1,
    ACTIONS(150), 2,
      aux_sym_manual_token2,
      aux_sym__line_token1,
  [508] = 1,
    ACTIONS(152), 2,
      aux_sym_manual_token2,
      anon_sym_COMMA,
  [513] = 1,
    ACTIONS(154), 2,
      aux_sym_manual_token2,
      anon_sym_COMMA,
  [518] = 1,
    ACTIONS(156), 1,
      aux_sym_manual_token2,
  [522] = 1,
    ACTIONS(158), 1,
      aux_sym_manual_token2,
  [526] = 1,
    ACTIONS(160), 1,
      aux_sym_manual_token2,
  [530] = 1,
    ACTIONS(162), 1,
      aux_sym_manual_token1,
  [534] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [538] = 1,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
  [542] = 1,
    ACTIONS(168), 1,
      aux_sym_value_option_bracket_token2,
  [546] = 1,
    ACTIONS(170), 1,
      aux_sym_option_list_token1,
  [550] = 1,
    ACTIONS(172), 1,
      aux_sym_manual_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 160,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 213,
  [SMALL_STATE(11)] = 235,
  [SMALL_STATE(12)] = 257,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 296,
  [SMALL_STATE(15)] = 314,
  [SMALL_STATE(16)] = 329,
  [SMALL_STATE(17)] = 343,
  [SMALL_STATE(18)] = 357,
  [SMALL_STATE(19)] = 367,
  [SMALL_STATE(20)] = 381,
  [SMALL_STATE(21)] = 391,
  [SMALL_STATE(22)] = 402,
  [SMALL_STATE(23)] = 413,
  [SMALL_STATE(24)] = 421,
  [SMALL_STATE(25)] = 431,
  [SMALL_STATE(26)] = 439,
  [SMALL_STATE(27)] = 449,
  [SMALL_STATE(28)] = 457,
  [SMALL_STATE(29)] = 465,
  [SMALL_STATE(30)] = 473,
  [SMALL_STATE(31)] = 483,
  [SMALL_STATE(32)] = 493,
  [SMALL_STATE(33)] = 503,
  [SMALL_STATE(34)] = 508,
  [SMALL_STATE(35)] = 513,
  [SMALL_STATE(36)] = 518,
  [SMALL_STATE(37)] = 522,
  [SMALL_STATE(38)] = 526,
  [SMALL_STATE(39)] = 530,
  [SMALL_STATE(40)] = 534,
  [SMALL_STATE(41)] = 538,
  [SMALL_STATE(42)] = 542,
  [SMALL_STATE(43)] = 546,
  [SMALL_STATE(44)] = 550,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manual, 4, 0, 2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_heading, 2, 0, 3),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_heading, 2, 0, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_heading, 3, 0, 3),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_heading, 3, 0, 3),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_section, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_section, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_description, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_description, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_description_repeat1, 2, 0, 0),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_description_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_description_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_description_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_line, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_line, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_10, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_10, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_section, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_section, 2, 0, 0),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_manual_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_list, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_option_bracket, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_list_repeat1, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manual, 5, 0, 2),
  [166] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
