/*��дһ�������һ�����ʶ���һ���ַ��������У�Ȼ�����ӡ������ʡ���ʾstrlen()�����ڼ�������
���һ���ַ����±�*/
#include <stdio.h>
#include <string.h>
int main()
{
    char words[] = "stars";

    int words_num = strlen(words);
    for (int i = words_num - 1; i >= 0; i--)
    {
        printf("%c ", words[i]);
    }

    return 0;
}