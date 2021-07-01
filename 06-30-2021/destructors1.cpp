/**
 * Destructors.
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
  // Variables like these are "automatic" and created on the stack.
  // They are destroyed once the function exits.
  Student s1("Jim", 6);
  s1.addCourse("CS 3A");
  s1.addCourse("PSY 1B");
  s1.dump();

  // Destructor is called when delete runs.
  Student *s2p = new Student("Lisa", 3);
  delete s2p;

  // Array of students.
  Student s3a[] = {
    Student("Yan", 4),
    Student("Kim", 10),
    Student("Bret", 0),
  };

  // You can assign an array to a pointer as if they are the same type.
  // Do not delete this because it points to an array that will be deleted.
  Student *s3ap = s3a;

  // Can't assign to an array however.
  // s3a = s3ap;

  // You can also iterate just like an array.
  for (int i = 0; i < 3; i++) {
    s3ap[i].dump();
  }
}
