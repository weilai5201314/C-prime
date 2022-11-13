// fix mistake
#include <stdio.h>
void display(char cr, int lines, int width);
int main()
{
    int ch, rows, cols;
    printf("\nEnter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d %d", &rows, &cols) != 2)
            break;
        display(ch, rows, cols);
        while (getchar() != '\n')
            continue;
        // break;

        printf("\nEnter another character and two integers;\n");
        printf("Enter a new lines to quit.\n");
    }
    printf("Bye.\n");
}
void display(char cr, int lines, int width)
{
    int row, col;
    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');
    }
}