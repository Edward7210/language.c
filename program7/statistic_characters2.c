/*��дһ�������ȡ����,����#�ַ�ֹͣ������Ҫ��ӡÿ��������ַ��Լ���Ӧ��ASCII��ÿ�д�ӡ8��"
�ַ�-ASCII��"��ϡ�����:ʹ���ַ���������ģ�����(%)��ÿ8��ѭ������ʱ��ӡһ�����з���*/
#include <stdio.h>

int main()
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        printf("%c-%d ", ch, ch);
        count++;

        if (count % 8 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}