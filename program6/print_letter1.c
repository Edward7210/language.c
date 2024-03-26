/*使用嵌套循环,按下面的格式打印
$
$$
$$$
$$$$$
$$$$$$*/
#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}