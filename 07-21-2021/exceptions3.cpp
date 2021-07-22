/**
 * Multiple exceptions.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <string>
#include <iostream>

enum class Error {
  TOO_LARGE, TOO_SMALL
};

std::ostream &operator<<(std::ostream &os, const Error e) {
  switch (e) {
    case Error::TOO_LARGE:
      os << "number too large";
      break;
    case Error::TOO_SMALL:
      os << "number too small";
      break;
    default:
      os << "unknown error";
  }
  return os;
}

class Failure {
 private:
  std::string _msg;

 public:
  explicit Failure(const char *msg) : _msg(msg) {
  }
  std::string what() {
    return _msg;
  }
};

int func2(int);

// Throws const char *, Error, Failure.
int func1(int n) {
  if (n < 0) {
    throw "n should be >= 0";
  }

  return func2(n);
}

int func2(int n) {
  if (n > 10) {
    throw Error::TOO_LARGE;
  }
  if (n == 0) {
    throw Failure("n cannot be 0");
  }
  return 2 * n;
}

int main() {
  // Note that func1(10) never runs because control went to catch after func1(-1).
  try {
    func1(-1);
    func1(10);
  } catch (const char *e) {
    std::cerr << e << std::endl;
  }
  std::cout << std::endl;

  std::cout << "Enter numbers one/one." << std::endl;
  int n;
  while (std::cin >> n) {
    try {
      std::cout << func1(n) << std::endl;
    } catch (const char *e) {
      std::cerr << "error: " << e << std::endl;
    } catch (Error e) {
      std::cerr << "error: " << e << std::endl;
    } catch (Failure e) {
      std::cerr << "error: " << e.what() << std::endl;
    }
  }
}
