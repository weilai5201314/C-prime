//irregular
#include <stdio.h>
#define PAGE 336
#define WORD 65618
int main(void)
{
    short num = PAGE;
    short numm = -PAGE;

    printf("num as short and unsigned short : %hd %hu\n", num, num);
    printf("-num as short and unsigned short : %hd %hu\n", numm, numm);
    printf("num as int and char :%d %c\n", num, num);
    printf("word as int short and char :%d %hd %c\n", WORD, WORD, WORD);

    return 0;
}