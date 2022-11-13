#include<stdio.h>
int main (void)
{
    float wm;
    
    scanf("%f",&wm);

    printf("\n%.3f\n",wm);
    printf("%.3e\n",wm);
    printf("%.3a",wm);


    return 0;
}