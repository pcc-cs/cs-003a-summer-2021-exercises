/**
 * Copying with operator overloading.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include "student.h"

#define SIZE(a) (sizeof(a) / sizeof(a[0]))

int main() {
  const char *phones[] = {"123-456-7890"};
  Student s1(3, "Linda", phones, SIZE(phones));
  s1.addCourse("CS-3A");
  s1.addCourse("MUSC-01A");
  s1.dump();

  Student s2(2, "Jimmy", nullptr, 0);
  s2.dump();

  // Does NOT call copy constructor.
  // As an exercise, create operator overloading to prevent double free.
  s2 = s1;
  s2.dump();
}
