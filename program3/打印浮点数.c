//编写程序,输入一个浮点数,先打印成小数点形式,再打印成指数形式,最后打印成p记数法。
#include <stdio.h>

int main()
{
    double num;
    printf("Enter a float-point value: ");
    scanf("%lf",&num);
    printf("fixed-point notation: %.6lf\n",num);
    //在C语言中,可以使用 %e 格式说明符来将浮点数打印为指数形式。
    printf("exponential notation: %e\n",num);
    //在C语言中,可以使用 %a 格式说明符来将浮点数打印为p记数法。
    printf("p notation: %a",num);
    return 0;
}