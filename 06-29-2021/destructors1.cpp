/**
 * Destructors.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <string>
#include <iostream>

class Student {
 private:
  int _ncourses = 0;
  int _maxCourses;
  std::string *_courses;

 public:
  explicit Student(int maxCourses) {
    _maxCourses = maxCourses;
    _courses = new std::string[maxCourses];
  }

  bool addCourse(const std::string c) {
    // Called a "sad" path.
    if (_ncourses == _maxCourses) {
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
  Student s1(6);
  s1.addCourse("CS 3A");
  s1.addCourse("PSY 1B");
  s1.dump();
}
