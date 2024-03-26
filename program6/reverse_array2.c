/*编写一个程序,读取一行输入,然后把输入的内容倒序打印出来。可以把输入
存储在char类型的数组中,假设每行字符不超过255。*/
#include <stdio.h>
#include <string.h>

int main()
{
    char array[255];
    while (scanf("%s", array) != EOF)
    {
        int length_array = strlen(array);
        for (int i = length_array - 1; i >= 0; i--)
        {
            printf("%c", array[i]);
        }
        printf("\n");
    }

    return 0;
}
