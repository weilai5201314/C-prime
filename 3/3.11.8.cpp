#include <stdio.h>
int main(void)
{

    float b;
    float zs;
    float pt;
    float dts;

    printf("please enter cup number:");
    scanf("%f", &b);

    pt = b / 9;
    zs = b * 8;
    dts = zs * 2;

    printf("\n pt%.2f,zs%.2f,dts%.2f", pt, zs, dts);

    return 0;
}