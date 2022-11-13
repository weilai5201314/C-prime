#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("Please enter first number:"), scanf("%d", &a);
    printf("Then enter second number:"), scanf("%d", &b);
    printf("%d %% %d is %d.\n", b, a, b % a);

    printf("\n Enter next number:");
    scanf("%d", &c);
    while (c > 0)
    {
        printf("%d %% %d is %d.\n", c, a, c % a);
        printf("按数字继续,非正数结束,f进入坦克:");
        scanf("%d", &c);
    }
    printf("你好勇哦.");
}