/*�޸�addemup_modify.c����,ʹ���ܼ���������ƽ����(������Ϊ��һ��׬1�顢�ڶ���׬4��,������׬9��
�Դ�����)��*/
#include <stdio.h>
#include <math.h>
int main()
{
    int days;
    long long int money_total = 0; // ��ֹ���������
    printf("please enter your work days:");
    scanf("%d", &days);
    for (int i = 1; i <= days; i++)
    {
        money_total += pow(i, 2); // math�����е�pow(x,y)������x��y�η�
    }
    printf("money_total:%lld", money_total);

    return 0;
}