//��д����,����һ��������,�ȴ�ӡ��С������ʽ,�ٴ�ӡ��ָ����ʽ,����ӡ��p��������
#include <stdio.h>

int main()
{
    double num;
    printf("Enter a float-point value: ");
    scanf("%lf",&num);
    printf("fixed-point notation: %.6lf\n",num);
    //��C������,����ʹ�� %e ��ʽ˵����������������ӡΪָ����ʽ��
    printf("exponential notation: %e\n",num);
    //��C������,����ʹ�� %a ��ʽ˵����������������ӡΪp��������
    printf("p notation: %a",num);
    return 0;
}