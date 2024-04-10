/*��дһ������,��ʾ�û�����һ�ܹ�����Сʱ��,Ȼ���ӡ�����ܶ˰��;����롣�����¼���:
a.��������=10.00��Ԫ/Сʱ
b.�Ӱ�(����40Сʱ)=1.5����ʱ��
c.˰��:     ǰ300��ԪΪ15%
            ��150��ԪΪ20%
            ���µ�Ϊ25%
��#define������ų��������������Ƿ���ϵ�ǰ��˰����*/
#include <stdio.h>
#define BASE_PAY_RATE 10.00   // ��������
#define OVERTIME_RATE 1.5     // �Ӱ�ʱ�Ĺ��ʱ���
#define OVERTIME_THRESHOLD 40 // �Ӱ����ֵ
#define TAX_RATE_1 0.15       // ǰ300��Ԫ��˰��
#define TAX_RATE_2 0.20       // ��150��Ԫ��˰��
#define TAX_RATE_3 0.25       // ���µ�˰��
int main()
{
    float hours_worked;
    float base_pay, overtime_pay, total_pay, tax, net_income;

    printf("������һ�ܹ�����Сʱ���� ");
    scanf("%f", &hours_worked);

    // �����������
    if (hours_worked <= OVERTIME_THRESHOLD)
    {
        base_pay = hours_worked * BASE_PAY_RATE;
        overtime_pay = 0.0;
    }
    else
    {
        base_pay = OVERTIME_THRESHOLD * BASE_PAY_RATE;
        overtime_pay = (hours_worked - OVERTIME_THRESHOLD) * BASE_PAY_RATE *
                       OVERTIME_RATE;
    }

    // �����ܹ���
    total_pay = base_pay + overtime_pay;

    // ����˰��
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
        tax = 300 * TAX_RATE_1 + 150 * TAX_RATE_2 +
              (total_pay - 450) * TAX_RATE_3;
    }

    // ���㾻����
    net_income = total_pay - tax;

    // ��ӡ���
    printf("�����ܶ�: $%.2f\n", total_pay);
    printf("˰��: $%.2f\n", tax);
    printf("������: $%.2f\n", net_income);

    return 0;
}
