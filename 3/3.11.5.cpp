#include<stdio.h>
int main (void)
{
    float year = 3.156e7;
    float wm;
    float ddd;

    printf("please enter your age.\n");

    scanf("%f",&wm);

    ddd= year*wm;

    printf("your haved %.3fsecond now.",ddd);

    return 0;
}