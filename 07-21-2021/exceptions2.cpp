/**
 * Exceptions.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

// Time complexity: O(n).
int sumTo(int n) {
  if (n < 0) {
    throw "n should >= 0";
  }

  int s = 0;
  for (int i = 1; i <= n; i++) {
    s += i;
  }
  return s;
}

// Sum values and then call sumTo().
int sumToAll(int nums[], int count) {
  int n = 0;
  for (int i = 0; i < count; i++) {
    n += nums[i];
  }
  return sumTo(n);
}

int main() {
  int nums1[] = {2, 3, 5};
  int nums2[] = {-7, 1, 2};
  try {
    std::cout << sumToAll(nums1, SIZE(nums1)) << std::endl;  // Good
    std::cout << sumToAll(nums2, SIZE(nums2)) << std::endl;  // Throws exception
  } catch (const char *e) {
    std::cout << "error: " << e << std::endl;
  }
}
