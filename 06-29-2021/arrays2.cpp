/**
 * Arrays as class members.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <string>
#include <iostream>

#define MAX_COURSES 6

class Student {
 private:
  int _ncourses = 0;
  std::string _courses[MAX_COURSES];

 public:
  bool addCourse(const std::string c) {
    // Called a "sad" path.
    if (_ncourses == MAX_COURSES) {
      return false;
    }

    // "Happy" path.
    // Note the post increment.
    _courses[_ncourses++] = c;
    return true;
  }

  void dump() {
    for (int i = 0; i < _ncourses; ++i) {
      std::cout << i + 1 << ". " <<  _courses[i] << std::endl;
    }
  }
};

int main() {
  Student s1;
  s1.addCourse("CS 3A");
  s1.addCourse("PSY 1B");
  s1.dump();
}
