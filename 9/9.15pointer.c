#include <stdio.h>
void interchange(int *u, int *v);
int main()
{
    int x = 5, y = 10;
    printf("\n x = %d,y = %d\n", x, y);
    interchange(&x, &y);
    printf("Now x = %d,y = %d", x, y);

    return 0;
}
void interchange(int *u, int *v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}