#include <stdio.h>
#include <stdlib.h>
typedef struct flex
{
    size_t count;
    double ave;
    double scores[];
} LEX;
void showFLEX(const LEX *p);

int main(void)
{
    LEX *fp1, *pf2;
    int n = 5;
    int i;
    int tot = 0;

    fp1 = malloc(sizeof(LEX) + n * sizeof(double));
    fp1->count = n;
    for (i = 0; i < n; i++)
    {
        fp1->scores[i] = 20.0 - i;
        tot += fp1->scores[i];
    }
    fp1->ave = tot / n;
    showFLEX(fp1);

    n = 9;
    tot = 0;
    pf2 = malloc(sizeof(LEX) + n * sizeof(double));
    pf2->count = n;
    for (i = 0; i < n; i++)
    {
        pf2->scores[i] = 20.0 - i / 2.0;
        tot += pf2->scores[i];
    }
    pf2->ave = tot / n;
    showFLEX(pf2);
    free(fp1);
    free(pf2);

    return 0;
}

void showFLEX(const LEX *p)
{
    int i;
    printf("Scores  :");
    for (i = 0; i < p->count; i++)
        printf(" %g ", p->scores[i]);
    printf("\nAverage : %g\n", p->ave);
}
