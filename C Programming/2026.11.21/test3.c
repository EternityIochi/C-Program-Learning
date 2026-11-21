#include<stdio.h>

// int main()
// {
//     int a = 1, b = 2;

//     // int c = a + b;
//     int c = add_1(b)

//     printf("%d\n", c);
// }

// int test(void) {
//     int a =2;
// }
// int add_1(int x) {
//     int y = x+1;
//     return y;       //变量值的传递//
// }

// int a = 10;
// int* p = &a; //p本身也是一个变量，只不过它保存的是另一个变量的地址,"&a"表示a的地址
//int*表示指向int类型对象的指针
int main()
{
    int a = 10;
    int* p = &a;
    int b = *p;
    printf("%d,%d,%d", a,*p,b);
    return 0;
}