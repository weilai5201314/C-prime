#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXTITL 41
#define MAXAUTL 40
#define MAXBKS 10
char *s_gets(char *st, int n);

typedef struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
} BOK;

int main()
{
    struct book library[MAXBKS];
    int count = 0;
    int index, filecount;
    FILE *pbooks;
    int size = sizeof(BOK);

    //打开文件
    if ((pbooks = fopen("./lianxi/14/book.dat", "a+b")) == NULL)
        fputs("Can't open.", stderr), exit(EXIT_FAILURE);

    //遍历历史记录
    rewind(pbooks); //回到文件开始,从第二次启动程序的时候开始生效
    while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
    {
        if (0 == count)
            puts("Current contentsof book:");
        printf("%s by %s %.2f\n", library[count].title, library[count].author, library[count].value);
        count++;
    }

    //正式获取新书
    filecount = count; //记录新来的书应该从哪开始
    if (count == MAXBKS)
        fputs("The book.dat file is full.", stderr), exit(2);

    puts("Please add new book");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
    {
        puts("enter autor"), s_gets(library[count].author, MAXAUTL);
        puts("Value:"), scanf("%f", &library[count++].value); //巧妙的递增
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            printf("Next book %d:\n", count);
    }

    if (count > 0)
    {
        puts("answer:");
        for (index = 0; index < count; index++)
            printf("title %d :%s\n", index, library[index].title);
        fwrite(&library[filecount], size, count - filecount, pbooks); //从filecount开始将所有文件写出
    }
    else
        puts("Too bad.");

    puts("Bye.");
    fclose(pbooks);
    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) // ret_val!=NUll
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}