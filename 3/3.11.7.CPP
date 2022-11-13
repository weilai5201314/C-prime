#include <stdio.h>
int main(void)
{
    float yc = 2.54;
    float wm;
    float ls;

    printf("please enter your high number in inch :");
    scanf("%f", &wm);

    ls = wm * yc;
    printf("your high number in cm is %.3fcm.", ls);

    return 0;
}