/**
 * Student implementation.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include <string>
#include "student.h"

Student::Student(int maxCourses, const char *name, const char *phones[], int nphones) :
  Member(name, phones, nphones) {
  _maxCourses = maxCourses;
  if (_maxCourses > 0) {
    _courses = new std::string[_maxCourses];
  }
}

// Note that Student doesn't have access to Member's private attributes.
// So you will need to pass s to Member's copy constructor.
Student::Student(const Student &s) : Member(s) {
  std::cout << "Student copy constructor" << std::endl;

  _maxCourses = s._maxCourses;
  _ncourses = s._ncourses;
  if (_maxCourses > 0) {
    _courses = new std::string[_maxCourses];
  }
  for (int i = 0; i < _ncourses; i++) {
    _courses[i] = s._courses[i];
  }
}

Student &Student::operator=(const Student &s) {
  std::cout << "Student assignment operator overloading" << std::endl;

  // Call copy explicitly.
  Member::operator=(s);

  // Free allocated memory (if any).
  if (_courses != nullptr) {
    delete [] _courses;
  }

  // Copy the values.
  _maxCourses = s._maxCourses;
  _ncourses = s._ncourses;
  if (_maxCourses > 0) {
    _courses = new std::string[_maxCourses];
  }
  for (int i = 0; i < _ncourses; i++) {
    _courses[i] = s._courses[i];
  }

  // Return self.
  return *this;
}

bool Student::addCourse(const char *c) {
  if (_ncourses == _maxCourses) {
    return false;
  }

  _courses[_ncourses++] = c;
  return true;
}

Student::~Student() {
  std::cout << "~Student()" << std::endl;

  delete [] _courses;
}

void Student::dump() {
  Member::dump();
  for (int i = 0; i < _ncourses; ++i) {
    std::cout << i + 1 << ". " << _courses[i] << std::endl;
  }
}
