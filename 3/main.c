#include <stdio.h>
#include <stdbool.h>

int main(void) {
  long prime = 600851475143;
  bool isPrime;

  for (long index = 0; index <= prime; index++) {
    isPrime = true;
    if (prime % index == 0) {
      for (long innerIndex = 2; innerIndex < index; innerIndex++) {
        if (index % innerIndex == 0) {
          isPrime = false;
          break;
        } 
      }
      
      if (isPrime) {
        printf("%li\n", index);
      }
    }
  }
  printf("prime\n");

  return 0;
}
