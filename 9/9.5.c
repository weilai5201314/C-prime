#include <stdio.h>
int max(int, int);
int main()
{
    printf("%d and %d is %d.\n", 3, 5, max(3, 5));
    printf("%d and %d is %d.\n", 3, 5, max(3.3, 5.9));
    return 0;
}
int max(int n, int m)
{
    return n > m ? n : m;
}