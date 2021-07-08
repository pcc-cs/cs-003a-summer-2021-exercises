/**
 * List definition.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include "list.h"

void List::add(int v) {
  Node *np = new Node(v);

  // Always first check for empty list.
  if (_head == nullptr) {
    _head = np;
    _tail = np;
    return;
  }

  // List is not empty.
  _tail->_next = np;
  _tail = _tail->_next;
}

void List::dump() {
  // Iteration of the list.
  for (Node *np = _head; np != nullptr; np = np->_next) {
    if (np != _head) {
      printf(" -> ");
    }
    printf("%d", np->_value);
  }
  printf("\n");
}
