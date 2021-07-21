/**
 * Standard Template Library (STL): map.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>

class Student {
 private:
  int _id = rand();
  std::string _name;

 public:
  explicit Student(const char *name) : _name(name) {
  }
  std::string string() const {
    return std::string("[") + std::to_string(_id) + ", " + _name + "]";
  }
};

int main() {
  // Note how the types are specified.
  std::map<std::string, double> gpas1;

  // "Sally,", "Miguel," and "Kim" are "keys" and the GPAs are the "values."
  gpas1["Sally"] = 3.91;
  gpas1["Miguel"] = 3.80;
  gpas1["Kim"] = 3.47;

  for (auto e : gpas1) {
    // first = key, second = value.
    printf("%10s %-.2lf\n", e.first.c_str(), e.second);
  }

  Student sally("Sally"), miguel("Miguel"), kim("Kim");
  std::map<Student *, double> gpas2;
  gpas2[&sally] = 3.91;
  gpas2[&miguel] = 3.80;
  gpas2[&kim] = 3.47;

  for (auto e : gpas2) {
    printf("%20s %-.2lf\n", e.first->string().c_str(), e.second);
  }
  printf("Sally: %.2lf\n", gpas2[&sally]);
  gpas2[&sally] = 3.32;
  printf("Sally: %.2lf\n", gpas2[&sally]);
}
