/**
 * Fibonacci.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cinttypes>
#include <iostream>

uint64_t fib(int n) {
  return n <= 1 ? n : fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[]) {
  int n;

  // Print out all the args.
  for (int i = 0; i < argc; i++) {
    std::cout << "argv[" << i << "] = " << argv[i] << std::endl;
  }

  // Use number in arg if present.
  if (argc > 1) {
    n = std::stoi(argv[1]);
    std::cout << fib(n) << std::endl;

    // This quits the program regardless of where, with code 0.
    exit(0);
  }

  // Otherwise, interactively read numbers.
  while (std::cin >> n) {
    std::cout << "fib(" << n << ") = " << fib(n) << std::endl;
  }
}
