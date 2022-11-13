#include <stdio.h>
int main(void)
{
    int ct;
    double time, power_2;
    int limit;

    printf("\nPlease enter the number you want:");
    scanf("%d", &limit);
    for (time = 0, power_2 = 1, ct = 1; ct <= limit; ct++, power_2 *= 2.0)
    {
        time += 1.0 / power_2;
        printf("time = %f when term = %d.\n", time, ct);
    }
}