/*编写一个程序,提示用户输入天数,然后将其转换为周数和天数。例如,用户输入18,则转换为2周4天。*/
#include <stdio.h>
#define Week_Day 7
int main()
{
    int days;
    while (1)
    {
        printf("please enter the number of days:");
        scanf("%d", &days);
        if (days <= 0)
        {
            printf("Done!");
            break;
        }
        int week, day;
        week = days / Week_Day;
        day = days % Week_Day;
        printf("%d days are %d weeks, %d days\n", days, week, day);
    }

    return 0;
}