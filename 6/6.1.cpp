#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("\nplease enter a number:");
    status = scanf("%ld", &sum);
    while (status == 1)
    {
        sum = sum + num;
        printf("\nPlease enter next :");
        status = scanf("%ld", &num);
    }
    printf("Those sum to %ld\n", sum);

    return 0;
}