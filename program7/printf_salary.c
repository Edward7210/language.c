/*修改7的假设1,让程序可以给出一个供选择的工资等级菜单。使用switch完成工资等级的选择。运行程序后
显示的菜单应该类似这样:
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr                         2) $9.33/hr
3) $10.00/hr                        4) $11.20/hr
5) quit
*****************************************************************
如果选择1~4其中的数字,程序应该询问用户工作的小时数。程序要通过循环运行,除非用户输入5。如果输入
1~5以外的数字,程序应提醒用户输入正确的选项,然后再重复显示菜单提示用户输入。使用#define创建符号
常量表示各工资等级和税率。*/
#include <stdio.h>

#define PAY_RATE_1 8.75
#define PAY_RATE_2 9.33
#define PAY_RATE_3 10.00
#define PAY_RATE_4 11.20

#define OVERTIME_RATE 1.5     // 加班时的工资倍率
#define OVERTIME_THRESHOLD 40 // 加班的阈值
#define TAX_RATE_1 0.15       // 前300美元的税率
#define TAX_RATE_2 0.20       // 续150美元的税率
#define TAX_RATE_3 0.25       // 余下的税率

int main()
{
    int choice;
    float hours_worked;
    float base_pay, overtime_pay, total_pay, tax, net_income;

    do
    {
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $%.2f/hr\t2) $%.2f/hr\n", PAY_RATE_1, PAY_RATE_2);
        printf("3) $%.2f/hr\t4) $%.2f/hr\n", PAY_RATE_3, PAY_RATE_4);
        printf("5) quit\n");
        printf("*****************************************************************\n");
        printf("选择您想要的工资等级或操作: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("请输入一周工作的小时数： ");
            scanf("%f", &hours_worked);
            base_pay = hours_worked * PAY_RATE_1;
            break;
        case 2:
            printf("请输入一周工作的小时数： ");
            scanf("%f", &hours_worked);
            base_pay = hours_worked * PAY_RATE_2;
            break;
        case 3:
            printf("请输入一周工作的小时数： ");
            scanf("%f", &hours_worked);
            base_pay = hours_worked * PAY_RATE_3;
            break;
        case 4:
            printf("请输入一周工作的小时数： ");
            scanf("%f", &hours_worked);
            base_pay = hours_worked * PAY_RATE_4;
            break;
        case 5:
            printf("谢谢使用，再见！\n");
            return 0;
        default:
            printf("请输入正确的选项！\n");
            break;
        }

        // 计算加班工资
        if (hours_worked > OVERTIME_THRESHOLD)
        {
            overtime_pay = (hours_worked - OVERTIME_THRESHOLD) * PAY_RATE_1 *
                           OVERTIME_RATE;
        }
        else
        {
            overtime_pay = 0.0;
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
            tax = 300 * TAX_RATE_1 + 150 * TAX_RATE_2 + (total_pay - 450) * TAX_RATE_3;
        }

        // 计算净收入
        net_income = total_pay - tax;

        // 打印结果
        printf("\n工资总额: $%.2f\n", total_pay);
        printf("税金: $%.2f\n", tax);
        printf("净收入: $%.2f\n\n", net_income);

    } while (choice != 5);

    return 0;
}
