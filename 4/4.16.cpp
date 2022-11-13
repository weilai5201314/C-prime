//使用*
#include <stdio.h>
int main(void)
{
    unsigned wid, pre;
    int number = 256;
    double weight = 242.5;

    printf("enter a width :\n"), scanf("%d", &wid), printf("the number is :%*d\n", wid, number);
    printf("now enter a width and precision:");
    scanf("%d %d", &wid, &pre);
    printf("weight =%*.*f\n", wid, pre, weight);

    return 0;
}