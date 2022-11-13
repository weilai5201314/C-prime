#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    a = 1, b = 1;
    printf("\nPlease enter a date:");
    scanf("%d", &c); //scanf("%d", &d);
    // while (0 < d)
    // {
    //     while (b++ < c)
    //     {
    //         a = b * b + a;
    //     }
    //     printf("\nmoney is %d\n", a);
    //     scanf("%d %d",c,d);
    // }
    // printf("ou wa li");
    while (b++ < c)
    {
        a = b * b + a;
    }
    printf("\nmoney is %d\n", a);
}
