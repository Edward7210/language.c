// 依赖外部循环的嵌套循环
#include <stdio.h>

int main()
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    for (row = 0; row < ROWS; row++) // 外循环
    {
        for (ch = ('A' + row); ch < ('A' + CHARS); ch++) // 内循环
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}