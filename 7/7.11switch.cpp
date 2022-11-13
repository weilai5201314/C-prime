#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("\nGive me a letter of the allphabet,and i will give");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end mt act.\n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;
        if (islower(ch))
            switch (ch)
            {
            case 'a':
                printf("argali,a wild sheep of asia\n");
                break;
            case 'b':
                printf("babirusa,a wild pig of malay\n");
                break;
            case 'c':
                printf("coati,racoonlike mammal\n");
                break;
            case 'd':
                printf("desman,ljasldfkjal\n");
                break;
            case 'e':
                printf("echidna\n");
                break;
            case 'f':
                printf("fisher\n");
                break;
            default:
                printf("That's a stumper!\n");
            }
        else
            printf("I recongnize only lowercase letters.\n");
        while (getchar() != '\n')
            continue;
        printf("Please type another letter or a #.\n");
    }
    printf("Bye.\n");
}