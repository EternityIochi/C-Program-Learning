#include <stdio.h>

int main()
{
    int a[100][100];
    int m, n;
    int max, row = 0, col = 0;

    // 输入行数和列数
    scanf("%d%d", &m, &n);

    // 输入数组元素
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // 初始化最大值
    max = a[0][0];

    // 查找最大值及其下标
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                row = i;
                col = j;
            }
        }
    }

    // 输出结果
    printf("最大值：%d\n", max);
    printf("行下标：%d\n", row);
    printf("列下标：%d\n", col);

    return 0;
}