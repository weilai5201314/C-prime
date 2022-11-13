#define MSG "i am special asdfghjklqwert"

#include <stdio.h>
int main(void)
{
    //     int wm[20] = {1, 2, 3, 4};
    //     char ar[40] = MSG;
    //     const char *pt = MSG;
    //     printf("\naddredd of \"i am special\": %p \n", "i am special");
    //     printf("               address ar: %p \n", ar);
    //     printf("               address pt: %p \n", pt);
    //     printf("           address of MSG: %p\n", MSG);
    //     printf("address of \"i am special\": %p \n", "i am special");
    //     printf("\n %s\n", pt);

    //     printf("\n%c %c", ar[20], *(ar + 20));
    //     printf("\n%d",wm[2]);
    //     return 0;

    char *pt1 = "KLia";
    pt1[0] = 'F';
    printf("KLia");
    printf(":asdfs the %ss\n", "KLia");
}