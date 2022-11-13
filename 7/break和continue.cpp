#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    printf("先输入bc");
    scanf("%d%d", &b, &c);
    printf("再输入a");
    while ((d = scanf("%d", &a)) < b)
    {
        printf("\nthe max is %d", b);
        if (b < c)
        {
            printf("\npro is %d", c);
            // scanf("%d%d%d", &a, &b, &c);

            break;
            // continue;
        }
    }
    printf("ou wa li");
}