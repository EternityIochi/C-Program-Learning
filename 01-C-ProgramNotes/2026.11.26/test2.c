#include <stdio.h>

int main()
{
    int red, yellow, green;

    for (red = 0; red <= 3; red++)
    {
        for (yellow = 0; yellow <= 3; yellow++)
        {
            for (green = 0; green <= 6; green++)
            {
                if (red + yellow + green == 8)
                {
                    printf("红球：%d 黄球：%d 绿球：%d\n",
                           red, yellow, green);
                }
            }
        }
    }

    return 0;
}
