/**
 * Student header.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

// This is a "header guard" to prevent multiple inclusions.
#ifndef STUDENT_STUDENT_H_
#define STUDENT_STUDENT_H_

#include <string>
#include "member.h"

class Student : public Member {
 private:
  int _ncourses = 0;
  int _maxCourses;
  std::string *_courses = nullptr;

 public:
  Student(int, const char *, const char *[], int);
  Student(const Student &);
  ~Student();
  bool addCourse(const char *);
  void dump();
};

#endif  // STUDENT_STUDENT_H_
