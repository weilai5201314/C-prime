#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ch;
    FILE *fp;
    char fname[50];

    printf("\nEnter the name of file:");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        printf("Failed to open file.Bye.\n");
        exit(1);
    }
    // getc(fp)获取打开文件的字符
    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    return 0;
}