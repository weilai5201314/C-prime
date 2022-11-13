#include <stdio.h>
int main()
#define MONTH 12
{
    const int days[MONTH] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    for (index = 0; index < MONTH; index++)
        printf("Month %2d has %2d days.\n", index + 1, days[index]);
}