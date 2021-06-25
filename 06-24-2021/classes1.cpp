/**
 * Classes intro.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <iostream>
#include <string>
#include <cinttypes>

// All members are public by default.
struct Name {
  // "Member variables."
  std::string first;
  std::string last;
};

// All members are private by default.
// Explicitly use "private" to make it clear the members are private.
class Student {
 private:
  // "Encapsulation" (AKA "Information Hiding").
  // "Member variables" AKA "attributes."
  uint32_t _id;
  Name _name;
  double _gpa;

 public:
  // "Default constructor" with no args.
  Student() : _id(0), _name({"", ""}), _gpa(0.0) {
  }

  // "Constructor" to create an "instance" of the class.
  Student(uint32_t id, Name name, double gpa) : _id(id), _name(name), _gpa(gpa) {
  }

  // "Accessor" for _id to get value.
  // "Member function" AKA "method."
  uint32_t getId() {
    return _id;
  }

  // "Mutator" for _id to set value.
  // "Member function" AKA "method."
  void setId(uint32_t id) {
    _id = id;
  }

  void dump() {
    std::cout << std::endl;
    std::cout << "ID: " << _id << std::endl;
    std::cout << "Name: " << _name.first << " " << _name.last << std::endl;
    std::cout << "GPA: " << _gpa << std::endl;
  }
};

int main() {
  // Can access members freely in a struct.
  Name n1;
  n1.first = "Jimmy";
  n1.last = "Neutron";
  std::cout << n1.first << " " << n1.last << std::endl;

  // s1 here is an "instance" of the "type" Student.
  // Triggers the "default constructor."
  Student s1;
  // Not correct because compiler interprets it as a declaration.
  // Student s1();
  s1.setId(456223UL);
  // Not possible because _id is "private."
  // std::cout << s1._id << std::endl;
  s1.dump();

  // Triggers the constructor that takes 3 args.
  Student s2(774321, n1, 3.90);
  s2.dump();

  Student *s3p = new Student(934225, {"Yann", "LeCun"}, 3.0);
  s3p->dump();
  delete s3p;

  // Creates an array of 30 students.
  Student *sa1 = new Student[30];
  delete [] sa1;
}
