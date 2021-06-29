/**
 * Operator overloading.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include <cmath>

class Complex {
 private:
  double _real, _imaginary;
  friend Complex operator+(const Complex &, const Complex &);
  friend std::ostream &operator<<(std::ostream &, const Complex &);

 public:
  Complex(double real, double imaginary) : _real(real), _imaginary(imaginary) {
  }

  // No need for the first parameter, it is implied as the instance
  // on which this method is invoked.
  Complex operator-(const Complex &c) {
    return Complex(_real - c._real, _imaginary - c._imaginary);
  }

  double operator*() {
    return sqrt(_real * _real + _imaginary * _imaginary);
  }
};

// Need to have two args and must make this a friend.
Complex operator+(const Complex &c1, const Complex &c2) {
  return Complex(c1._real + c2._real, c1._imaginary + c2._imaginary);
}

// Must return std::ostream & (& is important because ostream can't be created).
std::ostream &operator<<(std::ostream &os, const Complex &c) {
  return os << "[" << c._real << ", " << c._imaginary << "]";
}

int main() {
  Complex c1(-0.5, 1.2), c2(2.1, -4.2);

  // Both these use operator overloading.
  Complex c3 = c1 + c2;
  std::cout << c3 << std::endl;

  std::cout << *(c1 - c2) << std::endl;

  // User operator overloading defined inside the class.
  std::cout << *c3 << std::endl;
}
