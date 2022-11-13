#include <stdio.h>
#include <math.h>

int main(void)
{
    const double answer = 3.14159;
    double response;

    printf("\nWhat's the number of PI?\n");
    scanf("%lf", &response);
    while (fabs(response - answer) > 0.0001)
    {
        printf("Try again!\nEnter :");
        scanf("%lf", &response);
    }
    printf("\nou wa li.");
}