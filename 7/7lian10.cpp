#include <stdio.h>
int main()
{
    int a, b;
    char n;
    float o, m;
    printf("\nPlease enter your degree and incpme,'#' to quit:\n");
    // while ((l = scanf("%c", &n)) != '#' && (s = scanf("%f", m)) != 'q')
    for (a = 1, b = 2; a < b;)
    {
        scanf("%c%f", &n, &m);
        while (n != '#' || m != 'q')
        {
            //     if (n == 'a')
            //         o = 0.15 * 17850 + 0.28 * (m - 17850);
            //     else if (n == 'b')
            //         o = 23900 * 0.15 + 0.28 * (m - 23900);
            //     else if (n == 'c')
            //         o = 29750 * 0.15 + 0.28 * (m - 29750);
            //     else if (n == 'd')
            //         o = 14875 * 0.15 + 0.28 * (m - 14875);
            //     else
            //         ;
            switch (n)
            {
            case 'a':
                o = 0.15 * 17850 + 0.28 * (m - 17850);
                printf("\nYou should pay %f dollar.", o);
                break;
            case 'b':
                o = 23900 * 0.15 + 0.28 * (m - 23900);
                printf("\nYou should pay %f dollar.", o);
                break;

            case 'c':
                o = 29750 * 0.15 + 0.28 * (m - 29750);
                printf("\nYou should pay %f dollar.", o);
                break;
            case 'd':
                o = 14875 * 0.15 + 0.28 * (m - 14875);
                printf("\nYou should pay %f dollar.", o);
                break;

            default:
                printf("\nPlsea enter again.");
                break;
            }
            break;
        }
        fflush(stdin);

        printf("\n\n接着输入:");
    }
    printf("\nou wa li");
}
