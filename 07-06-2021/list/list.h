/**
 * List declaration.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#ifndef LIST_LIST_H_
#define LIST_LIST_H_

#include "node.h"

class List {
 private:
  Node *_head = nullptr;
  Node *_tail = nullptr;

 public:
  void add(int);
  void dump();
};

#endif  // LIST_LIST_H_
