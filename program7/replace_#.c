/*使用if else语句编写一个程序读取输入,读到#停止。用感叹号替换句号,用两个感叹号替换原来的感叹号
最后报告进行了多少次替换*/
#include <stdio.h>

int main()
{
    char ch;
    int replace_count = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            putchar('!');
            replace_count++;
        }
        else if (ch == '!')
        {
            putchar('!');
            putchar('!');
            replace_count++;
        }
        else
        {
            putchar(ch);
        }
    }
    printf("\n");
    printf("一共替换了%d次。", replace_count);

    return 0;
}