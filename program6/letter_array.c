/*��дһ������,����һ������26��Ԫ�ص�����,�������д洢26��Сд��ĸ��Ȼ���ӡ�������������*/
#include <stdio.h>
#define size 26
int main()
{
    int num[size] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                     'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < size; i++)
    {
        printf("%c ", num[i]);
    }
    printf("\n");

    char num2[size] = "abcdefghijklmnopqrstuvwxyz";
    for (int j = 0; j < size; j++)
    {
        printf("%c ", num2[j]);
    }

    return 0;
}