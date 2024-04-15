/*查看变量被存储在何处*/
#include <stdio.h>
void mikao(int);
int main()
{
    int pooh = 2, bah = 5;

    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
    mikao(pooh);

    return 0;
}
void mikao(int bah)
{
    int pooh = 10;

    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
}
