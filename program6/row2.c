// �����ⲿѭ����Ƕ��ѭ��
#include <stdio.h>

int main()
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    for (row = 0; row < ROWS; row++) // ��ѭ��
    {
        for (ch = ('A' + row); ch < ('A' + CHARS); ch++) // ��ѭ��
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}