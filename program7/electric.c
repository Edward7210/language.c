// 计算电费
#include <stdio.h>
#define RATEL1 0.13230                               // 首次使用360kwh的费率
#define RATEL2 0.15040                               // 接着再使用108kwh的费率
#define RATEL3 0.30025                               // 接着再使用252kwh的费率
#define RATEL4 0.34025                               // 使用超过720kwh的费率
#define BREAK1 360.0                                 // 费率的第1个分界点
#define BREAK2 468.0                                 // 费率的第2个分界点
#define BREAK3 720.0                                 // 费率的第3个分界点
#define BASE1 (RATEL1 * BREAK1)                      // 使用360kwh的费用
#define BASE2 (BASE1 + (RATEL2 * (BREAK2 - BREAK1))) // 使用468kwh的费用
#define BASE3 (BASE2 + (RATEL3 * (BREAK3 - BREAK2))) // 使用720kwh的费用
int main()
{
    double kwh;  // 使用的千瓦时
    double bill; // 电费

    printf("Please enter the kwh used.\n");
    scanf("%lf", &kwh); //%lf对应double类型
    if (kwh <= BREAK1)
    {
        bill = RATEL1 * kwh;
    }
    else if (kwh <= BREAK2) // 360~460kwh
    {
        bill = BASE1 + (RATEL2 * (kwh - BREAK1));
    }
    else if (kwh <= BREAK3) // 468~720kwh
    {
        bill = BASE2 + (RATEL3 * (kwh - BREAK2));
    }
    else // 超过720kwh
    {
        bill = BASE3 + (RATEL4 * (kwh - BREAK3));
    }
    printf("The charge for %.lf kwh is $%1.2f.\n", kwh, bill);

    return 0;
}