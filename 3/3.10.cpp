//使用转义序列
#include<stdio.h>
int main(void)
{
    float sal;

    printf("\a enter  sal:");  //1
    printf(" $       \b\b\b\b\b\b\b");//2
    scanf("%f",&sal);
    printf("\n\t$%.2f a mouth is $%.2f a year.",sal,sal*12.0);
    printf("\rGee!\n");
    
    return 0;
}
