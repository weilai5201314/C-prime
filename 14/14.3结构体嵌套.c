#include <stdio.h>
#define LEN 20
const char *msgs[5] = {
    "   Thank you.",
    "You certainly a",
    "is a specila kind of guy.",
    " and have a few laughs"};
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
    struct guy fellow =
        {
            {"Ewen", "WM"},
            "grilled salmon",
            "personality coach",
            68112.0};

    printf("%s\t%s\n", fellow.handle.fist, fellow.handle.last);
    printf("%s\n", fellow.favfood);
    printf("%s\n", fellow.job);
    printf("%.2f\n", fellow.income);
}