#include <stdio.h>
int main(void)
{
    int age;
    long double assets;
    char pet[30];

    printf("enter your age,assets and favorite pet.\n");
    scanf("%d %Lf", &age, &assets);
    scanf("%s", pet);
    printf("%d /%.2Lf/%s", age, assets, pet);

    return 0;
}