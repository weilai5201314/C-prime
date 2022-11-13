#include <stdio.h>
int main(void)
{
    float wm;

    printf("\nplease enter the number:");
    scanf("%f", &wm);
    printf("The in put is %.2f or %.2e.\n", wm, wm);
    printf("The in put is %+.2f or %.2e", wm, wm);

    return 0;
}