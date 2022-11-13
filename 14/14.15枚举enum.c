#include <stdio.h>
#include <string.h>
#include <stdbool.h> //c99
#define LEN 30

char *s_gets(char *st, int n);
const char *colors[] = {"red", "orange", "yellow", "green", "blue", "violent"};
enum xxx
{
    red,
    orange,
    yellow,
    green,
    blue,
    violent
};

int main()
{
    char choice[LEN];
    enum xxx color;
    bool color_is_found = false;

    puts("Enter acolor:");
    while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
    {
        for (color = red; color <= violent; color++)
        {
            if (strcmp(choice, colors[color]) == 0)
            {
                color_is_found = true;
                break;
            }
        }
        if (color_is_found)
            switch (color)
            {
            case red:
                puts("red");
                break;
            case orange:
                puts("orange");
                break;
            case yellow:
                puts("yellow");
                break;
            case green:
                puts("green");
                break;
            case blue:
                puts("blue");
                break;
            case violent:
                puts("violent");
                break;
            }
        else
            printf("Not fund\n");
        color_is_found = false;
        puts("Next:");
    }
    puts("Bye.");

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) // ret_val!=NUll
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

