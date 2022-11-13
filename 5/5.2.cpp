#include <stdio.h>
#define ADJ 7.31
int main(void)
{
    const double SCA = 0.333;
    double shoe, foot;

    printf("Shoe size foot length\n");
    shoe = 3.0;
    while (++shoe < 18.5) // shoe < 18.5
    {
        foot = SCA * shoe + ADJ;
        printf("%10.1f /%15.2f inches\n", shoe, foot);
        // shoe = shoe + 1.0;
    }
    printf("\nIf the shoe fits,wear it.\n");

    return 0;
}