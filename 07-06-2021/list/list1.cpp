/**
 * Use linked list.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include "list.h"

int main() {
  List l1;
  int ia1[] = {10, -5, 200};

  for (int i : ia1) {
    l1.add(i);
  }
  l1.dump();

  l1.add(25);
  l1.add(-2);
  l1.dump();
}
