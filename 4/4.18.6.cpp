#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("\nenter:");
    char name[40], sur[40];
    scanf("%s %s", name, sur);
    printf("%15s %15s\n", name, sur);
    printf("%15zd %15zd\n", strlen(name), strlen(sur));
    printf("%-15s %-15s\n", name, sur);
    printf("%-15zd %-15zd", strlen(name), strlen(sur));

    return 0;
}