#include <stdio.h>

int main()
{
    int i, j;

    // 输出第一行数字 1~9
    for (j = 1; j <= 9; j++)
    {
        printf("%4d", j);
    }
    printf("\n");

    // 输出分隔线
    for (j = 1; j <= 9; j++)
    {
        printf("----");
    }
    printf("\n");

    // 输出九九乘法表的上三角部分
    for (i = 1; i <= 9; i++)
    {
        // 前面的空白用于对齐
        for (j = 1; j < i; j++)
        {
            printf("%4s", "");
        }

        // 输出当前行的乘积
        for (j = i; j <= 9; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    return 0;
}


