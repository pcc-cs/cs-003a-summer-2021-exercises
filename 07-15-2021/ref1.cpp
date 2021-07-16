/**
 * Reference variables.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

void check1() {
  printf("*** Check 1 ***\n");

  int i1 = 10;
  int i2 = i1;
  printf("i1 = %d, i2 = %d\n", i1, i2);
  i2 = 20;
  printf("i1 = %d, i2 = %d\n", i1, i2);
}

void check2() {
  printf("*** Check 2 ***\n");

  int i1 = 10;
  int &i2 = i1;
  printf("i1 = %d, i2 = %d\n", i1, i2);
  i2 = 20;
  printf("i1 = %d, i2 = %d\n", i1, i2);
}

void check3() {
  printf("*** Check 3 ***\n");

  int i1 = 10;
  int *i2p = &i1;
  printf("i1 = %d, i2 = %d\n", i1, *i2p);
  *i2p = 20;
  printf("i1 = %d, i2 = %d\n", i1, *i2p);
}

int &inc(int *ip) {
  (*ip)++;
  return *ip;
}

int main() {
  check1();
  printf("\n");
  check2();
  printf("\n");
  check3();
  printf("\n");

  int n1 = 100;
  printf("n1 = %d\n", n1);
  int &n2 = inc(&n1);
  printf("n1 = %d\n", n1);
  n2++;
  printf("n1 = %d\n", n1);
}
