/**
 * Friends.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

class Color {
 private:
  double _r, _g, _b;

  // Prototype must match exactly!
  // Think before using friends, they bypass encapsulation.
  friend void dump(const Color &);

 public:
  Color(double r, double g, double b) : _r(r), _g(g), _b(b) {
  }
};

// Note the "const" and "&" below.
void dump(const Color &c) {
  printf("%-5.1f%-5.1f%-5.1f\n", c._r, c._g, c._b);
}

int main() {
  Color c1(0.55, 0.1, 0.91);

  // dump() has access to private members because it is a "friend."
  dump(c1);

  // But others do not: the below code is invalid.
  // printf("c1._r = %5.1f\n", c1._r);
}
