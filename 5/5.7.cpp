#include <stdio.h>
int main(void)
{
    int a, b;

    a = b = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("%d %d", a, b);
}