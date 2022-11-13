#include <stdio.h>
#include <float.h>
#include <limits.h>
int main(void)
{
    printf("some number limits for this :\n");
    printf("\nbigger int %d\n", INT_MAX);
    printf("small int %d\n", INT_MIN);
    printf("smallest long long %lld\n", LLONG_MIN);
    printf("on  byte %d\n", CHAR_BIT);
    printf("largest double :%e\n", DBL_MAX);
    printf("smallest normal float %e\n", FLT_MIN);
    printf("float precision = %d \n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);

    return 0;
}