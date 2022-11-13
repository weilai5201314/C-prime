#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char a;
    int words = 0, huan = 0, kong = 0;
    printf("\nPlease enter sentence:\n");
    while ((a = getchar()) != '#')
    {
        if (a == '\n')
            huan++;
        if (a == ' ')
            kong++;
        if (isalnum(a) == 1)
            words++;
    }
    printf("\nwords is %d,kongbai %d,huanhang%d.", words, kong, huan);
}