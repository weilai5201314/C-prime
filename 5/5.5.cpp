#include <stdio.h>
#define SQU 64
int main(void)
{
    const double CRO = 2E16;
    double current, total;
    int count = 1;
    printf("\nsquare       gains          total     ");
    printf("fraction of \n");
    printf("             added          grains     world total \n");

    total = current = 1.0;
    printf("\n%4d /%13.2e /%12.2e /%12.2e\n", count, current, total, total / CRO);

    while (count < SQU)
    {
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d /%13.2e /%12.2e /%12.2e\n", count, current, total, total / CRO);
    }
    printf("That's all.\n");

    return 0;
}