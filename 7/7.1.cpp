#include <stdio.h>
int main()
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;
    printf("Enter the list of daily low temperatures.\n");
    printf("Use Cl,and enter q to quit");
    while (scanf("%f", &temperature) == 1)
    {
        all_days++;
        if (temperature < FREEZING)
        {
            cold_days++;
        }
    }
    if (all_days != 0)
    {
        printf("%d days total : %.1f were below.\n", all_days, 100.0 * (float)cold_days / all_days);
    }
    if (0 == all_days)
    {
        printf("No data entered!\n");
    }
}