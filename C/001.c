/**
* Challenge 001
*/
#include <stdio.h>

int main(void) {
  int r = 0, i = 1;
  for (i = 1; i < 1000; i++) {
    r += (((i % 3) == 0) || ((i % 5) == 0)) ? i : 0;
  }
  printf ("%i\n", r);
  return 0;
}
