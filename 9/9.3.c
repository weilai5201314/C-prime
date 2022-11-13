#include <stdio.h>
int imin(int, int);
int main()
{
    int evi1, evi2;
    printf("\nenter a pair ablea(qto quit):\n");
    while (scanf("%d %d", &evi1, &evi2) == 2)
    {
        printf("the bale of %d and %d is %d.\n", evi1, evi2, imin(evi1, evi2));
        printf("enter a pair lsajdlkf(q to quit)");
    }
    printf("ou wa li\n");
    return 0;
}
int imin(int n, int m)
{
    int min;
    min = n < m ? n : m;
    return min;
}
