/**
 * Exceptions.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <iostream>

enum class Error {
  NEGATIVE = 101, INVALID
};

// Do NOT use this!
// NOT SUPPORTED in new versions of C++.
int add(int a, int b) throw(const char *) {
  if (a < 0 || b < 0) {
    throw Error::NEGATIVE;
  }
  if (a > 10 || b > 10) {
    throw "numbers should be <= 10";
  }
  return a + b;
}

int main() {
  int a, b;
  while (std::cin >> a >> b) {
    // Error exceptions cannot be caught!
    try {
      std::cout << add(a, b) << std::endl;
    } catch (Error e) {
      std::cerr << "error: " << int(e) << std::endl;
    } catch (const char *e) {
      std::cerr << "error: " << e << std::endl;
    }
  }
}
