/**
 * Operator overloading redux.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

class Color {
 private:
  double _r, _g, _b;

 public:
  Color(double r, double g, double b) : _r(r), _g(g), _b(b) {
  }

  void operator*() {
    printf("[%.3lf, %.3lf, %.3lf]\n", _r, _g, _b);
  }
};

int main() {
  Color c1(0.32, 0.124, 0.7);
  *c1;
}
