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
  virtual ~Living() {
    std::cout << "Living destructor" << std::endl;
  }
};

class Animal : public Living {
 public:
  // The "virtual" keyword enables "polymorphism."
  void sound() {
    std::cout << "Cry" << std::endl;
  }
  ~Animal() {
    std::cout << "Animal destructor" << std::endl;
  }
};

class Cat : public Animal {
 public:
  void sound() {
    std::cout << "Meow" << std::endl;
  }
  ~Cat() {
    std::cout << "Cat destructor" << std::endl;
  }
};

class Dog : public Animal {
 public:
  void sound() {
    std::cout << "Bark" << std::endl;
  }
  ~Dog() {
    std::cout << "Dog destructor" << std::endl;
  }
};

int main() {
  // Uses "virtual destructors" for the Cat hierarchy.
  Living *clp = new Cat();
  delete clp;

  // Uses "virtual destructors" for the Dog hierarchy.
  Living *dlp = new Dog();
  delete dlp;
}
