#include<stdio.h>
int main (void)
{
    float abo = 32000.0;
    double abe = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e \n",abo,abo);
    //下一行需要c99或者支持特性
    printf("and its %a in hexadecimal ,powerof 2 notation\n",abo);
    printf("%f can be written %e \n",abe,abe);
    printf("%Lf can be written %Le \n",dip,dip);

    return 0;
}