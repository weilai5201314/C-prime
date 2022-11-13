#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10
void show_array(const int ar[], int n);

int main()
{
    int values[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target[SIZE];
    double curious[SIZE / 2] = {2.0, 2.0e5, 2.0e10, 2.0e20, 5.0e30};

    puts("1:");
    show_array(values, SIZE);
    memcpy(target, values, SIZE * sizeof(int));
    puts("target:");
    show_array(target, SIZE);

    puts("mmove:");
    show_array(values, SIZE);
    memmove(values + 2, values, 5 * sizeof(int));
    puts("0-4放到2-6");
    show_array(values, SIZE);

    memcpy(target, curious, (SIZE / 2) * sizeof(int));
    show_array(target, SIZE);
}

void show_array(const int ar[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", ar[i]);
    putchar('\n');
}