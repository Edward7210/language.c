/*编写一个程序，要求用户输入一个华氏温度。程序应读取double类型的值作为温度值，并把该值作为参数
传递给一个用户自定义的函数Temperature()。该函数计算摄氏温度和开氏温度，并以小数点后面两位数字的
精度显示3中温度。要使用不同的温标来表示这3个温度值。下面是华氏温度转摄氏温度的公式
摄氏温度 = 5.0/9.0 * (华氏温度 - 32.0)
开氏温标常用于科学研究，0表示绝对零，代表最低温度。下面是摄氏温度转开氏温度的公式:
开氏温度 = 摄氏温度 + 273.16
Temperature()函数中用const创建温度转换中使用的变量。在main()函数中使用一个循环让用户重复输入温
度，当用户输入q或其他非数字时，循环结束。scanf()函数返回读取数据的数量，所以如果读取数字则返回1
如果读取q则不返回1.可以使用==运算符将scanf()的返回值和1作比较，测试两值是否相等。*/
#include <stdio.h>

void Temperature(double F_temperature);

int main()
{
    double F_temperature;
    int scanf_result;

    printf("请输入华氏温度(输入q退出):");
    while ((scanf_result = scanf("%lf", &F_temperature)) == 1)
    {
        Temperature(F_temperature);
        printf("请输入华氏温度(输入q退出):");
    }

    if (scanf_result != 1)
    {
        printf("Done!\n");
    }

    return 0;
}

void Temperature(double F_temperature)
{
    const double C_temperature = 5.0 / 9.0 * (F_temperature - 32.0);
    const double K_temperature = C_temperature + 273.16;

    printf("华氏温度：%.2lf\n", F_temperature);
    printf("摄氏温度：%.2lf\n", C_temperature);
    printf("开氏温度：%.2lf\n", K_temperature);
}