/*Daphne��10%�ĵ���ϢͶ����100��Ԫ��Deirdre��5%�ĸ�����ϢͶ����100��Ԫ����дһ������,
������Ҫ������Deirdre��Ͷ�ʶ�Żᳬ��Daphne,����ʾ�������˵�Ͷ�ʶ*/
#include <stdio.h>

int main()
{
    double sum1 = 100; // Daphne
    double sum2 = 100; // Deirdre
    int year = 0;
    do
    {
        sum1 += 10;
        sum2 = sum2 * (1 + 0.05);
        year++;
    } while (sum2 < sum1);

    printf("Daphne=%.2lf    Deirdre=%.2lf\n", sum1, sum2);
    printf("year = %d", year);

    return 0;
}