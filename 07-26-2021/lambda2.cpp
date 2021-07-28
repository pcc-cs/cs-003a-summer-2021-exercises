/**
 * More on lambdas.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <cstdio>

int main() {
  int a = 100;
  int b = 5;

  // This affects the calculations because this new value is "captured."
  a = 10;

  // Requires the [] to "capture" the values of a and b.
  auto scale = [a, b](int x) {
    return a * x + b;
  };

  // How will this change the calculations?
  a = 200;

  for (int i = 0; i < 5; i++) {
    printf("scale(%d) = %d\n", i, scale(i));
  }
}
