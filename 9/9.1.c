#include <stdio.h>
#define NAME "adsafdsaa"
#define wide 40
void starbar(void);
int main()
{
    starbar();
    printf("%s\n", NAME);
    starbar();
}
void starbar(void)
{
    int count;
    for (count = 1; count <= wide; count++)
        putchar('*');
    putchar('\n');
}