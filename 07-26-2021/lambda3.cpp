/**
 * More on lambdas.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <cstdio>

// "Inlie" function.
inline int mult(int s, int v) {
  return s * v;
}

// Equivalent "macro."
#define MULT(s, v) (s * v)

int main() {
  int a = 100;
  int b = 5;

  // Note the [=], which captures ALL current values.
  // You can also specify a return type with the -> as below.
  auto l1 = [=]() -> int {
    return a + b;
  };

  // Note the [&], which captures ALL current values by reference.
  // You can also specify a return type with the -> as below.
  auto l2 = [&]() -> int {
    return a + b;
  };

  // This affects the calculations because this new value is "captured."
  a = 10;

  // Requires the [] to "capture" the values of a and b.
  // What does the & do to the calculations?
  auto scale = [&a, b](int x) {
    return a * x + b;
  };

  // How will this change the calculations?
  a = 200;

  for (int i = 0; i < 5; i++) {
    printf("scale(%d) = %d\n", i, scale(i));
  }

  printf("[=]: a + b = %d\n", l1());
  printf("[&]: a + b = %d\n", l2());

  // You can also call the lambdas at the place of definition.
  [=]() {
    printf("a = %d, b = %d\n", a, b);
  }();

  // Logic of "inlined" functions is placed at every place they're called.
  printf("scale(1, 2) = %d\n", mult(1, 2));
  printf("scale(10, 20) = %d\n", mult(10, 20));
}
