#include <stdio.h>
int main(void)
{
    int a = 0, b;
    char wm;
    for (b = 1; b < 7; b++)
    {
        for (wm = ('A' + b); wm <= ('A' + a); wm++)
            printf("%c", wm);
        printf("\n");
        a += b;
    }
}