#include <stdbool.h>
#include <stdio.h>

bool is_prime(int number) {
  if (number <= 1) {
    return false;
  }

  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      return false;
    }
  }

  return true;
}

int calculate_largest_prime(int ceil) {
  int prime_count = 0;
  int largest_prime = 0;

  int i = 0;
  while (prime_count < ceil) {
    if (is_prime(i)) {
      largest_prime = i;
      prime_count++;
    }

    i++;
  };

  return largest_prime;
}

int main(void) {
  int ceil = 10001;

  int largest_prime = calculate_largest_prime(ceil);

  printf("MAX PRIMEIS: %d", largest_prime);
}
