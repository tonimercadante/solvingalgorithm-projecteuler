#include <stdio.h>

int main(void) {
    int product, reversed, temp;

    for (int i = 1; i <= 999; i++) {
        for (int j = 1; j <= 999; j++) {
            product = i * j;
            temp = product;
            reversed = 0; // Initialize reversed to zero for each product

            while (temp > 0) {
                int digit = temp % 10;
                reversed = reversed * 10 + digit;
                temp /= 10;
            }

            if (product == reversed) {
                printf("product: %i, rev: %i\n", product, reversed);
            }
        }
    }

    return 0;
}
