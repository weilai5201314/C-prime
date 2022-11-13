#include <stdio.h>
#define SIZE 4
int main()
{
    int somedata[SIZE] = {1209, 1232};
    int i;
    printf("%2s %4s", "i", "somedata\n");
    for (i = 0; i < SIZE; i++)
        printf("%2d %4d\n", i, somedata[i]);
}