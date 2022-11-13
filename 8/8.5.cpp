//有I/O问题
#include <stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
    int ch, rows, cols;
    printf("\nEnter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("\nEnter another character and two kjaldjl:n");
        printf("\nEnter a newline to quit.\n");
    }
    printf("\nBye.");
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