#include<stdio.h>
int main(void)
{
    long double  drop= 3.0e23;
    float kua = 950;
    float wm;
    float l6;  //使用float和long double 都算对

    printf("please enter kua number :");
    
    scanf("%f",&wm);

    l6 = wm * kua * drop;
    
    printf("\nthe drop number is %e.",l6); //%e或者%LE
    printf("\r woshi\n");        //如果使用了回车\n，末尾一定要接上\n

    return 0;


}