/*ʹ��Ƕ��ѭ��,������ĸ�ʽ��ӡ
F
FE
FED
FEDC
FEDCB
FEDCBA*/
#include <stdio.h>

int main()
{
    char letters[26] = "FEDCBA";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", letters[j]);
        }
        printf("\n");
    }

    return 0;
}