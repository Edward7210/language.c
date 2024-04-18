#include <stdio.h>

double power(double n, int p);

int main()
{
    double x, xpow;
    int exp;

    printf("Enter a number and the integer power to which\n");
    printf("the number will be raised. Enter q to quit.\n");

    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }

    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n, int p)
{
    if (p == 0)
    {
        return 1; // 任何数的0次幂都是1
    }

    double result = 1;
    int i;
    if (p > 0)
    {
        for (i = 1; i <= p; i++)
        {
            result *= n;
        }
    }
    else
    {
        for (i = 1; i <= -p; i++)
        {
            result *= n;
        }
        result = 1 / result;
    }

    return result;
}