#include <stdio.h>

int main (void) {
  int target = 2520;
  long x = 0;
  long i = 1;

  while (1) {

      
      for (int j = 1; j <= 20; j++) {
        printf("j: %i i: %li \n", j, i);
        if(i % j != 0) {
          x = 0;
          break;
        }

        x = i;
      }
    i++;


    if(x != 0) {
      break;
    }
  }

  printf("Valor: %li x: %li", i, x);  

  return 0;
}
