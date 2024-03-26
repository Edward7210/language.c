/*编写一个程序打印一个表格,每一行打印一个整数、该数的平方、该数的立方。要求用户输入表格的上下限
使用一个for循环*/
#include <stdio.h>

int main()
{
    int lower_limit, upper_limit;

    printf("请输入表格的下限和上限：");
    scanf("%d %d", &lower_limit, &upper_limit);

    printf("整数\t平方\t立方\n");

    for (int i = lower_limit; i <= upper_limit; i++)
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}
