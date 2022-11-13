#include <stdio.h>
int main(void)
{
    char str[80] = "i am a human";
    char *str2 = "you too.";

    puts("ok");
    puts(str);
    puts(&str[5]);
    puts(str2 + 3);
}