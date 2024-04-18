#include <stdio.h>
double imin(double , double );
int main()
{
    double x, y;
    double min;
    scanf("%lf %lf", &x, &y);

    min = imin(x, y);

    printf("%.2lf and %.2lf, max = %.2lf", x, y, min);
}
double imin(double x, double y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}