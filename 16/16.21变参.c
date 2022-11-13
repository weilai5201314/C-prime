#include <stdio.h>
#include <stdarg.h>
double sum(int, ...);

int main()
{
    double s, t;
    s = sum(3, 1.0, 2.1, 3.4);
    t = sum(6, 1.1, 2, 3, 4, 5, 6);
    printf("s %g\n", s);
    printf("t %g\n", t);

    return 0;
}

double sum(int lim, ...)
{
    va_list ap;
    double tot = 0;
    int i;

    va_start(ap, lim);
    for (i = 0; i < lim; i++)
        tot += va_arg(ap, double);
    va_end(ap);

    return tot;
}