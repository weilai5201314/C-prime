#include <stdio.h>
#define SPACE ' '
int main()
{
    char ch;
    ch = getchar();
    while ((ch = getchar()) != '\n')
    // while (ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        // ch = getchar();
    }
    putchar(ch);
}