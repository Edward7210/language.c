/*函数的初使用*/
#include <stdio.h>
#define NAME "GIGATHINK INC"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megabuck, CA 94904"
#define WIDTH 40

void starbar();     //函数原型

int main()
{
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar();

    return 0;
}
void starbar()  //定义函数
{
    for (int i = 1; i <= WIDTH; i++)
    {
        putchar('*');
    }
    putchar('\n');
}