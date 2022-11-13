//注意空格和回车也算字符
#include <stdio.h>
int main(void)
{
    int a, b;
    char wm[26];
    printf("\nenter 26words:");
    for (a = 0; a < 26; a++)
    {
        scanf("%c", &wm[a]);
        if (wm[a] < 33 || wm[a] > 126)
        {
            a--;
        }
    }
    printf("hello");
    for (a = 0; a < 26; a++)
    {
        printf("%5c", wm[a]);
    }
}