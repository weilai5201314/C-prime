#include <stdio.h>
int main(void)
{
    const int ROW = 6;
    const int CHAR = 6;
    int row;
    char ch;

    for (row = 0; row < ROW; row++)
    {
        for (ch = ('A' + row); ch < ('A' + CHAR); ch++)
            printf("%c", ch);
        printf("\n");
    }
}