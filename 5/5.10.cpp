#include <stdio.h>
int main(void)
{
    int ul = 0, super = 0;

    while (super < 5)
    {
        super++;
        ++ul;
        printf("super = %d, ul = %d \n", super, ul);
    }

    return 0;
}