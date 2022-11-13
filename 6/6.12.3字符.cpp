//字符代替数字
#include <stdio.h>
int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
        printf("The value for %c is %d.\n", ch, ch); 
}