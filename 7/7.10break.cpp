#include <stdio.h>
int main(void)
{
    float length, width;
    printf("\nEnter the length of the rectangle:\n");
    while (scanf("%f", &length) == 1)
    {
        printf("Length = %0.2f:\n", length);
        printf("Enter its width:\n");
        if (scanf("%f", &width) != 1)
            // break;  //original
            continue;
        printf("Width = %0.2f:\n", width);
        printf("Area = %0.2f:\n", length * width);
        printf("\nEnter the length of the rectangle:\n");
    }
    printf("Done.\n");
}