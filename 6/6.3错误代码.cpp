#include <stdio.h>
int main(void)
{
    int n = 0;

    while (3 > n)
        printf("n is %d\n", n);
    n++;
    printf("that's all.\n");
}