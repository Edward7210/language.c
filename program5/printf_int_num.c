/*编写一个程序,提示用户输入一个整数,然后打印从该数到比该数大10的所有整数(例如,,用户输入5,则
打印5~15的所有整数,包括5和15)。要求打印的各值之间用一个空格、制表符或换行符分开。*/
#include <stdio.h>

int main()
{
    int num;
    printf("please enter the number:");
    scanf("%d", &num);

    // for循环实现
    for (int i = num; i <= num + 10; i++)
    {
        printf("%d\n", i);
    }
    printf("\n");

    // while循环实现
    int j = num;
    while (j <= num + 10)
    {
        printf("%d\n", j);
        j++;
    }
    printf("\n");

    // do while循环实现
    int k = num;
    do
    {
        printf("%d\n", k);
        k++;
    } while (k <= num + 10);

    return 0;
}