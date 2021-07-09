/**
 * Binary search tree node definition.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include "node.h"

Node::Node(std::string v) : _value(v) {
}

Node *Node::addLeft(std::string v) {
  return _left = new Node(v);
}

Node *Node::addRight(std::string v) {
  return _right = new Node(v);
}

Node *Node::find(std::string v) {
  // "Recursively" calls itself.
  if (v < _value) {
    return _left == nullptr ? nullptr : _left->find(v);
  }
  if (v > _value) {
    return _right == nullptr ? nullptr : _right->find(v);
  }
  return this;
}
