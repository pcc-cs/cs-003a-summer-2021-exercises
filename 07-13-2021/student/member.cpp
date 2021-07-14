/**
 * PCC member definition.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include "member.h"

Member::Member(const char *name, const char *phones[], int nphones) {
  _name = name;  // Triggers single parameter constructor.
  _phones = new std::string[nphones];
  for (int i = 0; i < nphones; i++) {
    _phones[i] = phones[i];  // Triggers single parameter constructor.
  }
}
