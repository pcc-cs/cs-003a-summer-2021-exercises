/**
 * Destructors with inheritance.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include "student.h"

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

int main() {
  const char *phones[] = {"858-123-4567", "913-222-2222"};
  Student *s1p = new Student(6, "Kimberly", phones, SIZE(phones));
  s1p->addCourse("CS-3A");
  s1p->dump();

  // Calls destructors of both base and derived classes.
  delete s1p;

  // Destructors get called automatically as the function returns.
  Student s2(2, "Pablo", phones, SIZE(phones));
}
