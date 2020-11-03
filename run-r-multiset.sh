#!/usr/bin/env bash
# Use for scripts that output multiple data sets with labels at the top

Rscript "$1" "$2" | sed -f backslash.sed | ./condense | awk -f formatting.awk | ./double-newlines | fmt | ./unix2dos
