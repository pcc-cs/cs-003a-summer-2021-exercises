/**
 * List definition.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include "list.h"

// add appends v to list.
void List::add(int v) {
  Node *np = new Node(v);
  _size++;

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

// insert inserts v at the head.
void List::insert(int v) {
  Node *np = new Node(v);
  ++_size;

  np->_next = _head;
  _head = np;
  if (_tail == nullptr) {
    _tail = np;
  }
}

// insert inserts v after first iv.
// If iv is not found, add at the end.
void List::insert(int v, int iv) {
  // Value in list.
  for (Node *ip = _head; ip != nullptr; ip = ip->_next) {
    if (ip->_value == iv) {
      Node *np = new Node(v);
      ++_size;
      np->_next = ip->_next;
      ip->_next = np;
      return;
    }
  }

  // Value not in list.
  add(v);
}

// search looks up v in list and returns true if found.
bool List::search(int v) {
  for (Node *np = _head; np != nullptr; np = np->_next) {
    if (np->_value == v) {
      return true;
    }
  }
  return false;
}

// remove deletes first instance of v.
bool List::remove(int v) {
  // List is empty.
  if (_head == nullptr) {
    return false;
  }

  // Check head.
  if (_head->_value == v) {
    Node *dp = _head;
    _head = _head->_next;
    delete dp;
    if (_head == nullptr) {
      _tail = nullptr;
    }
    return true;
  }

  for (Node *np = _head; np->_next != nullptr; np = np->_next) {
    if (np->_next->_value == v) {
      Node *next = np->_next;
      np->_next = np->_next->_next;
      delete next;
      return true;
    }
  }

  return false;
}

// size return size of the list.
size_t List::size() {
  return _size;
}

// dump prints contents of list to stdout.
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
