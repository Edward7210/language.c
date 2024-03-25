// 使用嵌套循环
#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main()
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)                //外循环
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++)    //内循环
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}