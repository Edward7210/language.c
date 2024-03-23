// 编写一段程序,提示用户输入身高(单位:英寸)和姓名,然后以下面的格式显示用户刚输入的信息:
#include <stdio.h>

int main()
{
    char name[40];
    float high;
    scanf("%s %f", name, &high);
    printf("%s, you are %.3f feet tall\n", name, high);

    return 0;
}