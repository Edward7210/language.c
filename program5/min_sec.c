// ������ת��Ϊ�ֺ���
#include <stdio.h>
#define SEC_PER_MIN 60 // 1����60s
int main()
{
    int sec, min, left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf("%d", &sec);
    while (sec > 0) // ��ȡ����
    {
        min = sec / SEC_PER_MIN;  // �ضϷ�����
        left = sec % SEC_PER_MIN; // ʣ�������
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");

    return 0;
}