#include <stdio.h>
#include <stdlib.h>
#define NUM 40
void fillarr(double ar[], int n);
void showarr(const double ar[], int n);
int mycomp(const void *p1, const void *p2);

int main()
{
    double wm[NUM];
    fillarr(wm, NUM);
    puts("before:");
    showarr(wm, NUM);
    qsort(wm, NUM, sizeof(double), mycomp);
    puts("after:");
    showarr(wm, NUM);
    return 0;
}
int mycomp(const void *p1, const void *p2)
{
    const double *a1 = (const double *)p1;
    const double *a2 = (const double *)p2;
    if (*a1 < *a2)
        return -1;
    else if (*a1 == *a2)
        return 0;
    else
        return 1;
}

void showarr(const double ar[], int n)
{
    int index;
    for (index = 0; index < n; index++)
    {
        printf("%9.4f ", ar[index]);
        if (index % 8 == 7)
            puts(" ");
    }
    if (index % 8 == 0)
        putchar('\n');
}

void fillarr(double ar[], int n)
{
    int index;
    for (index = 0; index < n; index++)
        ar[index] = (double)rand() / ((double)rand() + 0.1);
}