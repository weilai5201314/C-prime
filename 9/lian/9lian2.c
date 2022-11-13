#include <stdio.h>
void chline(char ch, int i, int j)
{
    for (; i > 0; i--)
    {
        for (int a = j; a > 0; a--)
        {
            printf("%c", ch);
        }
        putchar('\n');
    }
    printf("ouwali");
}
int main(void)
{
    int a, b;
    char wm;
    printf("enter:\n");
    scanf("%c %d %d", &wm, &a, &b);
    chline(wm, a, b);
}