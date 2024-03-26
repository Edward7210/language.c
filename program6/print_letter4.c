/*编写一个程序,提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母
        A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA   */
#include <stdio.h>

int main()
{
    char input;
    printf("Please enter letter:(A~Z):");
    scanf("%c", &input);

    int Row = input - 'A' + 1;  //求取层数

    for (int i = 0; i < Row; i++)
    {
        // 打印空格
        for (int j = 0; j < Row - i - 1; j++)
        {
            printf(" ");
        }

        // 打印左侧
        char letter = 'A';
        for (int j = 0; j <= i; j++)
        {
            printf("%c", letter++);
        }

        // 打印右侧
        letter--;
        for (int j = 0; j < i; j++)
        {
            printf("%c", --letter);
        }

        printf("\n");
    }

    return 0;
}