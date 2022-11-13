#include <stdio.h>
#define TWO 2
#define OW "wo dao\
shi hai ke yi jie shou"
#define FOUR TWO *TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"

int main(void)
{
    int x = TWO;
    PX;

    x = FOUR;
    printf(FMT, x);
    printf("%s \n", OW);
    printf("TWO : ow\n");

    return 0;
}