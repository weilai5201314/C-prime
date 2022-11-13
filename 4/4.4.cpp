#include <stdio.h>
#define wm 3.14159

int main(void)
{
    float area, circum, radius;

    printf("what is the radius of your pizze?\n"), scanf("%f", &radius);

    area = wm * radius * radius;
    circum = 2.0 * wm * radius;

    printf("your basic pizza parameters are as follows: \n");
    printf("circumference = %1.2f,area = %1.2f\n", circum, area);

    return 0;
}