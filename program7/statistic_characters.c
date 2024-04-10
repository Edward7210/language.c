/*编写一个程序读取输入,读到#字符停止,然后报告读取的空格数、换行符数和所有其他字符的数量*/
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