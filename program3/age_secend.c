//һ���Լ��3.156*10e7,��дһ������,��ʾ�û���������,Ȼ����ʾ�������Ӧ��������
#include <stdio.h>
//��c������,'typedef'�ؼ�����Ϊ���е��������ʹ���һ���µı���
typedef long long int ll_int;
int main()
{
    int age;
    printf("�������������(��): ");
    scanf("%d",&age);

    ll_int age_second;
    age_second = age * 3.156*10e7;
    printf("�������ת��Ϊ��Ϊ:%lld��",age_second);
    return 0;
}