#include <stdio.h>
void up_down(int n);
int main()
{
    up_down(1);
    return 0;
}
void up_down(int n)
{
    printf("level %d:n location %p\n", n, &n); //#1
    if (n < 4)
        up_down(n + 1);
    printf("LEVEL %d:n location %p\n", n, &n); //#2
}