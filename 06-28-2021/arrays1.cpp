/**
 * Multidimensional arrays.
 *
 * Copyright (c) 2021, Sekhar Ravinutala.
*/

#include <cstdio>
#include <random>

// "Macro" that is like a function, but is replaced at compile time.
// Useful and faster if the code is simple.
// Always use a parenthesis!
#define rnd(n) (rand() % n)

// cpplint:ignore(runtime/threadsafe_fn)
auto buildArray(int rows, int cols) {
  int **a = new int *[rows];
  for (int i = 0; i < rows; i++) {
    a[i] = new int[cols];
  }
  return a;
}

// Can also declare as int (*a)[3].
void dump(int a[][3], int rows, int cols) {
  // Nested for loop to index into the array.
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%-5d", a[i][j]);
    }
    printf("\n");
  }
}

inline int inc(int x) {
  return x + 1;
}

int main() {
  // Initialization of multidimensional array.
  // Note that we had to specify the dimension for the second index.
  int ia1[][3] = {
    {10, 24},
    {-1, 20, 104},
  };
  dump(ia1, 2, 3);

  // Dynamically create multidimensional array.
  auto ia2 = buildArray(3, 5);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      ia2[i][j] = rnd(100);  // As if it is ia2][i][j] = (rand() % 100)
    }
  }

  // You can loop through them just like regular arrays.
  // Not compatible with dump().
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%-5d", ia2[i][j]);
    }
    printf("\n");
  }

  // Delete rows first and then then the array.
  // Note the [] for both the deletes.
  for (int i = 0; i < 3; i++) {
    delete [] ia2[i];
  }
  delete [] ia2;

  // Using "inline" function, which appears here completely.
  printf("inc(10) = %d\n", inc(10));
}
