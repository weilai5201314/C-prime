#include <stdio.h>
int main(void)
{
    char name1[11], name2[11];
    int count;
    printf("Please enter 2 name:\n");
    count = scanf("%5s %10s", name1, name2);
    printf("%d name,%s,%s", count, name1, name2);
}
//检测scanf的输入获取方式