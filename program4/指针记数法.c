// 编写一个程序,读取一个浮点数,首先以小数点记数法打印,然后以指数记数法打印。用下面的格式进行输出。
#include <stdio.h>

int main()
{
    float num;
    scanf("%f", &num);

    printf("The input is %.1f or %.1e\n", num, num);
    printf("The input is +%.3f or %.3E\n", num, num);

    return 0;
}