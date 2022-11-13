#include <stdio.h>
#define PSQE(x) printf("The square of " #x " is %d\n", ((x) * (x)))

#define IS(x, y) printf("I am %d %s boy", y, x);
int main(void)
{
    int y = 5;
    PSQE(y);
    PSQE(2 + 4);

    char s[20] = {"你好"};
    IS(s, y)
    return 0;
}