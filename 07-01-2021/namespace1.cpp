/**
 * Namespaces.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>

// Declares a reference to an external function in percent.cpp.
double percent(double, double);

// Not visible outside this file.
namespace {
  int x = 10;
}

namespace ns1 {
  int x = 100;
  namespace a {
    int x = 1;
    namespace b {
      int x = -1;
    }
  }
}

namespace ns2 {
  int x = -100;
}

// Alias for a namespace.
namespace nab = ns1::a::b;

// Try to avoid this!
// using namespace ns1::a::b;

int main() {
  std::cout << "x = " << x << std::endl;
  std::cout << "ns1::x = " << ns1::x << std::endl;
  std::cout << "ns1::a::x = " << ns1::a::x << std::endl;
  std::cout << "ns1::a::b::x = " << ns1::a::b::x << std::endl;
  std::cout << "nab::x = " << nab::x << std::endl;
  std::cout << "ns2::x = " << ns2::x << std::endl;

  std::cout << "percent(4, 5) = " << percent(4, 5) << std::endl;
}
