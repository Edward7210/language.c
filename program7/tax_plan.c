/*1988�����������˰�ռƻ��ǽ�����򵥵�˰�շ���������Ϊ4�����,ÿ������������ȼ���
�����Ǹ�˰�ռƻ���ժҪ(��Ԫ��ΪӦ��˰������):
���                            ˰��
����                            17850��Ԫ��15%��,�������ְ�28%��
����                            17850��Ԫ��15%��,�������ְ�28%��
�ѻ�,����                       17850��Ԫ��15%��,�������ְ�28%��
�ѻ�,����                       17850��Ԫ��15%��,�������ְ�28%��
����,һ�й���Ϊ20000��Ԫ�ĵ�����˰��,Ӧ����˰��0.15*17850+0.28*(20000-17850)��Ԫ��
��дһ������,���û�ָ������˰����������˰����,Ȼ�����˰�𡣳���ͨ��ѭ�����û����Զ�����롣*/
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
        printf("��ѡ��˰������ࣺ\n");
        printf("a) ����\n");
        printf("b) ����\n");
        printf("c) �ѻ�, ����\n");
        printf("d) �ѻ�, ����\n");
        printf("q) �˳�\n");

        scanf(" %c", &category); // ʹ�� %c ��ʽ�ַ�����ȡ�ַ���ע��ǰ��Ŀո��Ժ��Ի��з���

        if (category == 'q')
        {
            printf("ллʹ�ã��ټ���\n");
            break; // �˳�ѭ��
        }

        printf("��������˰���룺");
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
            printf("������Ч����������ȷ��ѡ�\n");
            continue; // �ص�ѭ���Ŀ�ͷ
        }

        printf("˰��Ϊ��$%.2f\n", tax);
    } while (1); // ����ѭ����ֱ���û�ѡ���˳�

    return 0;
}
