/*�������������������С�
1.0 + 1.0/2.0 + 1.0/3.0 +....
1.0 - 1.0/2.0 + 1.0/3.0 -....
��дһ����������������������е��ܺ�,ֱ������ĳЩ�Ρ���ʾ:������-1��˵�-1,ż����-1��˵�1
*/
#include <stdio.h>

int main()
{
    int n;
    double sum1 = 0, sum2 = 0;

    while (scanf("%d", &n) && n != 0)
    {
        sum1 = 0; // ����sum1
        sum2 = 0; // ����sum2

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
