#include<stdio.h>

int main()
{
    int a[4] = {12, 20, 26, 27};
    printf("%d", *(((char*)a + 2)));
    return 0;
}