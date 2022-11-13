#include <stdio.h>
int main()
{
    int a = 11020;
    a &= 0x11234;
    printf("%d", a);
}