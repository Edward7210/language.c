// ʹ��Ƕ��ѭ��
#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main()
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)                //��ѭ��
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++)    //��ѭ��
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}