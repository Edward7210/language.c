/*��дһ������,��һ��double���͵ı�������Ϊ1.0/3.0,һ��float���͵ı�������Ϊ1.0/3.0��
�ֱ���ʾ���μ���Ľ��������:һ����ʾС�������6λ����:һ����ʾС�������12λ����:
һ����ʾС�������16λ���֡�������Ҫ����float.tͷ�ļ�,����ʾFLT_DIG��DBL_DIG��ֵ��*/
#include <stdio.h>
#include <float.h>
int main()
{
    double num1 = 1.0 / 3.0;
    float num2 = 1.0 / 3.0;

    printf("FLT_DIG = %d\n", FLT_DIG);
    printf("DBL_DIG = %d\n\n", DBL_DIG);
    printf("%.6lf %.6f\n", num1, num2);
    printf("%.12lf %.12f\n", num1, num2);
    printf("%.16lf %.16f\n", num1, num2);

    return 0;
}