/*��дһ������,�������ж���8������,Ȼ�󰴵����ӡ��8������*/
#include <stdio.h>

int main()
{
    int num[50];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 7; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }

    return 0;
}