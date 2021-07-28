/**
 * Constants.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>

class Complex {
 private:
  double _r, _i;

 public:
  Complex(double r, double i) : _r(r), _i(i) {
  }
  void scale(double s) {
    _r *= s;
    _i *= s;
  }
  // The const promises that the method will not change the members.
  void dump() const {
    std::cout << "[" << _r << ", " << _i << "]" << std::endl;
  }
};

// Equivalent to const, but replaced during pre-processing.
#define SIZE 100

namespace {
  // Note the keyword "const" that prevents size from changing.
  const int size = 100;
}

// The keyword const indicates that the contents of s cannot be changed.
void print(const char *s) {
  std::cout << s << std::endl;
}

int main() {
  std::cout << "SIZE: " << SIZE << std::endl;
  std::cout << "size: " << size << std::endl;

  // You can define constants inside functions.
  const double pi = 3.1415926;

  const char *s1 = "hello";  // You can change the variable, but not its contents.
  s1 = "hi";  // OK because you are not changing the contents.
  // Can't do: s1[0] = 'j'

  // Note that you cannot assign a const char * to char * (program will crash).
  char * const s2 = new char[0x10];  // You can change the contents, but not its value.
  s2[0] = 'j';  // OK because you can change the contents.
  // Can't do: s2 = "hi"
  delete [] s2;

  const char * const s3 = "hello";
  // Can't do: s3[0] = 'j';
  // Can't do: s3 = "hi";

  const Complex *c1p = new Complex(-2.0, 1.7);
  // Can't do: c1p->scale(2);
  c1p->dump();
  delete c1p;
}
