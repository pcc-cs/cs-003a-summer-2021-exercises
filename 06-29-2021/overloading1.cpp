/**
 * Overloading unary operators.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>

struct Complex {
  double real;
  double imaginary;

  // Must take arg by reference (&).
  Complex &operator++() {
    ++real;
    return *this;  // Must de-reference with a *.
  }

  // Do NOT return by reference because c is an "automatic" variable.
  // Need the "int" argument (without name) to mark this as post increment.
  Complex operator++(int) {
    Complex c = *this;
    ++real;
    return c;
  }
};

std::ostream& operator<<(std::ostream& os, const Complex& c) {
  return os << "[" << c.real << ", " << c.imaginary << "]";
}

// Must take arg by reference (&).
// Takes the Complex instance as argument because this function is outside.
Complex &operator--(Complex &c) {
  --c.real;
  return c;
}

int main() {
  Complex c1 = { 1.2, -0.8 };

  std::cout << c1 << std::endl;  // [1.2, -0.8]
  std::cout << ++c1 << std::endl;  // [2.2, -0.8]
  std::cout << --c1 << std::endl;  // [1.2, -0.8]
  std::cout << c1++ << std::endl;  // [1.2, -0.8]
  std::cout << c1 << std::endl;  // [2.2, -0.8]
}
