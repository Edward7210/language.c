/*编写一个程序,把用分钟表示的时间转换为用小时和分钟表示的时间。使用#define或const创建一个表示
60的符号常量或const变量。通过while循环让用户重复输入值,直到用户输入小于或等于0的值才停止*/
#include <stdio.h>
#define Hour_Min 60
int main()
{
    int time, hour, min;
    while (1)
    {
        scanf("%d", &time);
        if (time > 0)
        {
            hour = time / Hour_Min;
            min = time % Hour_Min;
            printf("%d minutes = %d hour and %d minutes\n", time, hour, min);
        }
        else
        {
            break;
        }
    }

    return 0;
}