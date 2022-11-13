#include <stdio.h>
int main(void)
{
    float a, b, c;

    printf("please enter the downloads size and speed:");
    scanf("%f %f", &a, &b);
    c = a / b;
    printf("At %.2f megabits per second,a file of %.2f megabytes.\
    downloads in %.2f second.",
           b, a, c);

    return 0;
}