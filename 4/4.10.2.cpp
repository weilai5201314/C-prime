#include <stdio.h>
int main(void)
{
    char name[40];
    float cash;

    printf("please enter your name and cash.\n");
    scanf("%s", name), scanf("%g", &cash);
    printf("the %s family just may be %c%.3f dollars richer.", name, '$', cash);

    return 0;
}