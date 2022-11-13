#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 40
#define MAXBKS 100
char *s_gets(char *st, int n);

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main()
{
    struct book library;
    int count = 0;
    int index;

    printf("Please enter title:\n"), s_gets(library.title, MAXTITL);
    printf("Please enter author:\n"), s_gets(library.author, MAXAUTL);
    printf("Please enter value:\n"), scanf("%f", &library.value);

    printf("Title:%s\tAuthor:%s\tValue:%.2f\n", library.title, library.author, library.value);
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