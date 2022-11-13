#include <stdio.h>
#define MONTH 12
#define YEAR 5
int main()
{
    //初始化2010-2014降水量数组
    const float rain[YEAR][MONTH] = {
        {4.3, 4.3, 4.3, 4.3, 4.3, 2.0, 3.0, 3.1, 4.3, 2.1, 3.9, 6.6},
        {4.3, 4.3, 4.3, 4.3, 4.3, 2.0, 3.0, 3.1, 4.3, 2.1, 3.9, 6.6},
        {4.3, 4.3, 4.3, 4.3, 4.3, 2.0, 3.0, 3.1, 4.3, 2.1, 3.9, 6.6},
        {4.3, 4.3, 4.3, 4.3, 4.3, 2.0, 3.0, 3.1, 4.3, 2.1, 3.9, 6.6},
        {4.3, 4.3, 4.3, 4.3, 4.3, 2.0, 3.0, 3.1, 4.3, 2.1, 3.9, 7}};
    int year, month;
    float subtot, total;
    printf("\nYEAR      RAINFALL(inches)\n");
    for (year = 0, total = 0; year < YEAR; year++)
    { //每一年，各月降水量和
        for (month = 0, subtot = 0; month < MONTH; month++)
            subtot += rain[year][month];
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEAR);
    printf("MONTHLY AVERAGES:\n\n");
    printf("JAN FEB MAR APR MAY JUN JUL AUG SEP OCT NOV DEC \n");
    for (month = 0; month < MONTH; month++)
    {
        for (year = 0, subtot = 0; year < YEAR; year++)
            subtot += rain[year][month];
        printf("%4.1f", subtot / YEAR);
    }
    printf("\n");
}