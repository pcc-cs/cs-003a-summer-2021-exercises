/**
 * Use linked list.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include "list.h"

// ASSERT_EQUAL checks if two values are equal.
#define ASSERT_EQUAL(l, a, b) printf("%s: %s\n", l, a == b ? "PASS" : "FAIL")

#define BOOL(b) (b ? "YES" : "NO")

int main() {
  List l1;
  int ia1[] = {10, -5, 200};

  for (int i : ia1) {
    l1.add(i);
  }
  l1.dump();  // 10 -> -5 -> 200

  // Automated "unit" test.
  ASSERT_EQUAL("add", l1.size(), 3);
  for (int v : ia1) {
    ASSERT_EQUAL("add", l1.search(v), true);
  }

  l1.insert(40);
  l1.dump();  // 40 -> 10 -> -5 -> 200

  l1.insert(50, 40);
  l1.dump();  // 40 -> 50 -> 10 -> -5 -> 200
  l1.insert(30, 15);
  l1.dump();  // 40 -> 50 -> 10 -> -5 -> 200 -> 30

  printf("l1.remove(40) = %s\n", BOOL(l1.remove(40)));
  l1.dump();  // 50 -> 10 -> -5 -> 200 -> 30
  printf("l1.remove(40) = %s\n", BOOL(l1.remove(40)));
  l1.dump();  // 50 -> 10 -> -5 -> 200 -> 30

  // Automated "unit" test.
  int si1[] = {40, 200, -5, 25};
  bool exp1[] = {false, true, true, false};
  for (int i = 0; i < 4; ++i) {
    ASSERT_EQUAL("search", l1.search(si1[i]), exp1[i]);
  }
}
