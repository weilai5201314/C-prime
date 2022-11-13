#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
int main(int argc, char *argv[])
{
    FILE *in;
    FILE *out;
    int ch;
    // char name[LEN] = "./lianxi/13/wm";
    char name[LEN];
    int count = 0;

    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "can't open");
        exit(EXIT_FAILURE);
    }
    strncpy(name, argv[1], LEN - 5);
    name[LEN - 5] = '\0';
    // in = fopen(name, "r");
    strcat(name, ".red");
    if ((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "can't create\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);

    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "error close");
    return 0;
}