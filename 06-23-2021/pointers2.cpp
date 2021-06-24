/**
 * Pointers: memory management and custom types.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include <cinttypes>

typedef uint8_t *byteptr;

int main() {
  // Note that there is no "*" here.
  byteptr bp1 = new uint8_t[0x20];

  // Allocates a single double.
  double *dp1 = new double;

  // Create an unassigned pointer and then assign a value.
  double *dp2;  // NOT ready to be used, points nowhere!
  dp2 = dp1;  // Does NOT allocate memory.

  // Initialized to nullptr.
  double *dp3 = nullptr;

  // Allocates 16 * 1 = 16 bytes of character array.
  char *s1 = new char[0x10];

  // Allocates 256 * 8 = 2048 bytes of int64_t array.
  int64_t *la1 = new int64_t[0x100];

  // Note the "[]" for deallocating arrays.
  delete dp1;
  // Not allowed since that memory has already been de-allocated.
  // delete dp2;
  delete [] s1;
  delete [] la1;
}
