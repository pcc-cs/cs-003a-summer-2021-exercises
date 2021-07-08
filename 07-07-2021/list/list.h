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
  size_t _size = 0;

 public:
  void add(int v);
  void insert(int v);
  void insert(int v, int iv);
  bool search(int v);
  bool remove(int v);
  size_t size();
  void dump();
};

#endif  // LIST_LIST_H_
