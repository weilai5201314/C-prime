#include <stdio.h>
double min(int x, int y)
{
    return x < y ? x : y;
}
int main()
{
    int a = 3, b = 4;
    printf("jiaoxiazhihsi %f", min(a, b));
}