// 编写一个程序,提示用户输入名和姓,然后以“名,姓”的格式打印出来。
#include <stdio.h>

int main()
{
    char first_name[50], last_name[50];
    scanf("%s %s", first_name, last_name);
    printf("%s,%s", first_name, last_name);

    return 0;
}