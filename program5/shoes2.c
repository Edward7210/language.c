// 计算多个不同鞋码对应的脚长
#include <stdio.h>
#define ADJUST 7.31 // 字符变量
int main()
{
    const double SCALE = 0.333; // const变量
    double shoe, foot;

    printf("Shoe size (men's)   foot length\n");
    shoe = 3.0;
    while (shoe < 18.5)
    { // while循环开始
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe += 1.0;
    } // while循环结束
    printf("If the shoe fits,wear it.\n");

    return 0;
}