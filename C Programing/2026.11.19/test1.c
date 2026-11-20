#include<stdio.h>

int main(void)
{
    double result = 1.0;
    int n = 1;
    int i = 1;

    printf("请输入求阶乘中的n（1~100）：");
    scanf("%d", &n);

    if (n >= 1 && n <=100)
    {
        result = 1.0;
        for (i = 1; i <= n; i++)
        {
            result *=i;
        }
        printf("%d的阶乘是%.0f\n", n, result);
    }
    else
    {
        printf("n=%d超出1~100的范围，无法计算!\n", n);
    }
    
    return 0;
}