/*��дһ������,��ʾ�û�����һ������,Ȼ���ӡ�Ӹ������ȸ�����10����������(����,,�û�����5,��
��ӡ5~15����������,����5��15)��Ҫ���ӡ�ĸ�ֵ֮����һ���ո��Ʊ�����з��ֿ���*/
#include <stdio.h>

int main()
{
    int num;
    printf("please enter the number:");
    scanf("%d", &num);

    // forѭ��ʵ��
    for (int i = num; i <= num + 10; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");

    // whileѭ��ʵ��
    int j = num;
    while (j <= num + 10)
    {
        printf("%d\n", j);
        j++;
    }
    printf("\n");

    // do whileѭ��ʵ��
    int k = num;
    do
    {
        printf("%d\n", k);
        k++;
    } while (k <= num + 10);

    return 0;
}