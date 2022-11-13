#include <stdio.h>
void wm(double n);

int main(void)
{
    double a;
    printf("\n\nPlease enter a temperatures number:"),
        scanf("%lf", &a);
    while (a > 0)
    {
        wm(a);
        printf("\nStill?Enter the number(正数继续,非正数结束,f进入坦克):"),
            scanf("%lf", &a);
    }
    printf("你好勇哦.");
}

void wm(double n)
{
    double m;
    m = 5.0 / 9.0 * (n - 32.0);
    printf("\n%.2lf ,sheshi is %.2lf.\n", n, m);
}