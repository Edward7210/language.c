/*��дһ������,��ʾ�û���������,Ȼ����ת��Ϊ����������������,�û�����18,��ת��Ϊ2��4�졣*/
#include <stdio.h>
#define Week_Day 7
int main()
{
    int days;
    while (1)
    {
        printf("please enter the number of days:");
        scanf("%d", &days);
        if (days <= 0)
        {
            printf("Done!");
            break;
        }
        int week, day;
        week = days / Week_Day;
        day = days % Week_Day;
        printf("%d days are %d weeks, %d days\n", days, week, day);
    }

    return 0;
}