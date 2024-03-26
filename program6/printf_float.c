/*编写一个程序,要求用户输入两个浮点数,并打印两数之差除以两数成绩的结果。在用户输入非数字之前
程序应循环处理用户输入的每对值。*/
#include <stdio.h>
int main()
{
    double n1, n2;
    int status;
    while (status = scanf("%lf %lf", &n1, &n2) == 2)
    {
        printf("%.2lf\n", (n1 - n2) / (n1 * n2));
    }

    return 0;
}