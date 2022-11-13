#include <stdio.h>
#define WM "hello world."

int main(void)
{
    printf("[%2s]\n", WM);
    printf("[%24s]\n", WM);
    printf("[%24.5s]\n", WM);
    printf("[%-24.5s]\n", WM);

    return 0;
}