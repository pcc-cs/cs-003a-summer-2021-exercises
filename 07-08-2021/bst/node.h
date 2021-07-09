/**
 * Binary search tree node declaration.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#ifndef BST_NODE_H_
#define BST_NODE_H_

#include <string>

// Add destructor to free the nodes.
class Node {
 private:
  std::string _value;
  Node *_left = nullptr;
  Node *_right = nullptr;

 public:
  explicit Node(std::string v);
  Node *addLeft(std::string v);
  Node *addRight(std::string v);
  Node *find(std::string v);
};

#endif  // BST_NODE_H_
