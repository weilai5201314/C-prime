#include <stdio.h>
int main()
{
    // char ch;
    // int a = 0;
    // while ((ch = getchar()) != '#')
    //     a++;
    // printf("%d", a);
    
    char ch;
    while ((ch = getchar()) != EOF)
        putchar(ch);
}