#include <stdio.h>
#define PER 60

int main(void)
{
    int sec, min, left;
    printf("Enter the number of seconds:");
    scanf("%d", &sec);
    //
    while (sec > 0)
    {
        min = sec / PER;
        left = sec % PER;
        printf("%d second is %d minutes ,%d seconds.\n", sec, min, left);
        printf("\nenter the naxt value(输入0结束):\n");
        scanf("%d", &sec);
    }
    printf("ou wa li");

    return 0;
}