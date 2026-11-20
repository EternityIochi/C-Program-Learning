// #include<stdio.h>

// int main()
// {
//     int a=0,b=5,c=3;
//     while(c>0 && a<5)
//     {   b=b-1;
//         ++a;
//         c--;
//     }
//     printf("%d,%d,%d\n",a ,b ,c);
//     return 0;
// }

#include<stdio.h>

int main()
{
    float fahr = 0,celsius;//fahr表示华氏温度，celsius表示摄氏温度
    while(fahr <= 300)
    {
        celsius=5.0/9*(fahr - 32);
        printf("%4.0f\t%6.1f\n", fahr, celsius);
        fahr += 20;
    }
    return 0;
}