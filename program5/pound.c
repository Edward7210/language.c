//定义一个带一个参数的函数
#include <stdio.h>
void pound(int n);      //ASCII函数原型声明
int main()
{
    int times=5;
    char ch='!';        //ASCII码是33
    float f=6.0;

    pound(times);       //int类型的参数
    pound(ch);          //和pound((int)ch);相同
    pound(f);           //和pound((int)f);相同

    return 0;
}
void pound(int n)       //ASCI风格函数头
{                       //表名该函数接受一个int类型的参数
    while (n-->0)
    {
        printf("#");
    }
    printf("\n");
}