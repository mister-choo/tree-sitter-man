#!/bin/sh

tree-sitter generate
cd src

gcc -O3 parser.c scanner.c -I./ -shared -o man.so

cp man.so /home/ivan_choo/.local/share/nvim/lazy/nvim-treesitter/parser/

