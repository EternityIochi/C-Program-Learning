#include<stdio.h>
#include<stdio.h>

int main() 
{
    unsigned int number;
    int result;

    printf("输入一个无符号整数:\n");
    scanf("%u", &number);

    result = number % 2;

    if (result == 0)
    printf("%u 是偶数\n", number);
    
    if (result == 1)
    printf("%u 是奇数\n", number);

    return 0;
}