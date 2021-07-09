/**
 * Using binary trees.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include "node.h"

#define ASSERT_EQUAL(a, b) printf("%s\n", a == b ? "PASS" : "FAIL")

int main() {
  Node *hello = new Node("hello");
  Node *ask = hello->addLeft("ask");
  Node *fly = ask->addRight("fly");
  Node *sink = hello->addRight("sink");
  Node *ink = sink->addLeft("ink");
  Node *tap = sink->addRight("tap");

  ASSERT_EQUAL(hello->find("sink"), sink);
  ASSERT_EQUAL(ask->find("ant"), nullptr);
}
