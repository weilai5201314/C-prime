//错误使用函数
#include <stdio.h>
int max();
int main()
{
    printf("bale    %d\n", max(3));
    printf("alsd    %d\n", max(3.0, 5.0));
}
int max(n, m)
int n, m;
{
    return n > m ? n : m;
}
