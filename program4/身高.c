// ��дһ�γ���,��ʾ�û��������(��λ:Ӣ��)������,Ȼ��������ĸ�ʽ��ʾ�û����������Ϣ:
#include <stdio.h>

int main()
{
    char name[40];
    float high;
    scanf("%s %f", name, &high);
    printf("%s, you are %.3f feet tall\n", name, high);

    return 0;
}