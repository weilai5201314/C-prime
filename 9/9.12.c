#include <stdio.h>
void mikado(int);
int main(void)
{
    int pooh = 2, bah = 5;
    printf("in main    %d he %p\n", pooh, &pooh);
    printf("        bah =%10d,&bah=%10p\n", bah, &bah);
    mikado(pooh);
    return 0;
}
void mikado(int bah)
{
    int pooh = 10;
    printf("in mikado,pooh=%10d,&pooh=%10p\n", pooh, &pooh);
    printf("           bah=%10d,&bah=%10p", bah, &bah);
}