/**
 * Templates: other uses.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <string>
#include <iostream>

template <class T, class U>
class Pair {
 private:
  T _tv;
  U _uv;

 public:
  Pair(T tv, U uv) : _tv(tv), _uv(uv) {
  }
};

namespace {
  const char *errors[] = {
    "out of memory",
    "invalid input",
    "segmentation error",
  };
}
template <int en>
void showError() {
  std::cerr << errors[en] << std::endl;
}

int main() {
  Pair<int, std::string> p1(100, "Sally");
  showError<2>();
}
