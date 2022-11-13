#include <stdio.h>
#include <stdbool.h>
int main()
{
    unsigned long num, div;
    bool isPrime;
    printf("\nPlease enter an integer for analyisi;"), printf("Enter q to quit.\n");
    while (scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if (num % div == 0)
            {
                if ((div * div) != num)
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                else
                    printf("%lu is divisible by %lu.\n", num, div);
                isPrime = false;
            }
        }
        if (isPrime)
        {
            if (num > 1)
                printf("%lu is prime.\n", num);
            else
                printf("%ld is not enough.\n", num);
        }
        // printf("%ld\n", div);     测试div的变化时候
        printf("\nPlease enter another for analysisi;");
        printf("q to quit\n");
    }
    printf("Bye.\n");
}