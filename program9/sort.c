#include <stdio.h>
double sort(double *x, double *y, double *z);
int main()
{
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);

    sort(&x, &y, &z);

    printf("%.2lf %.2lf %.2f", x, y, z);

    return 0;
}
double sort(double *x, double *y, double *z)
{
    double temp;
    if (*x > *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*y > *z)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }
    if (*x > *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
}