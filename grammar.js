const NEWLINE = /\r?\n/;
const ANYTHING = /[^\r\n]+/;
const ANYTHING_ = /[^\r\n]*/;
const ANYTHING_STARTING_NON_WHITESPACE = /\S[^\r\n]*/;
const LINE_CONTENT = /\S[^\r\n]*\r?\n/;

module.exports = grammar({
  name: "man",

  extras: ($) => [],

  // externals: ($) => [$.footer],

  rules: {
    manual: ($) =>
      seq(
        alias(LINE_CONTENT, $.title),
        NEWLINE,
        repeat1($.section),
        optional($.footer),
      ),

    footer: ($) => seq(LINE_CONTENT, NEWLINE),

    section: ($) =>
      seq(
        alias(LINE_CONTENT, $.section_title),
        repeat1(choice($.body, $.subsection_heading)),
      ),

    subsection_heading: ($) =>
      prec.right(
        seq(/ {3}/, alias(LINE_CONTENT, $.subsection_title), repeat($.body)),
      ),

    body: ($) => prec.right(repeat1(choice($.option_section, $._block))),

    _block: ($) => prec.right(seq(repeat1($._line), NEWLINE)),

    _text: ($) =>
      seq(
        choice(
          $.reference,
          token(prec(-2, /[^\r\n]\S*/)), // Start with non-hyphen
        ),
        repeat(choice(token(prec(-1, /\S+/)), $.reference, / +/)),
      ),

    _line_10: ($) => seq(/ {10}/, $._text, NEWLINE),

    _line: ($) => seq(/ {7}/, $._text, NEWLINE),

    reference: ($) => /[a-zA-Z0-9_][a-zA-Z0-9_\-]+\(\d+\)/,

    option_section: ($) =>
      choice(
        $.long_option_long_line,
        $.option_long_line,
        seq($.option_line, optional($.option_description)),
      ),

    option_line: ($) => seq(/ {7}/, $.option_list, NEWLINE),

    option_long_line: ($) =>
      seq(/ {7}/, $.short_option, / {3} +/, $.long_line_description),

    long_option_long_line: ($) =>
      seq(/ {7}/, $.long_option_simple, / +/, $.long_line_description),

    long_line_description: ($) =>
      seq(LINE_CONTENT, optional($.option_description)),

    option_list: ($) =>
      seq(
        choice(
          $.value_option_bracket,
          $.short_option,
          $.short_option_value,
          $.short_option_value_pair,
          $.long_option,
          // prec(-2, $.short_option_long_line),
        ),
        repeat(
          seq(
            ",",
            /[ \t]+/,
            choice(
              $.value_option_bracket,
              $.short_option,
              $.short_option_value,
              $.short_option_value_pair,
              $.long_option,
            ),
          ),
        ),
      ),

    short_option: ($) => /[-+][a-zA-Z0-9]/,

    short_option_value: ($) => /[-+][a-zA-Z0-9] <?[a-zA-Z0-9]+>?/,

    // short_option_long_line: ($) => /[-+][a-zA-Z0-9] +[\S ]+/,

    short_option_value_pair: ($) =>
      /[-+][a-zA-Z0-9] <[a-zA-Z0-9]+>=<[a-zA-Z0-9]+>/,

    long_option_simple: ($) => /--[a-zA-Z][a-zA-Z0-9\-]*/,

    long_option: ($) =>
      choice(
        /--[a-zA-Z][a-zA-Z0-9\-]*/,
        /--[a-zA-Z][a-zA-Z0-9\-]*\[=<[a-zA-Z]+>\]/,
        /--[a-zA-Z][a-zA-Z0-9\-]*=[A-Z]+\[,..\]/,
        /--[a-zA-Z][a-zA-Z0-9\-]*=[A-Z0-9]+\[A-Z0-9\]/,
        /--[a-zA-Z][a-zA-Z0-9\-]*=[a-zA-Z_]+/,
        /--[a-zA-Z][a-zA-Z0-9\-]*=[a-zA-Z_]+ \[\.\.\.\]/,

        // prec(-2, /--[a-zA-Z][a-zA-Z0-9\-]* [a-zA-Z|\[\]\-:]+/),
        // prec(-2, /--[a-zA-Z][a-zA-Z0-9\-]* [a-zA-Z|\[\]\-: \.]+/),
        // prec(-5, seq(/--[a-zA-Z][a-zA-Z0-9\-]* /, ANYTHING))
      ),

    value_option_bracket: ($) =>
      seq(/--[a-zA-Z][a-zA-Z0-9\-]*\=*[a-zA-Z]*/, repeat1($.bracket)),

    bracket: ($) =>
      prec.right(
        choice(
          seq("<", /\S+/, ">"),
          seq("(", /\S+/, ")"),
          seq("[", /\S+/, "]"),
        ),
      ),

    option_description: ($) => prec.right(repeat1(choice($._line_10, NEWLINE))),
  },
});
