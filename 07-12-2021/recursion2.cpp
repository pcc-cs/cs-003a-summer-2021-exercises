/**
 * Fibonacci: naive vs. memoization.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include <cinttypes>
#include <cstring>

#define MAX 0x100
#define EQUAL(s1, s2) (strcmp(s1, s2) == 0)

// Naive approach using recursion.
// Exponential time complexity.
uint64_t fibNaive(int n) {
  // Base case.
  if (n <= 1) {
    return n;
  }

  // Recursive step.
  return fibNaive(n - 1) + fibNaive(n - 2);
}

// The () at the end initializes the array to zero.
uint64_t *memo = new uint64_t[MAX]();

// Using memoization.
// O(n) time complexity (linear).
uint64_t fibMemo(int n) {
  // Base case.
  if (n <= 1) {
    return n;
  }

  // Standard pattern for caching.
  if (memo[n] == 0) {
    // Recursive step only in case of memo miss.
    memo[n] = fibMemo(n - 1) + fibMemo(n - 2);
  }
  return memo[n];
}

int main(int argc, char *argv[]) {
  // Basic checks to make sure we're getting all the args.
  if (argc < 3) {
    std::cerr << "Usage: " << argv[0] << " memo|naive <number>" << std::endl;
    exit(1);
  }

  // Call the appropriate function based on arg.
  int n = std::stoi(argv[2]), f;
  if (EQUAL("memo", argv[1])) {
    f = fibMemo(n);
  } else if (EQUAL("naive", argv[1])) {
    f = fibNaive(n);
  }
  std::cout << f << std::endl;
}
