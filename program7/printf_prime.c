/*编写一个程序,只接受正整数输入,然后显示所有小于或等于该数的素数。*/
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n); // bool类型判断n是否为素数
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
