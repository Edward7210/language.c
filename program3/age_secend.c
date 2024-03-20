//一年大约有3.156*10e7,编写一个程序,提示用户输入年龄,然后显示该年龄对应的秒数。
#include <stdio.h>
//在c语言里,'typedef'关键字来为现有的数据类型创建一个新的别名
typedef long long int ll_int;
int main()
{
    int age;
    printf("请输入你的年龄(年): ");
    scanf("%d",&age);

    ll_int age_second;
    age_second = age * 3.156*10e7;
    printf("你的年龄转换为秒为:%lld秒",age_second);
    return 0;
}