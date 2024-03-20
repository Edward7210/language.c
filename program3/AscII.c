//编写一段程序,要求提示输入一个ASCII码值,然后打印输入的字符。
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    // char Ascii_num = (char)num;
    printf("%c",num);
    return 0;
}