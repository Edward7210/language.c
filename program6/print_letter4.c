/*��дһ������,��ʾ�û������д��ĸ��ʹ��Ƕ��ѭ��������������͵ĸ�ʽ��ӡ��ĸ
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA   */
#include <stdio.h>

int main()
{
    char input;
    printf("Please enter letter:(A~Z):");
    scanf("%c", &input);

    int Row = input - 'A' + 1;  //��ȡ����

    for (int i = 0; i < Row; i++)
    {
        // ��ӡ�ո�
        for (int j = 0; j < Row - i - 1; j++)
        {
            printf(" ");
        }

        // ��ӡ���
        char letter = 'A';
        for (int j = 0; j <= i; j++)
        {
            printf("%c", letter++);
        }

        // ��ӡ�Ҳ�
        letter--;
        for (int j = 0; j < i; j++)
        {
            printf("%c", --letter);
        }

        printf("\n");
    }

    return 0;
}