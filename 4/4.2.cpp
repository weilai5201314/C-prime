//使用不同类型字符串
#include<stdio.h>
#define PRAISE "i am a good boy."

int main(void)
{
    char name[40];

    printf("whats your name?\n");
    scanf("%s",name);
    printf("hello,%s,%s\n",name,PRAISE);

    return 0;
}