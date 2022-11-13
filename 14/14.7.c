#include <stdio.h>
#define FUNDLEN 50
struct funds
{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};
double sum(struct funds moolah);

int main(void)
{
    struct funds stan =
        {
            "Garlic-Melon Bank",
            4032.27,
            "Lucky saving loan",
            8534.94};

    printf("Stan has a totel of $%.2f\n", sum(stan));
    printf("new %.2f\n", stan.bankfund);
    return 0;
}

double sum(struct funds moolah)
{
    moolah.bankfund = 22;
    return (moolah.bankfund + moolah.savefund);
}