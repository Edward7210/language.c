/*1��ˮ���ӵ�������ԼΪ3.0*10e-23�ˡ�1����ˮ��ԼΪ950�ˡ���дһ������,��ʾ�û�����ˮ�Ŀ�����
����ʾˮ���ӵ�����*/
#include <stdio.h>
#define water (3.0e-23)
int main()
{
    int water_tuo;
    printf("������ˮ�Ŀ�����:");
    scanf("%d",&water_tuo);

    double water_num;
    water_num = (water_tuo * 950.0) / water;
    printf("ˮ���ӵ�����Ϊ%e��",water_num);
    return 0;
}