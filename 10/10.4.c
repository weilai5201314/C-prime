#include <stdio.h>
int main()
{
    const int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    for (index = 0; index < sizeof day / sizeof day[0]; index++)
        printf("Month %2d has %d days.\n", index + 1, day[index]);
    printf("\n %lu \n", sizeof day / sizeof day[0]);
    printf(" %d\n", sizeof day);
    printf("%d\n", sizeof day[0]);
    printf("%d\n", sizeof(int));
    return 0;
}