#include<stdio.h>

int main()
{
    int a=0,b=5,c=3;
    while(c>0 && a<5)
    {   b=b-1;
        ++a;
        c--;
    }
    printf("%d,%d,%d\n",a ,b ,c);
}