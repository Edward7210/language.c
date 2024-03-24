/*��дһ������,��ʾ�û��������(��λ:����),���ֱ������׺�Ӣ�ߡ�Ӣ��Ϊ��λ��ʾ��ֵ,������С��
���֡��ó���Ӧ�������û��ظ��������,ֱ������һ������ֵ��*/
#include <stdio.h>

int main()
{
    double height;
    while (1)
    {
        printf("Enter a height in centimeters:");
        scanf("%lf", &height);
        if (height <= 0)
        {
            printf("Bye\n");
            break;
        }

        int foot = height / 30.48;
        double inch = (height - foot * 30.48) / 2.54;
        printf("%.1lf cm = %d feet, %.1lf inches\n", height, foot, inch);
    }

    return 0;
}