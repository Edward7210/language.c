/*ABC邮购杂货店出售的洋藓售价为2.05美元/磅,甜菜售价为1.15美元/磅,胡萝卜售价为1.09美元/磅。
在添加运费之前,100美元的订单有5%的打折优惠。少于或等于5磅的订单收取6.5美元的运费和包装费,
5~20磅的订单收取14美元的运费和包装费,超过20磅的订单在14美元的基础上没续重1磅增加0.5美元。
编写一个程序,在循环中用switch语句实现用户输入不同的字母时有不用的相应,即输入a的响应是让用户
输入洋藓的磅数,b是甜菜的磅数,c是胡萝卜的磅数,q是退出订阅。程序要记录累计的重量。即,如果用户
输入4磅的甜菜,然后输入5磅的甜菜,程序应该报告9磅的甜菜。然后,该程序要计算货物的总价、折扣、
运费和包装费。随后,程序应显示所有的购买信息:货物售价、订购的重量、订购的蔬菜费用、订购的总费用
折扣、运费和包装费,以及所有的费用总额。*/
#include <stdio.h>

int main()
{
    char choice;
    int pounds_xian, pounds_tian, pounds_hu;
    int total_pounds = 0;
    float price_xian = 2.05, price_tian = 1.15, price_hu = 1.09;
    float discount = 0.05;
    float freight = 0;
    float total_cost, total_veggie_cost, total_discount, total_freight, total_packaging;

    printf("欢迎光临ABC邮购杂货店!\n");

    do
    {
        printf("\n请选择您要购买的物品:\n");
        printf("a. 洋藓\n");
        printf("b. 甜菜\n");
        printf("c. 胡萝卜\n");
        printf("q. 退出\n");
        printf("请选择： ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case 'a':
            printf("请输入洋藓的磅数：");
            scanf("%d", &pounds_xian);
            total_pounds += pounds_xian;
            break;
        case 'b':
            printf("请输入甜菜的磅数：");
            scanf("%d", &pounds_tian);
            total_pounds += pounds_tian;
            break;
        case 'c':
            printf("请输入胡萝卜的磅数：");
            scanf("%d", &pounds_hu);
            total_pounds += pounds_hu;
            break;
        case 'q':
            break;
        default:
            printf("无效选择，请重新选择。\n");
            break;
        }
    } while (choice != 'q');

    // 计算费用
    total_veggie_cost = pounds_xian * price_xian + pounds_tian * price_tian + pounds_hu * price_hu;
    if (total_pounds <= 5)
    {
        freight = 6.5;
    }
    else if (total_pounds <= 20)
    {
        freight = 14;
    }
    else
    {
        freight = 14 + (total_pounds - 20) * 0.5;
    }
    total_discount = total_veggie_cost * discount;
    total_cost = total_veggie_cost - total_discount + freight;

    // 打印购买信息
    printf("\n购买信息:\n");
    printf("洋藓单价：$%.2f/磅，购买重量：%d磅\n", price_xian, pounds_xian);
    printf("甜菜单价：$%.2f/磅，购买重量：%d磅\n", price_tian, pounds_tian);
    printf("胡萝卜单价：$%.2f/磅，购买重量：%d磅\n", price_hu, pounds_hu);
    printf("订购的蔬菜费用：$%.2f\n", total_veggie_cost);
    printf("折扣：$%.2f\n", total_discount);
    printf("运费和包装费：$%.2f\n", freight);
    printf("总费用：$%.2f\n", total_cost);

    return 0;
}
