#include <stdio.h>
union t
{
    int wm;
    char wzj;
};

int main()
{
    union t aa;
    union t *pr;
    aa.wm = 3;
    printf("%d\n", aa.wm);
    aa.wzj = 'a';
    printf("%c\n", aa.wzj);
    pr = &aa;
    printf("%c\n", (*pr).wzj);
}