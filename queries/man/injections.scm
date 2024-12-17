(section
  (section_title) @_title
  (body) @injection.content
  (#any-of? @_title "SYNOPSIS" "SYNTAX" "SINTASSI" "SKŁADNIA" "СИНТАКСИС" "書式")
  ; a heuristic to determine if we should inject c
  (#lua-match? @injection.content "^%s+#include")
  (#set! injection.language "c"))

(subsection_heading
  (subsection_title) @_title
  (body) @injection.content
  (#eq? @_title "Program source")
  (#set! injection.language "c"))
