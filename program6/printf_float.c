/*��дһ������,Ҫ���û���������������,����ӡ����֮����������ɼ��Ľ�������û����������֮ǰ
����Ӧѭ�������û������ÿ��ֵ��*/
#include <stdio.h>
int main()
{
    double n1, n2;
    int status;
    while (status = scanf("%lf %lf", &n1, &n2) == 2)
    {
        printf("%.2lf\n", (n1 - n2) / (n1 * n2));
    }

    return 0;
}