/*��дһ�������ӡһ�����,ÿһ�д�ӡһ��������������ƽ����������������Ҫ���û��������������
ʹ��һ��forѭ��*/
#include <stdio.h>

int main()
{
    int lower_limit, upper_limit;

    printf("������������޺����ޣ�");
    scanf("%d %d", &lower_limit, &upper_limit);

    printf("����\tƽ��\t����\n");

    for (int i = lower_limit; i <= upper_limit; i++)
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}
