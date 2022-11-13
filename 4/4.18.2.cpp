#include <stdio.h>
int main(void)
{
    char name[40];
    char na[40];

    printf("please enter your name:");
    scanf("%s %s", name, na);
    printf("\"%s%s\"\n", name, na);
    printf("\"%20s%s\"\n", name, na);
    printf("\"%-20s%s\"", name, na);

    return 0;
}