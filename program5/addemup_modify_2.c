/*修改addemup_modify.c程序,使其能计算整数的平方和(可以认为第一天赚1块、第二天赚4块,第三天赚9块
以此类推)。*/
#include <stdio.h>
#include <math.h>
int main()
{
    int days;
    long long int money_total = 0; // 防止过大导致溢出
    printf("please enter your work days:");
    scanf("%d", &days);
    for (int i = 1; i <= days; i++)
    {
        money_total += pow(i, 2); // math函数中的pow(x,y)用来求x的y次方
    }
    printf("money_total:%lld", money_total);

    return 0;
}