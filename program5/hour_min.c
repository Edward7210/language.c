/*��дһ������,���÷��ӱ�ʾ��ʱ��ת��Ϊ��Сʱ�ͷ��ӱ�ʾ��ʱ�䡣ʹ��#define��const����һ����ʾ
60�ķ��ų�����const������ͨ��whileѭ�����û��ظ�����ֵ,ֱ���û�����С�ڻ����0��ֵ��ֹͣ*/
#include <stdio.h>
#define Hour_Min 60
int main()
{
    int time, hour, min;
    while (1)
    {
        scanf("%d", &time);
        if (time > 0)
        {
            hour = time / Hour_Min;
            min = time % Hour_Min;
            printf("%d minutes = %d hour and %d minutes\n", time, hour, min);
        }
        else
        {
            break;
        }
    }

    return 0;
}