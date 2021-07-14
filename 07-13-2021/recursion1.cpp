/**
 * Stack overflow without base case.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cinttypes>

// No base case to stop the recursion!
uint64_t badFib(int n) {
  return badFib(n - 1) + badFib(n - 2);
}

int main() {
  badFib(10);
}
