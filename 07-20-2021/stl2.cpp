/**
 * Standard Template Library (STL): set.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <set>
#include <iostream>

#define IN(s, v) (s.count(v) > 0)
#define BOOL(b) (b ? "Yes" : "No")

int main() {
  std::set<int> is1;

  // Inserts at most once.
  is1.insert(10);
  is1.insert(20);
  is1.insert(20);
  is1.insert(20);
  for (int n : is1) {
    std::cout << n << std::endl;
  }

  std::cout << "is1 has 10: " << BOOL(IN(is1, 10)) << std::endl;
  std::cout << "is1 has 15: " << BOOL(IN(is1, 15)) << std::endl;
}
