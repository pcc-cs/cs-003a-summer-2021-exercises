/**
 * C++ types.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include <string>

// Use namespaces explicitly.
// using namespace std;

int sum(int a, int b) {
  return a + b;
}

int main() {
  // Can't do this because C++ is "strongly typed."
  // It throws an error at "compile time" because it is "statically typed."
  // int i1 = std::string("Hi!");

  int a = 10, b = 20;
  std::cout << "sum(" << a << ", " << b << ") = " << sum(a, b) << std::endl;
  // sum("10", "20") will NOT work due to strong typing!

  // Type determined AT COMPILE TIME!
  auto a1 = a;
  std::cout << "a1 = " << a1 << std::endl;

  auto a2 = std::string("Hello!");
  std::cout << "a2 = " << a2 << std::endl;
}
