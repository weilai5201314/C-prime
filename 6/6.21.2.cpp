#include <stdio.h>
int main(void)
{
    int a, b;
    int B = 5;
    for (b = 0; b < B; b++)
    {
        for (a = (1 + b); 0 < a; a--)
            printf("%c", '$');
        printf("\n");
    }
}
