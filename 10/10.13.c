#include <stdio.h>

int main()
{
    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;
    ptr1 = urn;
    ptr2 = &urn[2];
    printf("\npointer value, dereferenced pointer, pointer address:\n");
    printf("prt1 = %p, *ptr1 = %d, &prt1 = %p\n", ptr1, *ptr1, &ptr1);
    //指针加法
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
    ptr1++; //递增指针
    printf("\nvalues after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
    ptr2--; //递减指针
    printf("\nvalues after ptr2--:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
    --ptr1;
    ++ptr2; //恢复初始值
    //指针减去指针
    printf("\nsubstracting one pointer from another:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2-ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
    //指针减去整数
    printf("\nptr3 = %p,ptr3 - 2 =%p, &urn[2] = %p\n", ptr3, ptr3 - 2, &urn[2]);
    printf("\n%d", *&urn[2]);

    return 0;
}