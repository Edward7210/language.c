/*编写程序读取输入,读到#停止,报告ei出现的次数。*/
#include <stdio.h>

int main()
{
    char ch;
    char prev_ch;
    int count_ei = 0;

    while ((ch = getchar()) != '#')
    {
        if (prev_ch == 'e' && ch == 'i')
        {
            count_ei++;
        }
        prev_ch = ch;
    }
    printf("ei出现的次数为:%d。", count_ei);

    return 0;
}