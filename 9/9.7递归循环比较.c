#include <stdio.h>
long fact(int n);
long rfact(int n);
int main()
{
    int num;
    printf("\nEnter a valuein the range 0-12(q to quit):\n");
    while (scanf("%d", &num) == 1)
    {
        if (num < 0)
            printf("No negative num,please.\n");
        else if (num > 12)
            printf("keep input under 13.\n");
        else
        {
            printf("loop:%d factorial = %ld\n", num, fact(num));
            printf("recursion:%d factotial = %ld\n", num, rfact(num));
        }
        printf("\noo enter a valuein the range 0-12(q to quit):\n");
    }
    printf("ou wa li");
    return 0;
}
long fact(int n)
{
    long ans;
    for (ans = 1; n > 1; n--)
        ans *= n;
    return ans;
}
long rfact(int n)
{
    long ans;
    if (n > 0)
        ans = n * rfact(n - 1);
    else
        ans = 1;
    return ans;
}