/*Rabnud��ʿ������һ���罻Ȧ���������5�����ѡ���ע�⵽������������������ķ�ʽ������
��1����1�����ѣ�ʣ�µ�������������;��1����2�����ѣ�ʣ�µ���������������һ����ԣ�
��N����N�����ѣ�ʣ�µ�����������������дһ�����򣬼��㲢��ʾRabnud��ʿÿ�ܵ��������ó���
һֱ���У�ֱ�������˰������˰����Ǵ��Թ���һ�������罻Ȧ�����ȶ���ϵ�ĳ�Ա�����ֵ����ֵ
��ԼΪ130*/
#include <stdio.h>

int main()
{
    int friends = 5;
    int week = 1;

    while (friends <= 130)
    {
        friends = (friends - week) * 2;
        printf("��%d��������%d��\n", week, friends);
        week++;
    }

    return 0;
}