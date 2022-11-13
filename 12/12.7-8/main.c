#include <stdio.h>

extern unsigned int rand1();

extern void srand1(unsigned int x);

int main() {
    int count;
    unsigned seed;
    printf("Please enter:");

    while (scanf("%u", &seed) == 1) {
        srand1(seed);
        for (count = 0; count < 5; count++)
            printf("%d\t", rand1());
        printf("\nEnter next:\n");
    }
    puts("done");

    return 0;

}
