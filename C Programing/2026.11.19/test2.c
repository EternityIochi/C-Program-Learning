#include<stdio.h>

int main(void)
{
    char ch = 0;
    int upperNum = 0;
    int lowerNum = 0;
    int digitNum = 0;

    printf("请输入一串字符,按回车结束: \n");

    ch = getchar();
    while (ch != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
            upperNum++;
        else if (ch >= 'a' && ch <= 'z')
            lowerNum++;
        else if (ch >= '0' && ch <= '9')
            digitNum++;

        ch = getchar();
    }

    printf("大写字母个数: %d\n", upperNum);
    printf("小写字母个数: %d\n", lowerNum);
    printf("数字字符个数：%d\n", digitNum);

    return 0;
}