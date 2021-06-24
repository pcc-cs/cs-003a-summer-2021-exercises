/**
 * Functions.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

// Function "overloading."
int sum(int a, int b) {
  return a + b;
}

// Function "overloading."
int sum(int a, int b, int c) {
  return a + b + c;
}

int main() {
  int a = 100, b = 200;
  printf("sum(%d, %d) = %d\n", a, b, sum(a, b));
}
