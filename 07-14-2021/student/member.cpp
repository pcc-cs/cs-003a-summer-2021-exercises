/**
 * PCC member definition.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include "member.h"

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

Member::Member(const char *name, const char *phones[], int nphones) {
  _name = name;
  _nphones = nphones;
  if (_nphones > 0) {
    _phones = new std::string[_nphones];
  }
  for (int i = 0; i < _nphones; i++) {
    _phones[i] = phones[i];
  }
}

Member::Member(const Member &m) {
  std::cout << "Member copy constructor" << std::endl;

  _name = m._name;
  _nphones = m._nphones;
  if (_nphones > 0) {
    _phones = new std::string[_nphones];
  }
  for (int i =  0; i < _nphones; i++) {
    _phones[i] = m._phones[i];
  }
}

Member::~Member() {
  std::cout << "~Member(): " << _name << std::endl;

  if (_phones != nullptr) {
    delete [] _phones;
  }
}

void Member::dump() {
  std::cout << "ID: " << _id << ", Name: " << _name << std::endl;
}
