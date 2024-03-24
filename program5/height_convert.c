/*编写一个程序,提示用户输入身高(单位:厘米),并分别用厘米和英尺、英寸为单位显示该值,允许有小数
部分。该程序应该能让用户重复输入身高,直到输入一个非正值。*/
#include <stdio.h>

int main()
{
    double height;
    while (1)
    {
        printf("Enter a height in centimeters:");
        scanf("%lf", &height);
        if (height <= 0)
        {
            printf("Bye\n");
            break;
        }

        int foot = height / 30.48;
        double inch = (height - foot * 30.48) / 2.54;
        printf("%.1lf cm = %d feet, %.1lf inches\n", height, foot, inch);
    }

    return 0;
}