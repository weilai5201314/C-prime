#include <stdio.h>
int main(void)
{
    printf("Please enter a number:");
    int a, b;
    scanf("%d", &a);
    b = 11 + a;

    while (a < b)
    {

        printf("%d  ", a++);
    }
}