/*��дһ������,����ʾ�û�������,Ȼ����ʾ�û������ա���һ�д�ӡ�û������������,��һ�зֱ��ӡ
�����յ���ĸ������ĸ��Ҫ����Ӧ�����յĽ�β���롣*/
#include <stdio.h>
#include <string.h>

int main()
{
    char first_name[50], last_name[50];
    int fn_num, ln_num;

    printf("please enter your first_name:", first_name);
    scanf("%s", first_name);
    printf("please enter your last_name:");
    scanf("%s", last_name);

    fn_num = strlen(first_name);
    ln_num = strlen(last_name);

    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", fn_num, fn_num, ln_num, ln_num);
    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", fn_num, fn_num, ln_num, ln_num);

    return 0;
}