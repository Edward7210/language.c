/*�޸�7�ļ���1,�ó�����Ը���һ����ѡ��Ĺ��ʵȼ��˵���ʹ��switch��ɹ��ʵȼ���ѡ�����г����
��ʾ�Ĳ˵�Ӧ����������:
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr                         2) $9.33/hr
3) $10.00/hr                        4) $11.20/hr
5) quit
*****************************************************************
���ѡ��1~4���е�����,����Ӧ��ѯ���û�������Сʱ��������Ҫͨ��ѭ������,�����û�����5���������
1~5���������,����Ӧ�����û�������ȷ��ѡ��,Ȼ�����ظ���ʾ�˵���ʾ�û����롣ʹ��#define��������
������ʾ�����ʵȼ���˰�ʡ�*/
#include <stdio.h>

#define PAY_RATE_1 8.75
#define PAY_RATE_2 9.33
#define PAY_RATE_3 10.00
#define PAY_RATE_4 11.20

#define OVERTIME_RATE 1.5     // �Ӱ�ʱ�Ĺ��ʱ���
#define OVERTIME_THRESHOLD 40 // �Ӱ����ֵ
#define TAX_RATE_1 0.15       // ǰ300��Ԫ��˰��
#define TAX_RATE_2 0.20       // ��150��Ԫ��˰��
#define TAX_RATE_3 0.25       // ���µ�˰��

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
        printf("ѡ������Ҫ�Ĺ��ʵȼ������: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("������һ�ܹ�����Сʱ���� ");
            scanf("%f", &hours_worked);
            base_pay = hours_worked * PAY_RATE_1;
            break;
        case 2:
            printf("������һ�ܹ�����Сʱ���� ");
            scanf("%f", &hours_worked);
            base_pay = hours_worked * PAY_RATE_2;
            break;
        case 3:
            printf("������һ�ܹ�����Сʱ���� ");
            scanf("%f", &hours_worked);
            base_pay = hours_worked * PAY_RATE_3;
            break;
        case 4:
            printf("������һ�ܹ�����Сʱ���� ");
            scanf("%f", &hours_worked);
            base_pay = hours_worked * PAY_RATE_4;
            break;
        case 5:
            printf("ллʹ�ã��ټ���\n");
            return 0;
        default:
            printf("��������ȷ��ѡ�\n");
            break;
        }

        // ����Ӱ๤��
        if (hours_worked > OVERTIME_THRESHOLD)
        {
            overtime_pay = (hours_worked - OVERTIME_THRESHOLD) * PAY_RATE_1 *
                           OVERTIME_RATE;
        }
        else
        {
            overtime_pay = 0.0;
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
            tax = 300 * TAX_RATE_1 + 150 * TAX_RATE_2 + (total_pay - 450) * TAX_RATE_3;
        }

        // ���㾻����
        net_income = total_pay - tax;

        // ��ӡ���
        printf("\n�����ܶ�: $%.2f\n", total_pay);
        printf("˰��: $%.2f\n", tax);
        printf("������: $%.2f\n\n", net_income);

    } while (choice != 5);

    return 0;
}
