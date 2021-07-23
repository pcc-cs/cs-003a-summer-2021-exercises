/**
 * Templates: functions.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <cstdio>

struct Complex {
  double real, imaginary;
  Complex(double r, double i) : real(r), imaginary(i) {
  }
};

// Covers only int (or compatible type).
void swapInt(int *ap, int *bp) {
  int c = *ap;
  *ap = *bp;
  *bp = c;
}

// Covers only C string.
void swapString(const char **xp, const char **yp) {
  const char *z = *xp;
  *xp = *yp;
  *yp = z;
}

// Covers Complex struct.
void swapComplex(Complex *c1, Complex *c2) {
  Complex c3 = *c1;
  *c1 = *c2;
  *c2 = c3;
}

// Templated swap, covers any type.
template <class T>
void swap(T *ap, T *bp) {
  T c = *ap;
  *ap = *bp;
  *bp = c;
}

int main() {
  int a = 10, b = 20;
  printf("a = %d, b = %d\n", a, b);
  swapInt(&a, &b);
  printf("a = %d, b = %d\n", a, b);

  const char *x = "Hello", *y = "Hi";
  printf("x = %s, y = %s\n", x, y);
  swapString(&x, &y);
  printf("x = %s, y = %s\n", x, y);

  Complex c1(-1.0, 2.1);
  Complex c2(3.2, -0.7);
  printf("c1 = %.1lf + %.1lfi, c2 = %.1lf + %.1lfi\n",
    c1.real, c1.imaginary, c2.real, c2.imaginary);
  swapComplex(&c1, &c2);
  printf("c1 = %.1lf + %.1lfi, c2 = %.1lf + %.1lfi\n",
    c1.real, c1.imaginary, c2.real, c2.imaginary);

  // One implementation of swap() handles all types.
  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);

  swap(&x, &y);
  printf("x = %s, y = %s\n", x, y);

  swap(&c1, &c2);
  printf("c1 = %.1lf + %.1lfi, c2 = %.1lf + %.1lfi\n",
    c1.real, c1.imaginary, c2.real, c2.imaginary);
}
