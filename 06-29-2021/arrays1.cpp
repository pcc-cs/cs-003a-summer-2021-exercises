/**
 * Arrays of classes.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include <cstdlib>

// Macros.
#define rnd() ((rand() % 100) / 10.0)
#define rc() (Complex(rnd(), rnd()))
#define rc3() {rc(), rc(), rc()}
#define rows(ca) (sizeof(ca) / sizeof(ca[0]))

class Complex {
 private:
  double _real, _imaginary;

 public:
  Complex(double real, double imaginary) : _real(real), _imaginary(imaginary) {
  }

  Complex conjugate() {
    return Complex(_real, -_imaginary);
  }

  // The "const" keyword at the end promises not to change
  // the contents of the class instance.
  void dump() const {
    printf("[%.1lf, %.1lf]\n", _real, _imaginary);
  }
};

void cadump(const Complex ca[][3], int rows) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < 3; j++) {
      printf("ca[%d][%d] = ", i, j);
      ca[i][j].dump();
    }
  }
  printf("\n");
}

int main() {
  Complex ca1[][3] = {
    {rc(), rc(), rc()},
    {rc(), rc(), rc()},
    {rc(), rc(), rc()},
    {rc(), rc(), rc()},
    {rc(), rc(), rc()},
  };
  cadump(ca1, rows(ca1));

  // Using macro rc3(), which summarily plugs the definition at
  // pre-processing time.
  Complex ca2[][3] = {rc3(), rc3(), rc3(), rc3()};
  cadump(ca2, rows(ca2));
}
