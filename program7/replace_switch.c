/*使用Switch语句重写replace_#.c*/
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
    printf("一共替换了%d次。", replace_count);

    return 0;
}