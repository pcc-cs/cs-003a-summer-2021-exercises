/**
 * Templates: classes.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include <iostream>

template <class T>
struct Node {
  T value;
  Node<T> *next = nullptr;
  explicit Node(T v) : value(v) {
  }
};

template <class T>
class Stack {
 private:
  Node<T> *_head = nullptr;

 public:
  void push(T v) {
    Node<T> *np =  new Node<T>(v);
    np->next = _head;
    _head = np;
  }
  T pop() {
    if (_head == nullptr) {
      throw "stack is empty";
    }
    Node<T> *np = _head;
    T v = _head->value;
    _head = _head->next;
    delete np;
    return v;
  }
};

int main() {
  Stack<int> is1;
  is1.push(10);
  is1.push(20);
  std::cout << is1.pop() << std::endl;

  Stack<const char *> ss1;
  ss1.push("First");
  ss1.push("Second");
  ss1.push("Third");
  try {
    for (;;) {
      std::cout << ss1.pop() << std::endl;
    }
  } catch (const char *e) {
    std::cout << e << std::endl;
  }
}
