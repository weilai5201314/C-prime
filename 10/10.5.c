#include <stdio.h>
#define MONTH 12
int main()
{
    int day[MONTH] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;
    for (i = 0; i < MONTH; i++)
        printf("%2d %d\n", i + 1, day[i]);
    return 0;
}
