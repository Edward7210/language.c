/*��дһ������,��ʾ�û�����һ��double���͵���,����ӡ����������ֵ���Լ����һ���������㲢��ӡ
����ֵ��main()����Ҫ���û������ֵ���ݸ��ú�����*/
#include <stdio.h>
double fun_double(double num);
int main()
{
    double num;
    printf("please enter the number:");
    scanf("%lf", &num);

    printf("%.1lf������ֵΪ:%.1lf", num, fun_double(num));

    return 0;
}
double fun_double(double num)
{
    return num = num * num * num;
}