#include <stdio.h>
double larger_of(double, double);
int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);

    double result = larger_of(x, y);
    printf("max=%.2lf", result);
    return 0;
}
double larger_of(double x, double y)
{
    double max;
    if (x < y)
    {
        max = y;
    }
    else
    {
        max = x;
    }

    return max;
}