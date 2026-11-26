#include <stdio.h>

int main()
{
    int m, n;
    int i, temp;
    int digit, sum;

    // 输入范围
    scanf("%d%d", &m, &n);

    // 遍历m到n之间的整数
    for (i = m; i <= n; i++)
    {
        temp = i;
        sum = 0;

        // 提取每一位数字
        while (temp > 0)
        {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp = temp / 10;
        }

        // 判断是否为水仙花数
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
