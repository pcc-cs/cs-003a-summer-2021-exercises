/**
 * Student header.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

// This is a "header guard" to prevent multiple inclusions.
#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include "member.h"

class Student : public Member {
 private:
  int _ncourses = 0;
  int _maxCourses;
  std::string *_courses = nullptr;

 public:
  explicit Student(int, const char *, const char *[], int);
  bool addCourse(const char *);
  void dump();
};

#endif  // STUDENT_H_
