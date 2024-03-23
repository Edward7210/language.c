/*编写一个程序,提示用户输入旅行的里程和消耗的汽油数。然后计算并显示消耗每加仑汽油行驶的英里数,
显示小数点后面一位数字。接下来,使用1加仑大约3.785升,1英里大约为1.609千米,把单位是英里/加仑的
值转换为升/100公里(欧洲通用的燃料消耗表示法),并显示结果,显示小数点后面一位数字。注意,美国采用的
方案测量消耗单位燃料的行程(值越大越好),而欧洲则采用单位距离消耗的燃料测量方案(值越低越好)。
使用#define创建符号常量或使用const限定符创建变量来表示两个转换系数*/
#include <stdio.h>

#define GALLON_TO_LITER 3.785 // 1加仑等于3.785升
#define MILE_TO_KM 1.609      // 1英里等于1.609千米

int main()
{
    float miles, gallons;
    float mpg, l_per_100km;

    // 提示用户输入里程和消耗的汽油数
    printf("请输入旅行的里程(英里):");
    scanf("%f", &miles);
    printf("请输入消耗的汽油数(加仑):");
    scanf("%f", &gallons);

    // 计算每加仑汽油行驶的英里数
    mpg = miles / gallons;

    // 打印每加仑汽油行驶的英里数
    printf("每加仑汽油行驶的英里数为:%.1f\n", mpg);

    // 转换为升/100公里
    l_per_100km = (gallons * GALLON_TO_LITER) / (miles * MILE_TO_KM) * 100;

    // 打印转换后的结果
    printf("转换为升/100公里为:%.1f\n", l_per_100km);

    return 0;
}
