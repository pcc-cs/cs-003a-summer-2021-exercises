/**
 * Standard Template Library (STL): vector.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

bool desc(double d1, double d2) {
  return d1 > d2;
}

bool descAbs(double d1, double d2) {
  return abs(d1) > abs(d2);
}

typedef std::string (*msg_func)();
void print(int n, msg_func mf) {
  for (int i = 0; i < n; i++) {
    std::cout << mf() << std::endl;
  }
}

std::string randString() {
  return std::to_string(rand());
}

int main() {
  std::vector<int> iv1;

  // Add manually.
  iv1.push_back(10);
  iv1.push_back(20);

  // Iterate over values directly (not via index).
  for (int n : iv1) {
    std::cout << n << std::endl;
  }
  std::cout << std::endl;

  // Iterate using indexes.
  for (int i = 0; i < iv1.size(); i++) {
    // You can treat vector like a regular array for indexing.
    std::cout << iv1[i] << std::endl;
  }
  std::cout << std::endl;

  // Direct initialization.
  std::vector<double> dv1 = {
    10.2, -0.7, 2.1, 34.9, -7.3,
  };
  for (double n : dv1) {
    std::cout << n << std::endl;
  }
  std::cout << std::endl;

  // Sort using a "comparator" function (dcmp here).
  // The function "desc" is passed as an argument directly.
  // That is possible because functions are "first class objects" in C++.
  std::sort(dv1.begin(), dv1.end(), desc);
  for (double n : dv1) {
    std::cout << n << std::endl;
  }
  std::cout << std::endl;

  // Sort using a different comparator.
  std::sort(dv1.begin(), dv1.end(), descAbs);
  for (double n : dv1) {
    std::cout << n << std::endl;
  }
  std::cout << std::endl;

  // Note that we're passing the function randString(), NOT calling it.
  print(10, randString);  // NOT print(10, randString())
}
