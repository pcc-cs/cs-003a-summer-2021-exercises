/**
 * Lambda functions.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <vector>
#include <cstdio>
#include <algorithm>

bool desc(int a, int b) {
  return a > b;
}

void dump(const char *prompt, std::vector<int> iv) {
  printf("%s: ", prompt);
  for (int i = 0; i < iv.size(); i++) {
    if (i > 0) {
      printf(", ");
    }
    printf("%d", iv[i]);
  }
  printf("\n");
}

int main() {
  std::vector<int> iv1 = {-20, 44, 101, 2, -7, 100};
  dump("initial", iv1);
  std::sort(iv1.begin(), iv1.end(), desc);
  dump("after desc()", iv1);

  // Sort using "lambda" function.
  std::sort(iv1.begin(), iv1.end(), [](int a, int b) {
    return a < b;
  });
  dump("after lambda", iv1);

  // You can assign lambdas to variables or pass them as arguments.
  auto ldesc = [](int a, int b) {
    return a > b;
  };
  std::sort(iv1.begin(), iv1.end(), ldesc);
  dump("after ldesc", iv1);
}
