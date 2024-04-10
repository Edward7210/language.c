/*编写一个程序,提示用户输入一周工作的小时数,然后打印工资总额、税金和净收入。做如下假设:
a.基本工资=10.00美元/小时
b.加班(超过40小时)=1.5倍的时间
c.税率:     前300美元为15%
            续150美元为20%
            余下的为25%
用#define定义符号常量。不用在意是否符合当前的税法。*/
#include <stdio.h>
#define BASE_PAY_RATE 10.00   // 基本工资
#define OVERTIME_RATE 1.5     // 加班时的工资倍率
#define OVERTIME_THRESHOLD 40 // 加班的阈值
#define TAX_RATE_1 0.15       // 前300美元的税率
#define TAX_RATE_2 0.20       // 续150美元的税率
#define TAX_RATE_3 0.25       // 余下的税率
int main()
{
    float hours_worked;
    float base_pay, overtime_pay, total_pay, tax, net_income;

    printf("请输入一周工作的小时数： ");
    scanf("%f", &hours_worked);

    // 计算基本工资
    if (hours_worked <= OVERTIME_THRESHOLD)
    {
        base_pay = hours_worked * BASE_PAY_RATE;
        overtime_pay = 0.0;
    }
    else
    {
        base_pay = OVERTIME_THRESHOLD * BASE_PAY_RATE;
        overtime_pay = (hours_worked - OVERTIME_THRESHOLD) * BASE_PAY_RATE *
                       OVERTIME_RATE;
    }

    // 计算总工资
    total_pay = base_pay + overtime_pay;

    // 计算税金
    if (total_pay <= 300)
    {
        tax = total_pay * TAX_RATE_1;
    }
    else if (total_pay <= 450)
    {
        tax = 300 * TAX_RATE_1 + (total_pay - 300) * TAX_RATE_2;
    }
    else
    {
        tax = 300 * TAX_RATE_1 + 150 * TAX_RATE_2 +
              (total_pay - 450) * TAX_RATE_3;
    }

    // 计算净收入
    net_income = total_pay - tax;

    // 打印结果
    printf("工资总额: $%.2f\n", total_pay);
    printf("税金: $%.2f\n", tax);
    printf("净收入: $%.2f\n", net_income);

    return 0;
}
