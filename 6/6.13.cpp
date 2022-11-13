#include <stdio.h>
int main(void)
{
    const int FIR = 46;
    const int NEXT = 20;
    int ounces;
    float cost;

    printf("ounces ,cost\n");
    for (ounces = 1, cost = FIR; ounces <= 16; ounces++, cost += NEXT)
        printf("%5d   $%4.2f\n", ounces, cost / 100);
}