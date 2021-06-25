/**
 * Classes: inheritance.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <string>
#include <cstdio>

// "Base" class.
class Animal {
 private:
  double _weight;

 protected:
  explicit Animal(double weight) : _weight(weight) {
  }

  double getWeight() {
    return _weight;
  }
};

// "Derived" class.
// Note the keyword "public," don't forget that for now.
class Cat : public Animal {
 private:
  std::string _color;

 public:
  // This also creates an instance of the base class Animal.
  Cat(std::string color, double weight) : Animal(weight), _color(color) {
  }

  void dump() {
    // %s expects a "C string" that is a character array, so you need a c_str() on std::string.
    printf("Color: %s, Weight: %.1lf\n", _color.c_str(), getWeight());
  }
};

int main() {
  // Not allowed since the Animal constructor is protected.
  // However, the derived class Cat can instantiate it.
  // Animal a1(3.4);

  Cat c1("Black", 4.2);
  c1.dump();

  // OK because you aren't directly calling the Animal constructor.
  Animal a1 = c1;
}
