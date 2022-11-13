#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFSIZE 4096
#define SLEN 81
char *s_gets(char *st, int n);
void append(FILE *source, FILE *dest);

int main(void)
{
    FILE *fa, *fs; // fa目标 fs源文件
    int files = 0;
    char file_app[SLEN];
    char file_src[SLEN];
    int ch;

    puts("Enter name of file:");
    s_gets(file_app, SLEN);
    //检测
    if ((fa = fopen(file_app, "a+")) == NULL)
        ;
    if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
        ;
    puts("First name of source file:");
    while (s_gets(file_src, SLEN) && file_src[0] != '\0')
    {
        if (strcmp(file_src, file_app) == 0)
            fputs("append false", stderr);
        else if ((fs = fopen(file_src, "r")) == NULL)
            ;
        else
        {
            if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                ;
                continue;
            }
            append(fs, fa);
            if (ferror(fs) != 0)
                ;
            if (ferror(fa) != 0)
                ;
            fclose(fs);
            files++;
            puts("Next file :");
        }
    }
    printf("Done xxx");
    rewind(fa);
    while ((ch = getc(fa)) != EOF)
        putchar(ch);
    puts("Done dis");
    fclose(fa);
    return 0;
}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    static char temp[BUFSIZE]; //只分配一次
    while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
        fwrite(temp, sizeof(char), bytes, dest);
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n'); //查找换行符
        if (find)                //如果地址不是null
            *find = '\0';        //放置空字符
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}