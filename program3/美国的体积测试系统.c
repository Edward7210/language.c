/*��������������ϵͳ��,1Ʒ�ѵ���2��,1������8��˾,1��˾����2������,1�����׵���3���ס�
��дһ������,��ʾ�û����뱭��,����Ʒ�ѡ���˾�����ס�����Ϊ��λ��ʾ�ȼ�������*/
#include <stdio.h>

int main()
{
    double cup_num;
    printf("�����뱭��:");
    scanf("%lf",&cup_num);

    double cup_pingtuo,cup_angsi,cup_tangshao,cup_chashao;
    //�����������
    cup_pingtuo = cup_num / 2;
    cup_angsi = cup_num * 8;
    cup_tangshao = cup_angsi * 2;
    cup_chashao = cup_tangshao * 3;
   
    //��ӡ����������
    printf("%.2lf������%.2fƷ��\n",cup_num,cup_pingtuo);
    printf("%.2lf������%.2f��˾\n",cup_num,cup_angsi);
    printf("%.2lf������%.2f����\n",cup_num,cup_tangshao);
    printf("%.2lf������%.2f����\n",cup_num,cup_chashao);
    return 0;
}