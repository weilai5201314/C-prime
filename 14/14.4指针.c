#include <stdio.h>
#define LEN 20
struct names
{
    char fist[LEN];
    char last[LEN];
};
struct guy
{
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow[2] =
        {
            {{"Ewen", "WM"},
             "grilled salmon",
             "personality coach",
             68112.0},

            {{"wzj", "mw"},
             "ajlfk",
             "woshiren",
             123}};
    struct guy *him;
    him = &fellow[0];

    printf("%s\t%s\n", (*him).handle.fist, him->handle.last);
    //     printf("%s\n", fellow.favfood);
    //     printf("%s\n", fellow.job);
    him++;
    printf("%.2f\n", him->income);
}