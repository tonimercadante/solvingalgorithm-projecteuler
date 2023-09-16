#include <stdio.h>

int main (void) {
  long product, reversed,temp, largest = 0;
  for (long i = 100; i <= 999; i++) {
    for (long j = 100; j <= 999; j++) {
      product = i * j;
      temp = product;
      int num = 123;

      while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
      }

      if (product == reversed && product > largest) {
        largest = product;
      }
  
      reversed = 0;

    }

  }

  printf("largest: %li\n", largest);

  return 0;
}
