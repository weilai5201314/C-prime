#include <stdio.h>
#define SIZE 4
int main()
{
    int val1 = 44;
    int val2 = 88;
    int arr[SIZE];
    int i;
    printf("\nval1 = %d,val2 = %d\n", val1, val2);
    for (i = -1; i < SIZE; i++)
        arr[i] = 2 * i + 1;
    for (i = -1; i < 7; i++)
        printf("%2d %d\n", i, arr[i]);
    printf("val1 = %d,val2 = %d\n", val1, val2);
    printf("address of arr[-1]:%p\n", &arr[-1]);
    printf("address of arr[4] :%p\n", &arr[4]);
    printf("           val1   :%p\n", &val1);
    printf("           val2   :%p", &val2);
    return 0;
}