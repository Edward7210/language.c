/*��дһ������,��ȡ����ֱ���û�����0�����������,����Ӧ�����û������ż��(������0)��������Щ
ż����ƽ�����������������������������ƽ������*/
#include <stdio.h>

int main()
{
    int num;
    int even_count = 0;
    int odd_count = 0;
    int even_sum = 0;
    int odd_sum = 0;

    printf("����������,����0����:\n");
    scanf("%d", &num);

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            even_count++;
            even_sum += num;
        }
        else
        {
            odd_count++;
            odd_sum += num;
        }
        scanf("%d", &num);
    }

    // ����ƽ����
    float even_avg = even_count == 0 ? 0 : (float)even_sum / even_count;
    float odd_avg = odd_count == 0 ? 0 : (float)odd_sum / odd_count;

    printf("ż��������%d,ƽ������%.2f\n", even_count, even_avg);
    printf("����������%d,ƽ������%.2   f\n", odd_count, odd_avg);

    return 0;
}
