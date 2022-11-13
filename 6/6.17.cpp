#include <stdio.h>
#define ROW 6
#define CHAR 10
int main(void)
{
    int row;
    char ch;

    for (row = 0; row < ROW; row++)
    {
        for (ch = 'A'; ch < ('A' + CHAR); ch++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }
}