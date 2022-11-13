// talkback
#include <stdio.h>
#include <string.h>  //提供strlen函数原型
#define density 62.4 //人体密度 磅每立方英尺

int main(void)
{
    float wei, vol;
    int size, lett;
    char name[40]; // 40字符数组

    printf("whats your first name?\n");
    scanf("%s", name);
    printf("\n%s,whats your weight?\n", name);
    scanf("%f", &wei);

    size = sizeof(name);
    lett = strlen(name);
    vol = wei / density;

    printf("\nwell,%s,your vol is %2.2f\n", name, vol);
    printf("also,your first name has %d letters.\n", lett);
    printf("and we have %dtypes to store it.\n",size);

    return 0;
}