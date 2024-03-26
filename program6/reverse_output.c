/*编写一个程序,在数组中读入8个整数,然后按倒叙打印这8个整数*/
#include <stdio.h>

int main()
{
    int num[50];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 7; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }

    return 0;
}