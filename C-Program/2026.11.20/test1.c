 #include<stdio.h>

 int main(void)
 {
    int a[2][3] = {0, 1, 2, 3, 4, 5};
    int i, j;
    
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
 }