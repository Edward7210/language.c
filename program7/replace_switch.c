/*ʹ��Switch�����дreplace_#.c*/
#include <stdio.h>

int main()
{
    char ch;
    int replace_count = 0;

    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.':
            putchar('!');
            replace_count++;
            break;
        case '!':
            putchar('!');
            putchar('!');
            replace_count++;
            break;
        default:
            putchar(ch);
        }
    }
    printf("\n");
    printf("һ���滻��%d�Ρ�", replace_count);

    return 0;
}