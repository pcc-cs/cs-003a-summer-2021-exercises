/**
 * Pointers.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

int si1 = 100;
int si2 = 11;

int main() {
  int *si1p = &si1;
  printf("si1 = %d, si1p = %p, *si1p = %d\n", si1, si1p, *si1p);

  int *si2p = &si2;
  printf("si2 = %d, si2p = %p, *si2p = %d\n", si2, si2p, *si2p);

  int i1 = 200;
  int *i1p = &i1;
  printf("i1 = %d, i1p = %p, *i1p = %d\n", i1, i1p, *i1p);

  (*i1p)++;
  printf("i1 = %d, i1p = %p, *i1p = %d\n", i1, i1p, *i1p);
}
