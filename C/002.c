#include <stdio.h>
#include <stdlib.h>

int main () {
  int i, j;
  int MAX = 100;
  int number[MAX];
  int sum = 0;

  for (i = 0; i < MAX; i++) {
    if (i == 0 || i == 1) {
      if (i == 0) {
        number[0] = 1;
      } else {
        number[1] = 2;
      }
    }else {
      number[i] = number[i-1]+number[i-2];
    }
    if (number[i] > 4000000) {
      break;
    }
    if (number[i] % 2 == 0) {
      sum = sum + number[i];
    }
  }
  printf("%d", sum);
}
