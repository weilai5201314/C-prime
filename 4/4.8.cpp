#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99; // const常量

    printf("1 %f\n", RENT);      // 1
    printf("2 %e\n", RENT);      // 2
    printf("3 %4.2f\n", RENT);   // 3
    printf("4 %3.1f\n", RENT);   // 4
    printf("5 %10.3f\n", RENT);  // 5
    printf("6 %10.3E\n", RENT);  // 6
    printf("7 %+4.2f\n", RENT);  // 7
    printf("8 %010.2f\n", RENT); // 8

    return 0;
}