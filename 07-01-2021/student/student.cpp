/**
 * Student implementation.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include <string>
#include "student.h"

Student::Student(int maxCourses) {
  _maxCourses = maxCourses;
  _courses = new std::string[maxCourses];
}

bool Student::addCourse(const std::string c) {
  // Called a "sad" path.
  if (_ncourses == _maxCourses) {
    return false;
  }

  // "Happy" path.
  // Note the post increment.
  _courses[_ncourses++] = c;
  return true;
}

void Student::dump() {
  for (int i = 0; i < _ncourses; ++i) {
    std::cout << i + 1 << ". " << _courses[i] << std::endl;
  }
}
