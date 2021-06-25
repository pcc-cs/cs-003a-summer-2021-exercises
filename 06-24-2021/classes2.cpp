/**
 * Classes as Abstract Data Types.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include <cmath>

// This is an "Abstract Data Type" because the implementation is hidden.
// You only get to create it and do some operations on it.
class Complex {
 private:
  double _real, _imaginary;

 public:
  Complex(double real, double imaginary) : _real(real), _imaginary(imaginary) {
  }

  // This is able to access the private member of another Complex instance.
  Complex add(Complex c) {
    return Complex(_real + c._real, _imaginary + c._imaginary);
  }

  double modulus() {
    return sqrt(_real * _real + _imaginary * _imaginary);
  }

  Complex conjugate() {
    return Complex(_real, -_imaginary);
  }

  void dump() {
    // Prints each to a width of 10, with 1 decimal place as double.
    printf("%10.1lf%10.1lf\n", _real, _imaginary);
  }
};

int main() {
  Complex c1(35.0, 4.0);
  c1.dump();

  Complex c2(-1.0, 2.5);
  c2.dump();

  Complex c3 = c1.add(c2);
  c3.dump();

  Complex c4 = c3.conjugate();
  c4.dump();

  Complex c5 = c3.add(c4);
  c5.dump();

  printf("c5.modulus() = %.1lf\n", c5.modulus());
}
