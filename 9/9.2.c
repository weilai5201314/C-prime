#include <stdio.h>
#include <string.h>
#define NAME "woshiren"
#define wide 40
#define SPACE ' '
void show_char(char ch, int num);
int main()
{
    int spaces;
    show_char('*', wide);
    putchar('\n');
    show_char(SPACE, 12);
    printf("%s\n", NAME);
    show_char('*', wide);
    putchar('\n');
}
void show_char(char ch, int num)
{
    int count;
    for (count = 1; count <= num; count++)
        putchar(ch);
}