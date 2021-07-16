/**
 * PCC member declaration.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#ifndef STUDENT_MEMBER_H_
#define STUDENT_MEMBER_H_

#include <cinttypes>
#include <cstdlib>
#include <string>

class Member {
 private:
  uint32_t _id = random();
  std::string _name;
  int _nphones = 0;
  std::string *_phones = nullptr;

 public:
  Member(const char *, const char *[], int);
  Member(const Member &);
  ~Member();
  Member &operator=(const Member &);
  void dump();
};

#endif  // STUDENT_MEMBER_H_
