/*编写一个程序把一个单词读入一个字符型数组中，然后倒叙打印这个单词。提示strlen()可用于计算数组
最后一个字符的下标*/
#include <stdio.h>
#include <string.h>
int main()
{
    char words[] = "stars";

    int words_num = strlen(words);
    for (int i = words_num - 1; i >= 0; i--)
    {
        printf("%c ", words[i]);
    }

    return 0;
}