#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *mesg = "Don be a fool!";
    const char *copy;

    copy = mesg;
    printf("\n%s\n", copy);
    printf("mesg = %s,&mesg = %p,value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s,&copy = %p,value = %p", copy, &copy, copy);

    return 0;
}