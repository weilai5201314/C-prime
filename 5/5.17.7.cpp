#include <stdio.h>
void wm(double n);


int main (void)
{
    double a;
    printf("Please enter a double types number:");
    scanf("%lf",&a);
    wm(a);
    return 0;
}

void wm(double n)
{
    double m;
    m = n * n * n;
    printf("%.2lf", m);
}
