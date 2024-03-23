/*编写一个程序,将一个double类型的变量设置为1.0/3.0,一个float类型的变量设置为1.0/3.0。
分别显示两次计算的结果各三次:一次显示小数点后面6位数字:一次显示小数点后面12位数字:
一次显示小数点后面16位数字。程序中要包含float.t头文件,并显示FLT_DIG和DBL_DIG的值。*/
#include <stdio.h>
#include <float.h>
int main()
{
    double num1 = 1.0 / 3.0;
    float num2 = 1.0 / 3.0;

    printf("FLT_DIG = %d\n", FLT_DIG);
    printf("DBL_DIG = %d\n\n", DBL_DIG);
    printf("%.6lf %.6f\n", num1, num2);
    printf("%.12lf %.12f\n", num1, num2);
    printf("%.16lf %.16f\n", num1, num2);

    return 0;
}