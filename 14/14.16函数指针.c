//改变都在show函数里，细细品味函数指针的使用
//strchr的使用
//大小写的识别另类处理方式
//自己的函数处理缓存区，对比fflush
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81
char *s_gets(char *st, int n);
char showmenu(void);
void eatline(void);
void show(void (*fp)(char *), char *str);
void TOLper(char *);
void TOUper(char *);
void Transpose(char *);
void Dummy(char *);

int main()
{
    char line[LEN];
    char copy[LEN];
    char choice;
    void (*pfun)(char *); //函数指针

    puts("Enter a string :");
    while (s_gets(line, LEN) != NULL && line[0] != '\0')
    {
        while ((choice = showmenu()) != 'n')
        {
            switch (choice)
            {
            case 'u':
                pfun = TOUper;
                break;
            case 'l':
                pfun = TOLper;
                break;
            case 't':
                pfun = Transpose;
                break;
            case 'o':
                pfun = Dummy;
                break;
            }
            strcpy(copy, line);
            show(pfun, copy);
        }
        puts("Next enter :");
    }
    puts("Bye!");
    return 0;
}

void Dummy(char *str)
{
    //不改变字符
}

void Transpose(char *str)
{
    while (*str)
    {
        if (islower(*str))
            *str = toupper(*str);
        else if (isupper(*str))
            *str = tolower(*str);
        str++;
    }
}

void TOUper(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

void TOLper(char *str)
{
    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
}

void show(void (*fp)(char *), char *str)
{
    (*fp)(str); //把用户选定的函数作用于str
    puts("## : ");
    puts(str);  //显示结果
}

void eatline(void)
{
    while (getchar() != '\n')
        continue;
}

char showmenu(void)
{
    char ans;
    puts("Enter menu choice:");
    puts("u) uppercase  l)lowercase");
    puts("t) trans  o)original case");
    puts("n) next string");
    ans = getchar();    //获取输入
    ans = tolower(ans); //改小写
    eatline();          // fflush stdin
    while (strchr("ulton", ans) == NULL)
    {
        puts("Enter again:");
        ans = tolower(getchar());
        eatline();
    }

    return ans;
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