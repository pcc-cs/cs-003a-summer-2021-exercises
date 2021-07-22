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
  auto end = scores.end();

  // it is an "iterator" that is a class, but behaves like a pointer.
  std::cout << (it == end ? "End" : "Not end") << std::endl;
  std::cout << *it << std::endl;  // 3.2
  it++;
  std::cout << (it == end ? "End" : "Not end") << std::endl;
  std::cout << *it << std::endl;  // 4.7
  it += 2;
  std::cout << (it == end ? "End" : "Not end") << std::endl;
  std::cout << *it << std::endl;  // 3.1
  it++;
  std::cout << (it == end ? "End" : "Not end") << std::endl;

  // Loop by checking against the "sentinel" end() value.
  std::cout << std::endl;
  for (auto it = scores.begin(); it != scores.end(); it++) {
    std::cout << *it << std::endl;
  }

  // Shortcut version of the above.
  std::cout << std::endl;
  for (auto v : scores) {
    std::cout << v << std::endl;
  }
}
