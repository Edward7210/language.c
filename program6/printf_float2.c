// 使用函数返回计算的结果。
#include <stdio.h>
double result(double n1, double n2)
{
    return (n1 - n2) / (n1 * n2);
}
int main()
{
    double n1, n2;
    int status;
    double result_num;
    while (status = scanf("%lf %lf", &n1, &n2) == 2)
    {
        printf("%.2lf\n", result_num = result(n1, n2));
    }

    return 0;
}