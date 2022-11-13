#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int a_port, b_pre;
    a_port = a++, b_pre = ++b;
    printf("a    a_port   b    b_pre\n");
    printf("%1d /%5d /%5d/%5d\n", a, a_port, b, b_pre);
}