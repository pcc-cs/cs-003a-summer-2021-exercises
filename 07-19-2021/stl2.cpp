/**
 * Standard Template Library (STL): tuples, sets.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include <tuple>
#include <vector>

typedef std::tuple<uint64_t, std::string> student_t;

// Note that we're passing by reference to prevent copying.
void dump(const student_t &s) {
  std::cout << std::get<0>(s) << ": " << std::get<1>(s) << std::endl;
}

int main() {
  student_t s1 = {543342, "Johnny Sokko"};
  dump(s1);
  std::get<0>(s1) = 342112;
  dump(s1);

  std::vector<student_t> sv1 = {
    {976342, "Jimmy Neutron"},
    {853421, "Jessica Alba"},
    {231657, "Kimberly Johnson"},
  };
  for (const student_t &s : sv1) {
    dump(s);
  }
}
