/*编写一个程序,提示用户输入姓名,并执行以下操作:
a.打印名字,包括双引号
b.在宽度为20的字段右端打印名字,包括双引号
c.在宽度为20的字段做端打印名字,包括双引号
d.在比姓名宽度3的字段中打印名字*/
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