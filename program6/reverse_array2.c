/*��дһ������,��ȡһ������,Ȼ�����������ݵ����ӡ���������԰�����
�洢��char���͵�������,����ÿ���ַ�������255��*/
#include <stdio.h>
#include <string.h>

int main()
{
    char array[255];
    while (scanf("%s", array) != EOF)
    {
        int length_array = strlen(array);
        for (int i = length_array - 1; i >= 0; i--)
        {
            printf("%c", array[i]);
        }
        printf("\n");
    }

    return 0;
}
