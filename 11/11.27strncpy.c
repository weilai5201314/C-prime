#include <stdio.h>
#include <string.h>
#define SIZE 40
#define TARGSIZE 7
#define LIM 5
char *s_gets(char *st, int n);

int main(void)
{
    char qwrds[LIM][TARGSIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words begin with q:\n", LIM);
    while (i < LIM && s_gets(temp, SIZE))
    {
        if (temp[0] != 'q')
            printf("Doesn't begin with q.\n");
        else
        {
            strncpy(qwrds[i], temp, TARGSIZE - 1);
            qwrds[i][TARGSIZE - 1] = '\0';
            i++;
        }
    }
    puts("\nHere are the words accepted:");
    for (i = 0; i < LIM; i++)
        puts(qwrds[i]);
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