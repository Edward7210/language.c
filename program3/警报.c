//编写一个程序,发出一声警报,然后打印一段话。
#include <stdio.h>

int main()
{
    // \a用来表示警报声
    printf("\a");
    printf("Startled by the sudden sound, Sally shouted,\n");
    //在c语言里,\"用来表示双引号
    printf("\"By the Great Pumkin, waht was that!\"\n");
    return 0;
}