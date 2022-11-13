#include <stdio.h>
#include <string.h>
#include <float.h>

int main(void)
{
    double a = 1.0 / 3.0;
    float b = 1.0 / 3.0;

    printf("%f /%.12f /%.16f\n", a, a, a);
    printf("%f /%.12f /%.16f\n", b, b, b);
    printf("%d\n", DBL_DIG);
    printf("%d\n", FLT_DIG);

    return 0;
}