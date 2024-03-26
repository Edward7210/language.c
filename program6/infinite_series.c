/*考虑下面两个无线序列。
1.0 + 1.0/2.0 + 1.0/3.0 +....
1.0 - 1.0/2.0 + 1.0/3.0 -....
编写一个程序计算这两个无线序列的总和,直到到达某些次。提示:奇数个-1相乘的-1,偶数个-1相乘的1
*/
#include <stdio.h>

int main()
{
    int n;
    double sum1 = 0, sum2 = 0;

    while (scanf("%d", &n) && n != 0)
    {
        sum1 = 0; // 重置sum1
        sum2 = 0; // 重置sum2

        for (int i = 1; i <= n; i++)
        {
            sum1 += 1.0 / i;
        }

        int count = 1;
        for (int i = 1; i <= n; i++)
        {
            sum2 += count * 1.0 / i;
            count = -count;
        }
        printf("%.2lf\n", sum1);
        printf("%.2lf\n", sum2);
    }

    return 0;
}
