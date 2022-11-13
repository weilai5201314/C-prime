//一个拖沓和错误很多的程序
#include <stdio.h>
int main()
{
    int guess = 1;
    char wm;

    printf("\n一大堆没用的话。");
    printf("开始猜");
    printf("\n is your number %d?\n", guess);
    while ((wm = getchar()) != 'y')
    {
        if (wm == 'n')
            printf("\nwell,tnen itis %d?\n", ++guess);
        // fflush(stdin);
        else
            printf("i cant identify this word\n");
        while (getchar() != '\n')
            continue;
    }
    printf("i knew i will do it!");

    return 0;
}