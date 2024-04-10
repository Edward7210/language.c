/*1988年的美国联邦税收计划是近代最简单的税收方案。它分为4个类别,每个类别有两个等级。
下面是该税收计划的摘要(美元数为应征税的收入):
类别                            税金
单身                            17850美元按15%计,超出部分按28%计
户主                            17850美元按15%计,超出部分按28%计
已婚,共有                       17850美元按15%计,超出部分按28%计
已婚,离异                       17850美元按15%计,超出部分按28%计
例如,一切工资为20000美元的单身纳税人,应缴纳税费0.15*17850+0.28*(20000-17850)美元。
编写一个程序,让用户指定缴纳税金的种类和纳税收入,然后计算税金。程序通过循环让用户可以多次输入。*/
#include <stdio.h>

#define BASE_INCOME 17850.0
#define LOW_TAX_RATE 0.15
#define HIGH_TAX_RATE 0.28

int main()
{
    char category;
    float income;
    float tax;

    do
    {
        printf("请选择税金的种类：\n");
        printf("a) 单身\n");
        printf("b) 户主\n");
        printf("c) 已婚, 共有\n");
        printf("d) 已婚, 离异\n");
        printf("q) 退出\n");

        scanf(" %c", &category); // 使用 %c 格式字符串读取字符，注意前面的空格以忽略换行符等

        if (category == 'q')
        {
            printf("谢谢使用，再见！\n");
            break; // 退出循环
        }

        printf("请输入纳税收入：");
        scanf("%f", &income);

        switch (category)
        {
        case 'a':
            tax = LOW_TAX_RATE * BASE_INCOME + HIGH_TAX_RATE * (income - BASE_INCOME);
            break;
        case 'b':
            tax = LOW_TAX_RATE * BASE_INCOME + HIGH_TAX_RATE * (income - BASE_INCOME);
            break;
        case 'c':
            tax = LOW_TAX_RATE * BASE_INCOME + HIGH_TAX_RATE * (income - BASE_INCOME);
            break;
        case 'd':
            tax = LOW_TAX_RATE * BASE_INCOME + HIGH_TAX_RATE * (income - BASE_INCOME);
            break;
        default:
            printf("输入无效，请输入正确的选项。\n");
            continue; // 回到循环的开头
        }

        printf("税金为：$%.2f\n", tax);
    } while (1); // 无限循环，直到用户选择退出

    return 0;
}
