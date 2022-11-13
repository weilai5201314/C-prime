#include <stdio.h>
int main()
{
    const float MIN = 0.0f, MAX = 100.0f;
    float score, total = 0.0f;
    int n = 0;
    float min = MAX, max = MIN;
    printf("\nEnter the first score (q to quit):");
    while (scanf("%f", &score) == 1)
    {
        if (score < MIN || score > MAX)
        {
            printf("Acceping %0.1f is an invalid value.Try again:", score);
            // continue;   //original
            break;
        }
        printf("Accepting %0.1f:\n", score);
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        total += score;
        n++;
        printf("\nEnter next score(q to quit):");
    }
    if (n > 0)
    {
        printf("Average of %d scores is %0.1f.\n", n, total / n);
        printf("Low = %0.1f,high = %0.1f\n", min, max);
    }
    else
        printf("No valid scores were entered.\n");
}