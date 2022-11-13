#include <stdio.h>
int main()
{
    // int wm[5] = {1, 2, 3, 4, 5};
    // const int *p = wm;
    // printf("\n%d\n", *++p);
    // printf("\n%p   %p\n", &p[2], &wm[3]);//指针数组化
    // printf("\n%d    %d\n", p[3], wm[3]);

    const int A = 4, B = 5;
    int a, b;
    int wm[A][B] = {0};
    for (a = 0; a < A; a++)
    {
        for (b = 0; b < B; b++)
        {
            printf("%3d", wm[a][b]);
        }
    }
}