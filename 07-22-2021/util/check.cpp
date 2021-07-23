/**
 * Check template operation.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <cstdio>
#include "util_good.h"

int main() {
  int a = 10, b = 20;
  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);
}
