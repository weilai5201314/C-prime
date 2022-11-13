#include <stdio.h>
#include<iso646.h>
#define PERIOD '.'
int main()
{
    char ch;
    int charcount = 0;
    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '"' and ch != '\'')
            charcount++;
    }
    printf("There ar %d non-quote charaters.\n", charcount);

}