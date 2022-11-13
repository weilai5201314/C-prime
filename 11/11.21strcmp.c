#include <stdio.h>
#include <string.h>
#define ANSWER "grant"
#define SIZE 40
char *s_gets(char *st, int n);

int main()
{
    char try[SIZE];
    puts("Who is buried in grant tomb?");
    s_gets(try, SIZE);
    while (strcmp(try, ANSWER))
    {
        puts("Wrong,again.");
        s_gets(try, SIZE);
    }
    puts("That is right!");

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) // ret_val!=NUll
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}