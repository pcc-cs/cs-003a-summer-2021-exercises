/**
 * Templates: functions.
 *
 * Copyright (c) 2021, Sekhar Ravinutala
 */

#include "util.h"

// Templated swap, covers any type.
template <class T>
void swap(T *ap, T *bp) {
  T c = *ap;
  *ap = *bp;
  *bp = c;
}
