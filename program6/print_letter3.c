/*ʹ��Ƕ��ѭ��,������ĸ�ʽ��ӡ
A
BC
DEF
GHIJ
KLMNO
PQRSTU*/
#include <stdio.h>
#define size 26
int main()
{
    int index = 0; // �±�����
    char letters[size] = "ABCDEFGHIJKLMNOPQRSTU";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", letters[index++]);
            /*printf("%c", letters[index];
            index++;    ������ȼ�*/
        }
        printf("\n");
    }
}