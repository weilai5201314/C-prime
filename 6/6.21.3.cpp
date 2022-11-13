#include <stdio.h>
int main(void)
{
    int a = 0, b;
    char wm = 'F';

    for (b = 0; b < 6; b++)
    {
        for (; a <= b; a++)
        {
            wm = 'F' - a;
            printf("%c", wm);
        }
        a = 0;
        printf("\n");
    }
}