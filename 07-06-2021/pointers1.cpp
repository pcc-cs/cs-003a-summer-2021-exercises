/**
 * Pointers.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include <cinttypes>

int main() {
  // ia1 is an array, but can be treated like a pointer.
  int ia1[] = {10, 20, 30};

  printf("sizeof(ia1) = %ld\n", sizeof(ia1));

  // Adding 1 increases address by 4 bytes.
  printf("ia1 = %p\n", ia1);
  printf("ia1 + 1 = %p\n", ia1 + 1);
  printf("&ia1 = %p\n", &ia1);

  int *p1 = ia1;
  printf("p1 = %p\n", p1);
  printf("&p1 = %p\n", &p1);

  // auto figures out the type AT COMPILE TIME.
  auto uia1 = new uint64_t[0x100];

  // Adding 1 increases address by 8 bytes.
  printf("uia1 = %p\n", uia1);
  printf("uia1 + 1 = %p\n", uia1 + 1);
}
