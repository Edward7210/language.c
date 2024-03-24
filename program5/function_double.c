/*编写一个程序,提示用户输入一个double类型的数,并打印该数的立方值。自己设计一个函数计算并打印
立方值。main()函数要把用户输入的值传递给该函数。*/
#include <stdio.h>
double fun_double(double num);
int main()
{
    double num;
    printf("please enter the number:");
    scanf("%lf", &num);

    printf("%.1lf的立方值为:%.1lf", num, fun_double(num));

    return 0;
}
double fun_double(double num)
{
    return num = num * num * num;
}