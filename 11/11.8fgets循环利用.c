#include <stdio.h>
#include <unistd.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];

    puts("enter strings:");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
        fputs(words, stdout), sleep(3);
    puts("Done");
}
//对于超出部分，到底是先行打印还是缓存区存放一起打印