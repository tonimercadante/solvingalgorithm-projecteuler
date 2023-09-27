#include <stdio.h>
#include <math.h>
int main(void) {
  int num = pow(2,2);
  int limit = 100;
  long int sum = 0;
  long int sum_of_squares = 0;

  for (int i = 1; i <= 100 ; i++) {
    sum += i;
    sum_of_squares += pow(i, 2);
  };

  sum = pow(sum, 2);
  
  printf("alo %li", sum);
  printf("alo %li", sum_of_squares);
  printf("difference: %li", sum - sum_of_squares);

  return 0;
}
