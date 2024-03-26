/*编写一个程序,创建一个包含26个元素的数组,并在其中存储26个小写字母。然后打印数组的所有内容*/
#include <stdio.h>
#define size 26
int main()
{
    int num[size] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                     'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    for (int i = 0; i < size; i++)
    {
        printf("%c ", num[i]);
    }
    printf("\n");

    char num2[size] = "abcdefghijklmnopqrstuvwxyz";
    for (int j = 0; j < size; j++)
    {
        printf("%c ", num2[j]);
    }

    return 0;
}