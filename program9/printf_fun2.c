#include <stdio.h>
void printf_fun(char, int, int);
int main()
{
    char ch;
    int i, j;

    scanf("%c %d %d", &ch, &i, &j);

    printf_fun(ch, i, j);

    return 0;
}
void printf_fun(char ch, int i, int j)
{
    int num, row;
    for (num = 1; num <= j; num++)
    {
        for (row = 1; row <= i; row++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}