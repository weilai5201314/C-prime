#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("A   A\t");
    printf("%d\n", strcmp("A", "A"));
    printf("A   a\t");
    printf("%d\n", strcmp("A", "a"));
    printf("A   B\t");
    printf("%d\n", strcmp("A", "B"));
    printf("B   A\t");
    printf("%d\n", strcmp("B", "A"));
    printf("C   A\t");
    printf("%d\n", strcmp("C", "A"));
}
//前大 正
//前小 负
//相等 0