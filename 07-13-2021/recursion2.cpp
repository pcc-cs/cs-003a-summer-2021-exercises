/**
 * Iteration vs. recursion.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cinttypes>
#include <iostream>

// Iterative version of Fibonacci.
// Linear time complexity.
uint64_t fibIterative(int n) {
  if (n <= 1) {
    return n;
  }

  uint64_t a = 1, b = 0, c;
  for (int i = 2; i <= n; i++) {
    c = a;
    a = a + b;
    b = c;
  }
  return a;
}

// Recursive version of Fibonacci.
// Exponential time complexity.
uint64_t fibRecursive(int n) {
  if (n <= 1) {
    return n;
  }
  return fibRecursive(n - 1) + fibRecursive(n - 2);
}

// Iterative version of factorial.
// Linear time complexity.
uint64_t factIterative(int n) {
  uint64_t f = 1;
  for (int i = 2; i <= n; i++) {
    f *= i;
  }
  return f;
}

// Recursive version of factorial, note the type change to uint64_t.
// Linear time complexity.
uint64_t factRecursive(int n) {
  if (n <= 1) {
    return 1;
  }
  return uint64_t(n) * factRecursive(n - 1);
}

int main() {
  std::cout << "factIterative(5) = " << factIterative(5) << std::endl;
  std::cout << "factRecursive(5) = " << factRecursive(5) << std::endl;

  std::cout << "fibIterative(10) = " << fibIterative(10) << std::endl;
  std::cout << "fibRecursive(10) = " << fibRecursive(10) << std::endl;
}
