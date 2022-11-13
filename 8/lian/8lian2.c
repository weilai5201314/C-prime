#include <stdio.h>
int main()
{
    char ch;
    // for (int a = 0; (a % 10) != 0; a++)
    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
            printf("\\n");
        if (ch =='\t')
            printf("\\t");
        else
        {
            putchar(ch);
            printf("\n%d\n", ch);
        }
    }
}