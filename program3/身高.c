//1英存相当于2.54厘米。编写一个程序,提示用户输入身高(),然后以厘米为单位显示身高。
#include <stdio.h>

int main()
{
    int high_inch;
    printf("请输入你的身高(英寸): ");
    scanf("%d",&high_inch);
    
    double high_cm;
    high_cm = high_inch * 2.54;
    printf("你的身高为%.2lfcm",high_cm);
    return 0;
}