#include <stdio.h>
#define STLEN 14
int main(void)
{
    char words[STLEN];
    puts("enter a string please:");
    fgets(words, STLEN, stdin);
    puts(words);
    fputs(words, stdout);
    printf("\n%s",words);
}