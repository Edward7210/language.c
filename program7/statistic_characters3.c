/*编写一个程序,读取整数直到用户输入0。输入结束后,程序应报告用户输入的偶数(不包括0)个数、这些
偶数的平均数、输入的奇数个数及其奇数的平均数。*/
#include <stdio.h>

int main()
{
    int num;
    int even_count = 0;
    int odd_count = 0;
    int even_sum = 0;
    int odd_sum = 0;

    printf("请输入整数,输入0结束:\n");
    scanf("%d", &num);

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            even_count++;
            even_sum += num;
        }
        else
        {
            odd_count++;
            odd_sum += num;
        }
        scanf("%d", &num);
    }

    // 计算平均数
    float even_avg = even_count == 0 ? 0 : (float)even_sum / even_count;
    float odd_avg = odd_count == 0 ? 0 : (float)odd_sum / odd_count;

    printf("偶数个数：%d,平均数：%.2f\n", even_count, even_avg);
    printf("奇数个数：%d,平均数：%.2   f\n", odd_count, odd_avg);

    return 0;
}
