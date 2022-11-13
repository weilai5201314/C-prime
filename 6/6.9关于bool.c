//c中才有_Bool，是int类型，c++中是bool，布尔型,但是可以使用<stdbool.h>来调用bool
#include <stdio.h>
// #include<stdbool.h>
int main(void)
{
    long num;
    long sum = 0L;
    _Bool input;

    printf("\nplease enter a number:");
    input = scanf("%ld", &sum);
    while (input)
    {
        sum = sum + num;
        printf("\nPlease enter next :");
        input = (scanf("%ld", &num)==1);
    }
    printf("Those sum to %ld\n", sum);

    return 0;
}