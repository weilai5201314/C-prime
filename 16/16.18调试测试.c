#include <stdio.h>
#include <math.h>
// #define NDEBUG
#include <assert.h>
int main()
{
    double x, y, z;
    puts("Enter a pair of number q to quit:");
    while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
    {
        z = x * x - y * y;
        assert(z >= 0);
        printf("answer is %f\n", sqrt(z));
        puts("Next:");
    }
    puts("Done");
}