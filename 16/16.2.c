#include <stdio.h>
#define SQUAE(X) X *X
#define PX(X) printf("The result is %d.\n", X)
#define FMT "X is %d.\n"
int main(void)
{
    int x = 5;
    int z;
    printf(FMT, x);
    z = SQUAE(x);
    printf("square(x) is %d\n", z);
    PX(z);
}