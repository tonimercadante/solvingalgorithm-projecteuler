#include <stdio.h>

int calculate_sum_multiples(ceil)
{
    int total = 0;

    for (int i = 0; i < ceil; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            total += i;
        }
    }

    return total;
}

int main(void)
{
    int ceil = 1000;
    int total = calculate_sum_multiples(ceil);

    printf("Total is: %d \n", total);

    return 0;
}
