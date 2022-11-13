#include <stdio.h>
int main(void)
{
    /* c99类型提供了%zd的转换说明*/
    printf("int has a size of %zd bytes.\n", sizeof(int));
    printf("char    has a size of %zd.\n", sizeof(char));
    printf("long %zd.\n", sizeof(long));
    printf("long long %zd.\n", sizeof(long long));
    
     //可以用%u或者%lu代替%zd
    printf("double %lu.\n", sizeof(double));
    printf("long double %lu.\n", sizeof(long double));

    return 0;
}