#include <stdio.h>
#include <string.h>
#define LIST 3
int main()
{
    char a[1];
    scanf("%s", a), fflush(stdin);
    const char *list[LIST] = {"absd", "aysdaf", "ycsda"};
    int count = 0;
    int i;
    for (i = 0; i < LIST; i++)
    {
        if (strncmp(list[i], a, 1) == 0)
        {
            printf("Found:%s\n", list[i]);
            count++;
        }
    }
    printf("All %d", count);
}