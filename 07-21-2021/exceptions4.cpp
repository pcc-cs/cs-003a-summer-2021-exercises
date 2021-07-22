/**
 * Exceptions: inherited classes.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <string>
#include <iostream>

class Error {
 private:
  std::string _msg;

 public:
  explicit Error(std::string msg) : _msg(msg) {
  }
  std::string what() {
    return _msg;
  }
};

class BoundsError : public Error {
 public:
  explicit BoundsError(std::string msg) : Error(msg) {
  }

  std::string what() {
    return std::string("bounds error: ") + Error::what();
  }
};

class ValueError : public Error {
 public:
  explicit ValueError(const char *msg) : Error(msg) {
  }

  std::string what() {
    return std::string("value error: ") + Error::what();
  }
};

void process(int n) {
  if (n < 0 || n > 10) {
    throw BoundsError("0 <= n <= 10");
  }
  if (n == 0) {
    throw ValueError("n cannot be 0");
  }
  if (n == 10) {
    throw "can't be 10";
  }
}

int main() {
  std::cout << "Enter numbers one/one." << std::endl;
  int n;
  while (std::cin >> n) {
    // Ordering of the catches is important.
    // Base classes will satisfy exceptions of the derived class type.
    // Avoid catch-all (...) errors unless absolutely necessary.
    try {
      process(n);
    } catch (BoundsError e) {
      std::cerr << e.what() << std::endl;
    } catch (ValueError e) {
      std::cerr << e.what() << std::endl;
    } catch (Error e) {
      std::cerr << e.what() << std::endl;
    } catch (...) {
      std::cerr << "unknown error" << std::endl;
    }
  }
}
