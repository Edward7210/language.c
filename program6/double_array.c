/*编写一和程序,创建两个包含8个元素的double类型数组,使用循环提示用户为第
一个数组输入8个值。第二个数组元素的值设置为第一个数组对应元素的累计之和。
例如,第二个数组的第4个元素的值是第一个数组前4个元素之和,第二个数组的第5
个元素的值是第一个数组前5个元素之和(用嵌套循环可以完成,但是利用第二个数
组的第5个元素是第二个数组的第4个元素与第一个数组的第5个元素之和,只用一个
循环就能完成任务,不需要使用嵌套循环)。最后,使用循环显示两个数组的内容,第
一个数组显示成一行,第二个数组显示在第一个数组的下一行,而且每个元素都与第
一个数组个元素相对应。*/
#include <stdio.h>
#define size 8
int main()
{
    double element1[size], element2[size], sum = 0;
    int i;

    printf("enter the eight elements:");
    for (i = 0; i < size; i++)
    {
        scanf("%lf", &element1[i]);
        sum += element1[i];
        element2[i] = sum;
    }

    // 第一组
    for (i = 0; i < size; i++)
    {
        printf("%.2lf ", element1[i]);
    }
    printf("\n");

    // 第二组
    for (i = 0; i < size; i++)
    {
        printf("%.2lf ", element2[i]);
    }

    return 0;
}