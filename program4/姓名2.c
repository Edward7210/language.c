/*��дһ������,��ʾ�û���������,��ִ�����²���:
a.��ӡ����,����˫����
b.�ڿ��Ϊ20���ֶ��Ҷ˴�ӡ����,����˫����
c.�ڿ��Ϊ20���ֶ����˴�ӡ����,����˫����
d.�ڱ��������3���ֶ��д�ӡ����*/
#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    scanf("%s", name);

    int width;
    width = strlen(name) + 3;
    printf("\"%s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%*s\"\n", width, name);

    return 0;
}