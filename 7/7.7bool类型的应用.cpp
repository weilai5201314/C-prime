//添加了8.4的重定向方法
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP EOF
//#define STOP '|'
int main(void)
{
    int c;
    // char ch;
    char prev;
    long n_chars = 0l;
    int n_lines = 0, n_words = 0, p_lines = 0;
    bool inword = false;
    printf("\nEnter text to be analyzed(| to terminate);\n");
    prev = '\n';
    while ((c = getchar()) != STOP)
    {
        n_chars++;
        if (c == '\n')
            n_lines++;
        if (!isspace(c) && !inword) // inword 是否会改变
        {
            inword = true, n_words++;
        }
        if (isspace(c) && inword)
            inword = false;
        prev = c;
    }
    if (prev != '\n')
        p_lines = 1;
    printf("characters = %ld,words = %d,lines = %d,", n_chars, n_words, n_lines);
    printf("paratial lines = %d\n", p_lines);
}