#include <stdio.h>
// Euler project fibonacci even sum with 4M max.
int main(void){
  int cap = 4000000;
  int even_sum = 0;
  int i = 1;
  int prev = 0;
  int next;
  
  while (i < cap) {
    next = prev + i;
    prev=i;
    i=next;
    
    if (i % 2 == 0) {
      even_sum += i;
    }

    printf("%i\n %i", i, even_sum);
  }
  

  printf("Hello World\n");

  return 0;
}
