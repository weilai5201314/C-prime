#include <stdio.h>

void put1(const char *string)
{
    while (*string)
        putchar(*string++);
}

int put2(const char *string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return (count);
}

int main()
{
    put1("if i`d as much money");
    put1(" as i could spend,\n");
    printf("i count %d characters.\n",
           put2("I never would cry old chairs to mend."));
    return 0;
}