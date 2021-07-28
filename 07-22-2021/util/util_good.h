/**
 * Template header.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#ifndef UTIL_UTIL_GOOD_H_
#define UTIL_UTIL_GOOD_H_

// Templated swap, covers any type.
template <class T>
void swap(T *ap, T *bp) {
  T c = *ap;
  *ap = *bp;
  *bp = c;
}

#endif  // UTIL_UTIL_GOOD_H_
