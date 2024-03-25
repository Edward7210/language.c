// 注意与while1.c相比多了个分号
#include <stdio.h>

int main()
{
    int n = 0;
    while (n++ < 3)
        ;
        printf("n is %d\n", n);
    printf("That's all this program does\n");

    return 0;
}