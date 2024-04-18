#include <stdio.h>
double avg_3_dao(double,double);
int main()
{
    double num1,num2;
    scanf("%lf %lf",&num1,&num2);

    double result=avg_3_dao(num1,num2);
    printf("%.2lf\n",result);

    return 0;
}
double avg_3_dao(double num1,double num2)
{
    double sum=(1.0/(1.0/num1+1.0/num2)/2.0);

    return sum;
}