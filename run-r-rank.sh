#!/usr/bin/env bash
# Use for scripts that output numerical data for ranking as the first column

Rscript "$1" "$2" | sed -f backslash.sed | ./condense | sort -rg | sed "s/^[0-9][0-9]*\.*[0-9]* *: *//" | ./double-newlines | fmt | ./unix2dos
