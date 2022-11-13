// printf 的更多特性
#include <stdio.h>
int main(void)
{

    unsigned int un = 3000000000; // int为32位和short位16位的system
    short end = 200;
    long big = 65537;
    long long verybig =123455678908642;

    printf("un=%u and not %d \n",un,un);
    printf("end = %hd and %d \n",end,end);
    printf("bid = %ld and not %hd \n",big,big);
    printf("verybig =%lld and not %ld \n",verybig,verybig);

    return 0;
}