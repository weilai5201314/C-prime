#include <stdio.h>
#define WM
#define LIMIT 4

int main(void)
{
    int i;
    int total = 0;
    for (i = 1; i <= LIMIT; i++)
    {
        total += 2 * i * i + 1;
#ifdef WM
        printf("i=%d, total %d\n", i, total);
#endif
    }
    printf("Grand total = %d", total);

    return 0;
}