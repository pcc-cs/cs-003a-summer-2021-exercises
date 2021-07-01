/**
 * Copy constructors.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <string>
#include <iostream>

#define MIN_COURSES 0x1
#define MAX_COURSES 0x10

class Student {
 private:
  // Always initialize, either here or in the constructor.
  std::string _name;
  int _ncourses = 0;
  int _maxCourses = 0;
  std::string *_courses = nullptr;

 public:
  Student(const Student &s) {
    _name = s._name;
    _ncourses = s._ncourses;
    _maxCourses = s._maxCourses;

    // Duplicate the array.
    _courses = new std::string[_maxCourses];
    for (int i = 0; i < _ncourses; ++i) {
      _courses[i] = s._courses[i];
    }
  }

  // Add comments on functions so users can see them.
  // Student constructor: 1 <= maxCourses <= 16.
  // Will default to min/max if beyond the limits.
  Student(const char *name, int maxCourses) : _name(name) {
    // Basic checks, try to always do these.
    if (maxCourses < MIN_COURSES) {
      _maxCourses = MIN_COURSES;
    } else if (maxCourses > MAX_COURSES) {
      _maxCourses = MAX_COURSES;
    } else {
      _maxCourses = maxCourses;
    }
    _courses = new std::string[_maxCourses];
  }

  // Destructor.
  ~Student() {
    // Always check before trying to delete.
    if (_courses != nullptr) {
      delete [] _courses;
    }
    std::cout << "Instance for " << _name << " deleted" << std::endl;
  }

  bool addCourse(const std::string c) {
    // Called a "sad" path.
    if (_ncourses == _maxCourses) {
      return false;
    }

    // "Happy" path.
    // Note the post increment.
    _courses[_ncourses++] = c;
    return true;
  }

  void dump() {
    std::cout << "Student: " << _name << std::endl;
    for (int i = 0; i < _ncourses; ++i) {
      std::cout << i + 1 << ". " <<  _courses[i] << std::endl;
    }
  }
};

int main() {
  Student s1("Kim", 6);
  std::cout << "s1 address: " << &s1 << std::endl;
  s1.addCourse("CS8");
  s1.dump();

  Student s2 = s1;
  std::cout << "s2 address: " << &s2 << std::endl;
  s2.dump();
}
