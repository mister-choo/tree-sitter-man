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
        alias(LINE_CONTENT, $.footer),
        optional(NEWLINE),
      ),

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

    _text: ($) => seq(choice(
          $.reference,
          token(prec(-2, /[^\r\n]\S*/)), // Start with non-hyphen
        ),
        repeat(choice(token(prec(-1, /\S+/)), $.reference, / +/))),


    _line_10: ($) =>
      seq(
        / {10}/,
        $._text,
        NEWLINE,
      ),

    _line: ($) =>
      seq(
        / {7}/,
        $._text,
        NEWLINE,
      ),

    reference: ($) => /[a-zA-Z0-9_][a-zA-Z0-9_\-]+\(\d+\)/,

    short_option: ($) => /\-[a-zA-Z0-9]{1}/,

    long_option: ($) => /--[a-zA-Z0-9][a-zA-Z0-9_\-]+/,

    option_section: ($) => seq($.option_line, optional($.option_description)),

    option: ($) =>
      seq(
        /[+-][a-zA-Z0-9-]+/, // First option
        optional(/, -[a-zA-Z0-9-]+/), // Optional second option
      ),

    option_line: ($) => seq(/ {7}/, $.option_list, NEWLINE),

    option_list: ($) =>
      seq(
        choice(
          $.short_option,
          $.short_option_value,
          $.short_option_value_pair,
          $.long_option,
          $.value_option_bracket,
        ),
        repeat(
          seq(
            ",",
            /[ \t]+/,
            choice(
              $.short_option,
              $.short_option_value,
              $.short_option_value_pair,
              $.long_option,
              $.value_option_bracket,
            ),
          ),
        ),
      ),

    // Short options like -x
    short_option: ($) => /[-+][a-zA-Z0-9]/,

    short_option_value: ($) => /[-+][a-zA-Z0-9] <?[a-zA-Z0-9]+>?/,

    short_option_value_pair: ($) =>
      /[-+][a-zA-Z0-9] <[a-zA-Z0-9]+>=<[a-zA-Z0-9]+>/,

    // Long options like --extended
    long_option: ($) => /--[a-zA-Z][a-zA-Z0-9\-]*/,

    // long_option_brackets: ($) => /--[a-zA-Z][a-zA-Z0-9-]*(\[[^\]]*\])*/,
    // // long_option_set_brackets: ($) => seq(/--[a-zA-Z][a-zA-Z0-9-]*=, (\[[^\]]*\])*/),
    //
    // // Options with values like --scheme=SCHEME
    value_option_bracket: ($) => seq(/--[a-zA-Z][a-zA-Z0-9-]*=?[a-zA-Z]?/, repeat1($._bracket)),

    value_option_bracket: ($) => seq(/--[a-zA-Z][a-zA-Z0-9-]*=/, /[a-zA-Z0-9-]+/),

    _bracket: ($) => prec.right(seq(choice("<", "(", "["), choice(repeat($._bracket), prec(-2, /\S+/)), choice(">", ")", "]"))),

    // value_option_array: ($) => /--[a-zA-Z][a-zA-Z0-9-]*=<.*>\[.*\]*/,

    option_description: ($) => prec.right(repeat1(choice($._line_10, NEWLINE))),
  },
});
