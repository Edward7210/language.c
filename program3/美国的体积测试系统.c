/*在美国的体积检测系统中,1品脱等于2杯,1杯等于8盎司,1盎司等于2大汤勺,1大汤勺等于3茶勺。
编写一个程序,提示用户输入杯数,并以品脱、盎司、汤勺、茶勺为单位显示等价容器。*/
#include <stdio.h>

int main()
{
    double cup_num;
    printf("请输入杯数:");
    scanf("%lf",&cup_num);

    double cup_pingtuo,cup_angsi,cup_tangshao,cup_chashao;
    //计算所需体积
    cup_pingtuo = cup_num / 2;
    cup_angsi = cup_num * 8;
    cup_tangshao = cup_angsi * 2;
    cup_chashao = cup_tangshao * 3;
   
    //打印输出所需体积
    printf("%.2lf杯等于%.2f品脱\n",cup_num,cup_pingtuo);
    printf("%.2lf杯等于%.2f盎司\n",cup_num,cup_angsi);
    printf("%.2lf杯等于%.2f汤勺\n",cup_num,cup_tangshao);
    printf("%.2lf杯等于%.2f茶勺\n",cup_num,cup_chashao);
    return 0;
}