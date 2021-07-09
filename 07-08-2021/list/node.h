/**
 * Node declaration.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#ifndef LIST_NODE_H_
#define LIST_NODE_H_

class Node {
 private:
  int _value;
  Node *_next = nullptr;
  friend class List;

 public:
  explicit Node(int);
};

#endif  // LIST_NODE_H_
