#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000
int main()
{
    double numbers[ARSIZE];
    double value;
    const char *file = "./lianxi/13/numbers.dat";
    int i;
    long pos;
    FILE *iofile;
    //创建值
    for (i = 0; i < ARSIZE; i++)
        numbers[i] = 100.0 * i + 1.0 / (i + 1);
    //打开文件
    if ((iofile = fopen(file, "wb")) == NULL)
        exit(EXIT_FAILURE);
    //二进制写入
    fwrite(numbers, sizeof(double), ARSIZE, iofile);
    fclose(iofile);
    if ((iofile = fopen(file, "rb")) == NULL)
        exit(EXIT_FAILURE);
    printf("Range 0-%d:", ARSIZE - 1);
    while (scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
    {
        pos = (long)i * sizeof(double); //计算偏移
        fseek(iofile, pos, SEEK_SET);
        fread(&value, sizeof(double), 1, iofile);
        printf("The value %f\n", value);
        printf("Next index:\n");
    }
    //完成
    fclose(iofile);
    puts("Bye.");

    return 0;
}