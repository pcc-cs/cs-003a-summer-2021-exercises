/**
 * Exceptions.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

// Time complexity: O(n).
int sumTo(int n) {
  if (n < 0) {
    throw "n should >= 0";
  }

  int s = 0;
  for (int i = 1; i <= n; i++) {
    s += i;
  }
  return s;
}

int main() {
  int n;
  while (scanf("%d", &n) == 1) {
    try {
      printf("sumTo(%d) = %d\n", n, sumTo(n));
    } catch (const char* e) {
      printf("error: %s\n", e);
    }
  }
}
