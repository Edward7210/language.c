/*��дһ�������ȡ����,����#�ַ�ֹͣ,Ȼ�󱨸��ȡ�Ŀո��������з��������������ַ�������*/
#include <stdio.h>
#define SPACE ' '
#define huanhang '\n'
int main()
{
    char ch;
    int count_letters = 0;
    int count_space = 0;
    int count_huanhang = 0;

    ch = getchar();
    while (ch != '#')
    {
        if (ch == SPACE)
        {
            count_space++;
        }
        else if (ch == huanhang)
        {
            count_huanhang++;
        }
        else
        {
            count_letters++;
        }
        ch = getchar();
    }
    printf("space=%d\n huanhang=%d\n letters=%d\n", count_space, count_huanhang, count_letters);

    return 0;
}