/*1个水分子的质量大约为3.0*10e-23克。1夸脱水大约为950克。编写一个程序,提示用户输入水的夸脱数
并显示水分子的数量*/
#include <stdio.h>
#define water (3.0e-23)
int main()
{
    int water_tuo;
    printf("请输入水的夸脱数:");
    scanf("%d",&water_tuo);

    double water_num;
    water_num = (water_tuo * 950.0) / water;
    printf("水分子的数量为%e个",water_num);
    return 0;
}