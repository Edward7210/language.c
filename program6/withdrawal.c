/*Chuckie Luck赢得了100万美元,他把奖金存入年利率8%的账户,在每年的最后一天,Chuckie取
出10万。编写一个程序,计算多少年后Chuckie会取完账户的钱*/
#include <stdio.h>

int main()
{
    double money = 1000000;
    int year = 0;

    do
    {
        money = money * (1 + 0.08);
        money -= 100000;
        year++;
    } while (money >= 100000);
    printf("year=%d", year);

    return 0;
}