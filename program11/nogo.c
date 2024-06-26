// 该程序是否能正常运行?
#include <stdio.h>
#define ANSWER "Grant"
#define SIZE 40
char *s_gets(char *st, int n);
int main()
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (try != ANSWER)
    {
        puts("No,that's wrong.Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");

    return 0;
}
char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
        {
            i++;
        }
        if (st[i] == '\n')
        {
            st[i] = '\0';
        }
        else
        {
            while (getchar() != '\0')
            {
                continue;
            }
        }
    }
    return ret_val;
}

// 无论如何都不正确,因为try和ANSWER比较的地址是否相同,而两者存储在不同位置,因为两者永不相同