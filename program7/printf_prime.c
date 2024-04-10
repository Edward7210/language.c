/*��дһ������,ֻ��������������,Ȼ����ʾ����С�ڻ���ڸ�����������*/
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n); // bool�����ж�n�Ƿ�Ϊ����
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
