#include <stdio.h>
int main(void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';                               // 9
    printf("ch = %c,i =%d, fl =%2.2f\n", ch, i, fl); // 10

    ch = ch + 1, i = fl + 2 * ch, fl = 2.0 * ch + i; // 11,12,13
    printf("ch = %c,i =%d,fl =%2.2f\n", ch, i, fl);  // 14

    ch = 1107;                   // 15
    printf("Now ch = %c\n", ch); // 16

    ch = 80.89;               // 17
    printf("ch = %c \n", ch); // 18

    ////下面是各种实验，嘎嘎能跑

    printf("%zd/ %zd/ ", sizeof(int), sizeof(char)); // 19

    int mice;
    mice = 1.6 + 1.7;
    printf("\n%d", mice);
}