/*ʹ��if else����дһ�������ȡ����,����#ֹͣ���ø�̾���滻���,��������̾���滻ԭ���ĸ�̾��
��󱨸�����˶��ٴ��滻*/
#include <stdio.h>

int main()
{
    char ch;
    int replace_count = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            putchar('!');
            replace_count++;
        }
        else if (ch == '!')
        {
            putchar('!');
            putchar('!');
            replace_count++;
        }
        else
        {
            putchar(ch);
        }
    }
    printf("\n");
    printf("һ���滻��%d�Ρ�", replace_count);

    return 0;
}