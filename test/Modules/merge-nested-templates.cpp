// RUN: rm -rf %t
// RUN: %clang_cc1 -fmodules -fmodules-cache-path=%t -I%S/Inputs/merge-nested-templates -verify %s
// expected-no-diagnostics
#include "c.h"
