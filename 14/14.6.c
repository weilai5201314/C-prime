#include <stdio.h>
#define FUNDLEN 50
struct funds
{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};
double sum(const struct funds *);

int main(void)
{
    struct funds stan =
        {
            "Garlic-Melon Bank",
            4032.27,
            "Lucky saving loan",
            8534.94};

    printf("Stan has a totel of $%.2f\n", sum(&stan));
    return 0;
}

double sum(const struct funds *money)
{
    // (*money).bankfund = 22;
    return (money->bankfund + money->savefund);
}