#include <stdio.h>
#include <ctype.h> // 包含ctype.h头文件以使用isspace函数

// 函数声明
int letter_position(char ch);

int main()
{
    char ch;
    int position;

    printf("请输入字符，程序将报告其在字母表中的位置（如果是字母）：\n");

    // 从标准输入中读取字符，直到遇到文件结尾
    while ((ch = getchar()) != EOF)
    {
        // 如果是空白字符，则跳过
        if (isspace(ch))
        {
            continue;
        }

        position = letter_position(ch);

        if (position != -1)
        {
            printf("%c 在字母表中的位置是 %d\n", ch, position);
        }
        else
        {
            printf("%c 不是字母\n", ch);
        }
    }

    return 0;
}

// 函数定义
int letter_position(char ch)
{
    // 判断字符是否是字母
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        // 计算字符在字母表中的位置
        if (ch >= 'a' && ch <= 'z')
        {
            return ch - 'a' + 1;
        }
        else
        {
            return ch - 'A' + 1;
        }
    }
    else
    {
        return -1; // 不是字母返回-1
    }
}