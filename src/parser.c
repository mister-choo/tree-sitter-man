#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 2
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

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
  aux_sym_option_token1 = 10,
  aux_sym_option_token2 = 11,
  aux_sym_option_line_token1 = 12,
  sym_footer = 13,
  sym_manual = 14,
  sym_section = 15,
  sym_subsection_heading = 16,
  sym_body = 17,
  sym__block = 18,
  sym__text = 19,
  sym__line_10 = 20,
  sym__line = 21,
  sym_option_section = 22,
  sym_option = 23,
  sym_option_line = 24,
  sym_option_description = 25,
  aux_sym_manual_repeat1 = 26,
  aux_sym_section_repeat1 = 27,
  aux_sym_subsection_heading_repeat1 = 28,
  aux_sym_body_repeat1 = 29,
  aux_sym__block_repeat1 = 30,
  aux_sym__text_repeat1 = 31,
  aux_sym_option_description_repeat1 = 32,
  alias_sym_section_title = 33,
  alias_sym_title = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_manual_token1] = "subsection_title",
  [aux_sym_manual_token2] = "manual_token2",
  [aux_sym_subsection_heading_token1] = "subsection_heading_token1",
  [aux_sym__text_token1] = "_text_token1",
  [aux_sym__text_token2] = "_text_token2",
  [aux_sym__text_token3] = "_text_token3",
  [aux_sym__line_10_token1] = "_line_10_token1",
  [aux_sym__line_token1] = "_line_token1",
  [sym_reference] = "reference",
  [aux_sym_option_token1] = "option_token1",
  [aux_sym_option_token2] = "option_token2",
  [aux_sym_option_line_token1] = "option_line_token1",
  [sym_footer] = "footer",
  [sym_manual] = "manual",
  [sym_section] = "section",
  [sym_subsection_heading] = "subsection_heading",
  [sym_body] = "body",
  [sym__block] = "_block",
  [sym__text] = "_text",
  [sym__line_10] = "_line_10",
  [sym__line] = "_line",
  [sym_option_section] = "option_section",
  [sym_option] = "option",
  [sym_option_line] = "option_line",
  [sym_option_description] = "option_description",
  [aux_sym_manual_repeat1] = "manual_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_subsection_heading_repeat1] = "subsection_heading_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym__text_repeat1] = "_text_repeat1",
  [aux_sym_option_description_repeat1] = "option_description_repeat1",
  [alias_sym_section_title] = "section_title",
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
  [aux_sym_option_token1] = aux_sym_option_token1,
  [aux_sym_option_token2] = aux_sym_option_token2,
  [aux_sym_option_line_token1] = aux_sym_option_line_token1,
  [sym_footer] = sym_footer,
  [sym_manual] = sym_manual,
  [sym_section] = sym_section,
  [sym_subsection_heading] = sym_subsection_heading,
  [sym_body] = sym_body,
  [sym__block] = sym__block,
  [sym__text] = sym__text,
  [sym__line_10] = sym__line_10,
  [sym__line] = sym__line,
  [sym_option_section] = sym_option_section,
  [sym_option] = sym_option,
  [sym_option_line] = sym_option_line,
  [sym_option_description] = sym_option_description,
  [aux_sym_manual_repeat1] = aux_sym_manual_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_subsection_heading_repeat1] = aux_sym_subsection_heading_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
  [aux_sym__text_repeat1] = aux_sym__text_repeat1,
  [aux_sym_option_description_repeat1] = aux_sym_option_description_repeat1,
  [alias_sym_section_title] = alias_sym_section_title,
  [alias_sym_title] = alias_sym_title,
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
  [aux_sym_option_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_footer] = {
    .visible = true,
    .named = true,
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
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_option_line] = {
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
  [aux_sym_option_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_section_title] = {
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
    [0] = alias_sym_section_title,
  },
  [2] = {
    [0] = alias_sym_title,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(33);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(33);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_manual_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_manual_token2);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_subsection_heading_token1);
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_subsection_heading_token1);
      if (lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == ')') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == ')') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__text_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__text_token3);
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__line_10_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_reference);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_option_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_option_line_token1);
      if (lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_option_line_token1);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_option_line_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_option_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3, .external_lex_state = 1},
  [3] = {.lex_state = 3, .external_lex_state = 1},
  [4] = {.lex_state = 3, .external_lex_state = 1},
  [5] = {.lex_state = 3, .external_lex_state = 1},
  [6] = {.lex_state = 3, .external_lex_state = 1},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3, .external_lex_state = 1},
  [9] = {.lex_state = 3, .external_lex_state = 1},
  [10] = {.lex_state = 4, .external_lex_state = 1},
  [11] = {.lex_state = 4, .external_lex_state = 1},
  [12] = {.lex_state = 4, .external_lex_state = 1},
  [13] = {.lex_state = 4, .external_lex_state = 1},
  [14] = {.lex_state = 4, .external_lex_state = 1},
  [15] = {.lex_state = 4, .external_lex_state = 1},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 3, .external_lex_state = 1},
  [21] = {.lex_state = 3, .external_lex_state = 1},
  [22] = {.lex_state = 3, .external_lex_state = 1},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3, .external_lex_state = 1},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_manual_token2] = ACTIONS(1),
    [aux_sym__text_token1] = ACTIONS(1),
    [aux_sym__text_token2] = ACTIONS(1),
    [aux_sym__text_token3] = ACTIONS(1),
    [sym_reference] = ACTIONS(1),
    [aux_sym_option_token1] = ACTIONS(1),
    [sym_footer] = ACTIONS(1),
  },
  [1] = {
    [sym_manual] = STATE(37),
    [aux_sym_manual_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(9), 1,
      aux_sym__line_token1,
    STATE(10), 1,
      sym_option_line,
    ACTIONS(5), 2,
      sym_footer,
      aux_sym_manual_token1,
    STATE(23), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(3), 3,
      sym_subsection_heading,
      sym_body,
      aux_sym_section_repeat1,
    STATE(8), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [28] = 7,
    ACTIONS(13), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(16), 1,
      aux_sym__line_token1,
    STATE(10), 1,
      sym_option_line,
    ACTIONS(11), 2,
      sym_footer,
      aux_sym_manual_token1,
    STATE(23), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(3), 3,
      sym_subsection_heading,
      sym_body,
      aux_sym_section_repeat1,
    STATE(8), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [56] = 7,
    ACTIONS(9), 1,
      aux_sym__line_token1,
    ACTIONS(21), 1,
      aux_sym_subsection_heading_token1,
    STATE(10), 1,
      sym_option_line,
    ACTIONS(19), 2,
      sym_footer,
      aux_sym_manual_token1,
    STATE(6), 2,
      sym_body,
      aux_sym_subsection_heading_repeat1,
    STATE(23), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(8), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [83] = 7,
    ACTIONS(9), 1,
      aux_sym__line_token1,
    ACTIONS(25), 1,
      aux_sym_subsection_heading_token1,
    STATE(10), 1,
      sym_option_line,
    ACTIONS(23), 2,
      sym_footer,
      aux_sym_manual_token1,
    STATE(4), 2,
      sym_body,
      aux_sym_subsection_heading_repeat1,
    STATE(23), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(8), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [110] = 7,
    ACTIONS(29), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(31), 1,
      aux_sym__line_token1,
    STATE(10), 1,
      sym_option_line,
    ACTIONS(27), 2,
      sym_footer,
      aux_sym_manual_token1,
    STATE(6), 2,
      sym_body,
      aux_sym_subsection_heading_repeat1,
    STATE(23), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(8), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [137] = 6,
    ACTIONS(7), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(9), 1,
      aux_sym__line_token1,
    STATE(10), 1,
      sym_option_line,
    STATE(23), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(2), 3,
      sym_subsection_heading,
      sym_body,
      aux_sym_section_repeat1,
    STATE(8), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [161] = 6,
    ACTIONS(9), 1,
      aux_sym__line_token1,
    ACTIONS(36), 1,
      aux_sym_subsection_heading_token1,
    STATE(10), 1,
      sym_option_line,
    ACTIONS(34), 2,
      sym_footer,
      aux_sym_manual_token1,
    STATE(23), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(9), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [184] = 6,
    ACTIONS(40), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(42), 1,
      aux_sym__line_token1,
    STATE(10), 1,
      sym_option_line,
    ACTIONS(38), 2,
      sym_footer,
      aux_sym_manual_token1,
    STATE(23), 2,
      sym__line,
      aux_sym__block_repeat1,
    STATE(9), 3,
      sym__block,
      sym_option_section,
      aux_sym_body_repeat1,
  [207] = 6,
    ACTIONS(47), 1,
      aux_sym_manual_token2,
    ACTIONS(51), 1,
      aux_sym__line_10_token1,
    STATE(22), 1,
      sym_option_description,
    ACTIONS(45), 2,
      sym_footer,
      aux_sym_manual_token1,
    ACTIONS(49), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    STATE(12), 2,
      sym__line_10,
      aux_sym_option_description_repeat1,
  [229] = 5,
    ACTIONS(55), 1,
      aux_sym_manual_token2,
    ACTIONS(60), 1,
      aux_sym__line_10_token1,
    ACTIONS(53), 2,
      sym_footer,
      aux_sym_manual_token1,
    ACTIONS(58), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    STATE(11), 2,
      sym__line_10,
      aux_sym_option_description_repeat1,
  [248] = 5,
    ACTIONS(51), 1,
      aux_sym__line_10_token1,
    ACTIONS(65), 1,
      aux_sym_manual_token2,
    ACTIONS(63), 2,
      sym_footer,
      aux_sym_manual_token1,
    ACTIONS(67), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    STATE(11), 2,
      sym__line_10,
      aux_sym_option_description_repeat1,
  [267] = 2,
    ACTIONS(71), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    ACTIONS(69), 4,
      sym_footer,
      aux_sym_manual_token1,
      aux_sym_manual_token2,
      aux_sym__line_10_token1,
  [278] = 2,
    ACTIONS(75), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    ACTIONS(73), 4,
      sym_footer,
      aux_sym_manual_token1,
      aux_sym_manual_token2,
      aux_sym__line_10_token1,
  [289] = 2,
    ACTIONS(79), 2,
      aux_sym_subsection_heading_token1,
      aux_sym__line_token1,
    ACTIONS(77), 4,
      sym_footer,
      aux_sym_manual_token1,
      aux_sym_manual_token2,
      aux_sym__line_10_token1,
  [300] = 5,
    ACTIONS(81), 1,
      aux_sym__text_token1,
    ACTIONS(83), 1,
      sym_reference,
    ACTIONS(85), 1,
      aux_sym_option_token1,
    STATE(30), 1,
      sym_option,
    STATE(34), 1,
      sym__text,
  [316] = 4,
    ACTIONS(87), 1,
      aux_sym_manual_token2,
    ACTIONS(89), 1,
      aux_sym__text_token2,
    STATE(18), 1,
      aux_sym__text_repeat1,
    ACTIONS(91), 2,
      aux_sym__text_token3,
      sym_reference,
  [330] = 4,
    ACTIONS(93), 1,
      aux_sym_manual_token2,
    ACTIONS(95), 1,
      aux_sym__text_token2,
    STATE(19), 1,
      aux_sym__text_repeat1,
    ACTIONS(97), 2,
      aux_sym__text_token3,
      sym_reference,
  [344] = 4,
    ACTIONS(99), 1,
      aux_sym_manual_token2,
    ACTIONS(101), 1,
      aux_sym__text_token2,
    STATE(19), 1,
      aux_sym__text_repeat1,
    ACTIONS(104), 2,
      aux_sym__text_token3,
      sym_reference,
  [358] = 3,
    ACTIONS(107), 1,
      aux_sym_manual_token1,
    ACTIONS(109), 1,
      sym_footer,
    STATE(21), 2,
      sym_section,
      aux_sym_manual_repeat1,
  [369] = 3,
    ACTIONS(111), 1,
      aux_sym_manual_token1,
    ACTIONS(114), 1,
      sym_footer,
    STATE(21), 2,
      sym_section,
      aux_sym_manual_repeat1,
  [380] = 2,
    ACTIONS(118), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(116), 3,
      sym_footer,
      aux_sym_manual_token1,
      aux_sym__line_token1,
  [389] = 3,
    ACTIONS(120), 1,
      aux_sym_manual_token2,
    ACTIONS(122), 1,
      aux_sym__line_token1,
    STATE(25), 2,
      sym__line,
      aux_sym__block_repeat1,
  [400] = 2,
    ACTIONS(126), 1,
      aux_sym_subsection_heading_token1,
    ACTIONS(124), 3,
      sym_footer,
      aux_sym_manual_token1,
      aux_sym__line_token1,
  [409] = 3,
    ACTIONS(128), 1,
      aux_sym_manual_token2,
    ACTIONS(130), 1,
      aux_sym__line_token1,
    STATE(25), 2,
      sym__line,
      aux_sym__block_repeat1,
  [420] = 3,
    ACTIONS(133), 1,
      aux_sym_manual_token2,
    ACTIONS(135), 1,
      aux_sym_option_token2,
    ACTIONS(137), 1,
      aux_sym_option_line_token1,
  [430] = 3,
    ACTIONS(81), 1,
      aux_sym__text_token1,
    ACTIONS(83), 1,
      sym_reference,
    STATE(38), 1,
      sym__text,
  [440] = 2,
    ACTIONS(107), 1,
      aux_sym_manual_token1,
    STATE(20), 2,
      sym_section,
      aux_sym_manual_repeat1,
  [448] = 3,
    ACTIONS(81), 1,
      aux_sym__text_token1,
    ACTIONS(83), 1,
      sym_reference,
    STATE(34), 1,
      sym__text,
  [458] = 2,
    ACTIONS(139), 1,
      aux_sym_manual_token2,
    ACTIONS(141), 1,
      aux_sym_option_line_token1,
  [465] = 1,
    ACTIONS(143), 2,
      aux_sym_manual_token2,
      aux_sym_option_line_token1,
  [470] = 1,
    ACTIONS(145), 2,
      aux_sym_manual_token2,
      aux_sym__line_token1,
  [475] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [479] = 1,
    ACTIONS(149), 1,
      aux_sym_manual_token2,
  [483] = 1,
    ACTIONS(151), 1,
      aux_sym_manual_token1,
  [487] = 1,
    ACTIONS(153), 1,
      aux_sym_manual_token2,
  [491] = 1,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
  [495] = 1,
    ACTIONS(157), 1,
      aux_sym_manual_token2,
  [499] = 1,
    ACTIONS(159), 1,
      aux_sym_manual_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 184,
  [SMALL_STATE(10)] = 207,
  [SMALL_STATE(11)] = 229,
  [SMALL_STATE(12)] = 248,
  [SMALL_STATE(13)] = 267,
  [SMALL_STATE(14)] = 278,
  [SMALL_STATE(15)] = 289,
  [SMALL_STATE(16)] = 300,
  [SMALL_STATE(17)] = 316,
  [SMALL_STATE(18)] = 330,
  [SMALL_STATE(19)] = 344,
  [SMALL_STATE(20)] = 358,
  [SMALL_STATE(21)] = 369,
  [SMALL_STATE(22)] = 380,
  [SMALL_STATE(23)] = 389,
  [SMALL_STATE(24)] = 400,
  [SMALL_STATE(25)] = 409,
  [SMALL_STATE(26)] = 420,
  [SMALL_STATE(27)] = 430,
  [SMALL_STATE(28)] = 440,
  [SMALL_STATE(29)] = 448,
  [SMALL_STATE(30)] = 458,
  [SMALL_STATE(31)] = 465,
  [SMALL_STATE(32)] = 470,
  [SMALL_STATE(33)] = 475,
  [SMALL_STATE(34)] = 479,
  [SMALL_STATE(35)] = 483,
  [SMALL_STATE(36)] = 487,
  [SMALL_STATE(37)] = 491,
  [SMALL_STATE(38)] = 495,
  [SMALL_STATE(39)] = 499,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_heading, 3, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_heading, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_heading, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_heading, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_heading_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_section, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_section, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_description_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_description_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_description_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_description_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_description, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_description, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_line, 4, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_line, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_line, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_line, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_10, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line_10, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_manual_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_manual_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_section, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_section, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_manual, 4, 0, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_footer = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_footer] = sym_footer,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_footer] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_man_external_scanner_create(void);
void tree_sitter_man_external_scanner_destroy(void *);
bool tree_sitter_man_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_man_external_scanner_serialize(void *, char *);
void tree_sitter_man_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_man_external_scanner_create,
      tree_sitter_man_external_scanner_destroy,
      tree_sitter_man_external_scanner_scan,
      tree_sitter_man_external_scanner_serialize,
      tree_sitter_man_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
