#include <stdio.h>
int main(void)
{
    float high, high2;

    printf("\nplease enter your high with cm:");
    scanf("%f", &high);

    high2 = high / 100;

    printf("dabny, you are %.2fm.", high2);

    return 0;
}