/*��дһ������,����һ������8��Ԫ�ص�int��������,�ֱ������Ԫ������Ϊ2��ǰ8���ݡ�
ʹ��forѭ����������Ԫ�ص�ֵ,ʹ��do whileѭ����ʾ����Ԫ�ص�ֵ*/
#include <stdio.h>
#include <math.h>
#define size 8
int main()
{
    int element[size];
    int i;
    for (i = 1; i <= size; i++)
    {
        element[i] = pow(2, i);
    }

    int k = 1;
    do
    {
        printf("%d ", element[k++]);
    } while (k <= size);
}