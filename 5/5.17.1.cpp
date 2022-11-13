#include <stdio.h>
#define wm 60
int main(void)
{
    float second, min, hour;

    printf("Please ernter a min number :"), scanf("%f", &min);
    while (min > 0)
    {
        second = min * 60, hour = min / 60;
        printf("The seconds is %ds,the hours is %1.2fhour.\n", (int)second, hour);
        printf("\nplease enter number 按F进入tank\n");
        scanf("%f", &min);
    }
    printf("ou wali");

    return 0;
}
