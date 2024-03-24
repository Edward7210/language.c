/*修改程序addemup.c,你可以认为addemup.c是计算20天里赚多少钱的程序(假设第一天赚1块、第二天赚
2块,以此类推)。修改程序,使其可以与用户交互,根据用户输入的数进行计算(即,用读入的一个变量来
替代20)*/
#include <stdio.h>

int main()
{
    int days, money_total = 0;
    printf("please enter your work days:");
    scanf("%d", &days);
    for (int i = 1; i <= days; i++)
    {
        money_total += i;
    }
    printf("money_total:%d", money_total);

    return 0;
}