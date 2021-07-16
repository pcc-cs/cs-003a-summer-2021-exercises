/**
 * Polymorphism.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>

// This is an "abstract" class because it has a "pure" virtual function.
// It cannot be instantiated.
class Living {
 public:
  // "Pure" virtual function.
  virtual void sound() = 0;
};

class Animal : public Living {
 public:
  // The "virtual" keyword enables "polymorphism."
  void sound() {
    std::cout << "Cry" << std::endl;
  }
};

class Cat : public Animal {
 public:
  void sound() {
    std::cout << "Meow" << std::endl;
  }
};

class Dog : public Animal {
 public:
  void sound() {
    std::cout << "Bark" << std::endl;
  }
};

// Note that this function is completely unaware of the derived classes.
void sound(Animal *ap) {
  std::cout << "This animal makes the sound: ";
  ap->sound();
}

void check1() {
  Animal a1;
  a1.sound();

  Cat c1;
  c1.sound();

  Dog d1;
  d1.sound();
}

// They lose the identity on assignment.
void check2() {
  Cat c1;
  Animal c1a = c1;  // Makes a full copy of the Animal part of c1.
  c1a.sound();

  Dog d1;
  Animal d1a = d1;  // Makes a full copy of the Animal part of d1.
  d1a.sound();
}

// Polymorphism. Note the Animal creation by reference.
void check3() {
  Cat c1;
  Animal &c1a = c1;
  c1a.sound();

  Dog d1;
  Animal &d1a = d1;
  d1a.sound();
}

void check4() {
  Cat c1;
  sound(&c1);

  Dog d1;
  sound(&d1);
}

void check5() {
  Cat c1;
  Living *c1lp = &c1;
  c1lp->sound();

  Dog d1;
  Living *d1lp = &d1;
  d1lp->sound();
}

int main() {
  check1();
  std::cout << std::endl;
  check2();
  std::cout << std::endl;
  check3();
  std::cout << std::endl;
  check4();
  std::cout << std::endl;
  check5();
}
