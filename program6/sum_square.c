/*��дһ������,Ҫ���û�����һ������������һ����������,��������޵����޷�Χ������������ƽ����,
����ʾ��������Ȼ����������ʾ�û��������޺���������,����ʾ���,ֱ���û�����������������ڻ�
С����������Ϊֹ��*/
#include <stdio.h>
#include <math.h>
int main()
{
    int lower_limit, upper_limit;
    printf("Enter lower and upper integer limits: ");
    int status;
    while ((status = scanf("%d %d", &lower_limit, &upper_limit)) == 2)
    {
        if (lower_limit >= upper_limit)
        {
            printf("Done!\n");
            break;
        }
        int sum = 0; // ��ʼ��,���ܷ�ǰ��,�������
        for (int i = lower_limit; i <= upper_limit; i++)
        {
            sum += pow(i, 2);
        }
        int low_2 = pow(lower_limit, 2);
        int up_2 = pow(upper_limit, 2);
        printf("The sums of the squares from %d to %d is %d\n", low_2, up_2, sum);
        printf("Enter next set of limits: ");
    }

    return 0;
}