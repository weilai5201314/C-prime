#include <stdio.h>
#define FUNDLEN 50
#define N 2
struct funds
{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};
double sum(const struct funds money[], int n);

int main(void)
{
    struct funds stan[N] = {
        {"Garlic-Melon Bank",
         4032.27,
         "Lucky saving loan",
         8534.94},
        {"wm",
         42.2,
         "wzj",
         23.23}};
    printf("Stan has a totel of $%.2f\n", sum(stan, N));

    return 0;
}

double sum(const struct funds money[], int n)
{
    double total;
    int i;
    for (i = 0, total = 0; i < n; i++)
        total += money[i].bankfund + money[i].savefund;

    return total;
}