/*�޸ĳ���addemup.c,�������Ϊaddemup.c�Ǽ���20����׬����Ǯ�ĳ���(�����һ��׬1�顢�ڶ���׬
2��,�Դ�����)���޸ĳ���,ʹ��������û�����,�����û�����������м���(��,�ö����һ��������
���20)*/
#include <stdio.h>

int main()
{
    int days, money_total = 0;
    printf("please enter your work days:");
    scanf("%d", &days);
    for (int i = 1; i <= days; i++)
    {
        money_total += i;
    }
    printf("money_total:%d", money_total);

    return 0;
}