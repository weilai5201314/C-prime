#include <stdio.h>
#define ADJ 7.31

int main(void)
{
    const double SCA = 0.333;
    double shoe, foot;

    shoe = 9.0;
    foot = shoe * SCA + ADJ;

    printf("Shoe size foot length.\n");
    printf("%10.1f /%15.2f inches", shoe, foot);

    return 0;
}
