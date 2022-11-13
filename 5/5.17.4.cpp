#include <stdio.h>
int main(void)
{
    printf("Please enter a number in cm:");
    float a,b;
    scanf("%f", &a);
    while (0 < a)
    {
        b=a/23;
        printf("\n %.2f cm is %.2f yl.\n",a,b);
        printf("\n Still enter the number(非正数结束):");
        scanf("%f",&a);


    }
    printf("坦克呢，速速参战。");
}