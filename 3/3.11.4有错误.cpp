#include <stdio.h>
int main(void)
{
    float wm;
    float mw;

    scanf("enter a number ajldja%f", &wm);
    
    mw = wm *2;
    printf("%.2f,",mw);
    printf("%.2e",mw);
    printf("%.2a",mw);

    return 0;
}