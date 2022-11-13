//缩短字符串长度的函数
#include <stdio.h>
#include <string.h>
void fit(char *, unsigned int);

int main(void)
{
    char mesg[] = "Things shoule be as simple as possible,"
                  " but not simpler.";

    puts(mesg);
    fit(mesg, 38);
    puts(mesg);
    puts("Lets look ad xxxx string.");
    puts(mesg + 39);

    return 0;
}

void fit(char *string, unsigned int size)
{
    if (strlen(string) > size)
        string[size] = '\0';
}