/*编写一个程序,提示用户输入以兆位每秒(MB/s)为单位的下载速度和以兆字节(MB)为单位的文件大小。
程序中应计算文件的下载时间。注意,这里1字节等于8位。使用float类型,并用/作为除号。
该程序要以下面的格式打印3个变量的值(下载速度、文件大小和下载时间),显示小数点后两位。*/
#include <stdio.h>

int main()
{
    float down_speed, file_size, down_time;
    scanf("%f %f", &down_speed, &file_size);

    down_time = file_size / down_speed * 8;

    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds",
           down_speed, file_size, down_time);

    return 0;
}