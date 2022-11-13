//替换gets（）
//读取整行输入，空字符代替换行符，或者读取一部分输入，丢弃其余部分
#include <stdio.h>

// st表示存储位置，n表示读取的最大长度
char *s_gets(char *st, int n);

char *s_gets(char *st, int n)

{
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) // ret_val!=NUll
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}


//新版
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