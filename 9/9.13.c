#include <stdio.h>
void interchange(int u, int v);
int main(void)
{
    int x = 5, y = 10;
    printf("\nx = %d and y = %d.\n", x, y);

    printf("Now x = %d and y = %d.", x, y);

    return 0;
}
void interchange(int u, int v)
{
    int temp;
    temp = u;
    u = v;
    v = temp;
}