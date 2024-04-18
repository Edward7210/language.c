/*设计一个函数chline(ch,i,j),打印指定的字符j行i列。*/
#include <stdio.h>
void chline(char, int, int);
int main()
{
    char ch;
    int i, j;

    scanf("%c", &ch);
    scanf("%d %d", &i, &j);
    chline(ch, i, j);

    return 0;
}
void chline(char ch, int i, int j)
{
    int row, col;
    for (row = 1; row <= j; row++)
    {
        for (col = 1; col <= i; col++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}