//认识sizeof和strelen区别
#include <stdio.h>
#include <string.h>
#define PRAISE "you are a pretty girl."

int main(void)
{
    char name[40];

    printf("whats your name?\n");
    scanf("%s", name);
    printf("hello,%s,%s", name, PRAISE);
    printf(" %zd,zhanle %zd.\n", strlen(name), sizeof(name));
    printf("balabla letters%zd\n", strlen(PRAISE));
    printf("and size is %zd", sizeof(PRAISE));

    return 0;
}