/*��д�����ȡ����,����#ֹͣ,����ei���ֵĴ�����*/
#include <stdio.h>

int main()
{
    char ch;
    char prev_ch;
    int count_ei = 0;

    while ((ch = getchar()) != '#')
    {
        if (prev_ch == 'e' && ch == 'i')
        {
            count_ei++;
        }
        prev_ch = ch;
    }
    printf("ei���ֵĴ���Ϊ:%d��", count_ei);

    return 0;
}