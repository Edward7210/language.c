/*��дһ������,��ʾ��ģ����Ľ�������û�����ĵ�1��������Ϊ��ģ������ĵ�2���������,������
��������б��ֲ��䡣�û�������������ǵ�1��������󡣵��û�����һ������ֵ��,��������*/
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d", &num1);
    printf("Now enter the first operand:");
    scanf("%d", &num2);
    printf("%d %% %d is %d\n", num2, num1, num2 % num1);
    while (1)
    {
        printf("Enter next number for first operand:");
        scanf("%d", &num2);
        if (num2 <= 0)
        {
            printf("Done!\n");
            break;
        }
        printf("%d %% %d is %d\n", num2, num1, num2 % num1);
    }

    return 0;
}