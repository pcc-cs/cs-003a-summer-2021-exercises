/**
 * Standard Template Library (STL): iterator.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <vector>
#include <iostream>

int main() {
  std::vector<double> scores = {-3.2, 4.7, 9.9, 3.1};
  auto it = scores.begin();

  // it is an "iterator" that is a class, but behaves like a pointer.
  std::cout << *it << std::endl;
  it++;
  std::cout << *it << std::endl;
  it += 2;
  std::cout << *it << std::endl;
}
