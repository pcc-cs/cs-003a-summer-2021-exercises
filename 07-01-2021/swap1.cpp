/**
 * Swap using pointers and reference.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>

// Increments the value "in place, using pointers.
void inc1(int *ip) {
  (*ip)++;
}

// Also increments in place, but using reference.
void inc2(int &i) {
  i++;
}

// Swap using pointers.
void swap(int *ap, int *bp) {
  int c = *ap;
  *ap = *bp;
  *bp = c;
}

int main() {
  int a, b;

  // Prompt.
  printf("Enter a, b: ");

  // Formatted read, note the & for a and b.
  scanf("%d, %d", &a, &b);
  printf("a = %d, b = %d\n", a, b);

  // Strongly preferred because it's clear the value will be altered.
  inc1(&a);
  printf("a = %d, b = %d\n", a, b);

  // Not clear the value will be altered.
  inc2(b);
  printf("a = %d, b = %d\n", a, b);

  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);
}
