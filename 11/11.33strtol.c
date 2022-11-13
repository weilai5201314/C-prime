#include <stdio.h>
#include <stdlib.h>
#define LIM 30
char *s_gets(char *st, int n);

int main()
{
    char number[LIM];
    char *end;
    long value;

    puts("enter number ,line to quit:");
    while (s_gets(number, LIM) && number[0] != '\0')
    {
        value = strtol(number, &end, 10);
        printf("10: %ld ,   %s, %d\n", value, end, *end);
        value = strtol(number, &end, 16);
        printf("16: %ld ,   %s, %d\n", value, end, *end);
        puts("Next number:");
    }
    puts("ou wa li");


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