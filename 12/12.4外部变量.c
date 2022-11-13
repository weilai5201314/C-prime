#include <stdio.h>
int units = 0;

void critic(void);

int main(void)
{
    // extern int units;
    printf("Enter a number:\n");
    scanf("%d", &units);
    // units = 56;

    while (units != 56)
        critic();
    printf("you must have look it up \n");

    return 0;
}

void critic(void)
{
    printf("No luck , my friend.again\n");
    scanf("%d", &units);
}