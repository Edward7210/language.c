#include <stdio.h>
#define pi 3.14159
int main()
{
    float area,circum,radius;
    printf("What s the radius of your pizza?\n");
    scanf("%f",&radius);
    area = pi * radius * radius;
    circum = 2.0 * pi * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circulmfeence = %1.2f, area = %1.2f\n",circum,area);

    return 0;
}