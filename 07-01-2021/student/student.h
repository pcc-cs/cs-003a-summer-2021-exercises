/**
 * Student header.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

// This is a "header guard" to prevent multiple inclusions.
#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>

class Student {
 private:
  int _ncourses = 0;
  int _maxCourses;
  std::string *_courses;

 public:
  explicit Student(int);
  bool addCourse(const std::string);
  void dump();
};

#endif  // STUDENT_H_
