#include <stdio.h>
int main(void)
{
    double debt;

    for (debt = 100; debt < 150; debt = debt * 1.1)
        printf("your debt now is %.2lf.\n", debt);
}