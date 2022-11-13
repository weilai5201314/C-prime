//末尾不会打印“\n”
#include <stdio.h>
void put1(const char *string)
{
    while (*string)
        putchar(*string++);
}
int main()
{
    char *name = "saljdla a";
    put1(name);
    // putchar(66);
}