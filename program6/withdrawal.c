/*Chuckie LuckӮ����100����Ԫ,���ѽ������������8%���˻�,��ÿ������һ��,Chuckieȡ
��10�򡣱�дһ������,����������Chuckie��ȡ���˻���Ǯ*/
#include <stdio.h>

int main()
{
    double money = 1000000;
    int year = 0;

    do
    {
        money = money * (1 + 0.08);
        money -= 100000;
        year++;
    } while (money >= 100000);
    printf("year=%d", year);

    return 0;
}