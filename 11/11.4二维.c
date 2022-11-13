#include <stdio.h>
#define SIEN 40
#define LIM 5
int main(void)
{
    const char *mytal[LIM] = {"Adding numbers", "MULtipling", "stashing", "following", "understaning"};
    char youtal[LIM][SIEN] = {"whling", "sleeping", "watching", "mailing", "reading"};
    int i;

    puts("lets compare tal.");
    printf("%-36s   %-25s\n", "my tal", "your tal");
    for (i = 0; i < LIM; i++)
        printf("%-36s   %-25s\n", mytal[i], youtal[i]);
    printf("\n sizeof mytal :%zd, sizeof yourtal:%zd\n", sizeof(mytal), sizeof(youtal));

    return 0;
}