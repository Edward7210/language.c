/*Rabnud博士加入了一个社交圈。起初他有5个朋友。他注意到他的朋友数量以下面的方式增长。
第1周少1个朋友，剩下的朋友数量翻倍;第1周少2个朋友，剩下的朋友数量翻倍。一般而言，
第N周少N个朋友，剩下的朋友数量翻倍。编写一个程序，计算并显示Rabnud博士每周的数量。该程序
一直运行，直到超过邓巴数。邓巴数是粗略估算一个人在社交圈中有稳定关系的成员的最大值，该值
大约为130*/
#include <stdio.h>

int main()
{
    int friends = 5;
    int week = 1;

    while (friends <= 130)
    {
        friends = (friends - week) * 2;
        printf("第%d周朋友有%d个\n", week, friends);
        week++;
    }

    return 0;
}
