//10-11
#ifndef NAMES_H_
#define NAMES_H_
#define SLEN 32

typedef struct names_st
{
    char first[SLEN];
    char last[SLEN];
} names;

void get_names(names *);
void show_names(const names *);
char *s_gets(char *st, int n);
#endif

//修改前6-8

// #include <string.h>
// #define SLEN 32

// struct names_st
// {
//     char first[SLEN];
//     char last[SLEN];
// };

// typedef struct names_st names;

// void get_names(names *);
// void show_names(const names *);
// char *s_gets(char *st, int n);
