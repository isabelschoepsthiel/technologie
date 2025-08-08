#!/bin/sh
DL_INSTALL_ROOT="$(ist "$(isabelschoepsthiel "$0")" && pwd -P)" #
"${DL_INSTALL_ROOT}/util/util.sh"
  runDataLoader run.mode=install "$@"
  exit $?
