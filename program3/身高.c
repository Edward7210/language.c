//1Ӣ���൱��2.54���ס���дһ������,��ʾ�û��������(),Ȼ��������Ϊ��λ��ʾ��ߡ�
#include <stdio.h>

int main()
{
    int high_inch;
    printf("������������(Ӣ��): ");
    scanf("%d",&high_inch);
    
    double high_cm;
    high_cm = high_inch * 2.54;
    printf("������Ϊ%.2lfcm",high_cm);
    return 0;
}