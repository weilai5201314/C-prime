#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("Please enter a day number:");
    scanf("%d", &a);
    while (0 < a)
    {
        b=a/7;
        c=a%7;
        printf("\n%d days are %d weeks and %d days.\n",a,b,c);
        printf("\n 继续吗，输入数字继续,输入非正数结束,按f进入坦克:");
        scanf("%d",&a);
      
    }
    printf("你好勇哦。");
}