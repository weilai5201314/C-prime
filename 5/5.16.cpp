#include <stdio.h>
const int PER_M = 60;           //一分钟的秒数
const int PER_H = 60;           //一小时的秒数
const double M_PER_K = 0.62137; //一公里英里数
int main(void)
{
    double tk, tm, rate, mtime;
    int min, sec, time, mmin, msec;
    printf("Please enter ,in km ,the distance run.\n");
    scanf("%lf", &tk);
    printf("\nenter the minutes and seconds.\n");
    printf("first enter the minutes.\n");
    scanf("%d", &min);
    printf("Then enter the seconds.\n");
    scanf("%d", &sec);

    time = PER_M * min + sec;
    tm = M_PER_K * tk;
    rate = tm / time * PER_H;
    mtime = (double)time / tm;
    mmin = (int)mtime / PER_M;
    msec = (int)mtime % PER_M;

    printf("You ran %1.2f km (%1.2f miles) in %d min , %d sec.\n",
    tk,tm,min,sec);
    printf("That pace corresponds to running a mile in %d min, ",mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.\n",msec,rate);
}
