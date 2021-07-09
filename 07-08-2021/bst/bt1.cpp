/**
 * Using binary search trees.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include "node.h"

int main() {
  Node *hello = new Node("hello");
  Node *ask = hello->addLeft("ask");
  Node *fly = ask->addRight("fly");
  Node *sink = hello->addRight("sink");
  Node *ink = sink->addLeft("ink");
  Node *tap = sink->addRight("tap");
}
