#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31
typedef struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;

} ROO;

int main(void)
{
    ROO readfirst;
    int score;
    printf("Enter :");
    scanf("%d", &score);
    if (score >= 84)
        readfirst = (ROO){"woshiren", "wm", 33};
    else
        readfirst = (ROO){"nine", "wzj", 21};
    printf("%s\t%s\t%.2f\n", readfirst.title, readfirst.author, readfirst.value);
}
