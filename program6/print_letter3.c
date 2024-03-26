/*使用嵌套循环,按下面的格式打印
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
    int index = 0; // 下标索引
    char letters[size] = "ABCDEFGHIJKLMNOPQRSTU";
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", letters[index++]);
            /*printf("%c", letters[index];
            index++;    与上面等价*/
        }
        printf("\n");
    }
}