#include <stdio.h>

void why_me();

int main()
{
    printf("file is %s\n", __FILE__);
    printf("this date is %s\n", __DATE__);
    printf("the time is %s \n", __TIME__);
    printf("version is %ld \n", __STDC_VERSION__);
    
// #if __STDC_VERSION__ != 2011
#if __STDC_VERSION__ != 201710
#error Not C11
#endif
    why_me();
}
void why_me()
{
    printf("Thie is line %d \n", __LINE__);
}