/*编写一个程序,要求用户输入一个上限整数和一个下限整数,计算从上限到下限范围内所有整数的平方和,
并显示计算结果。然后程序继续提示用户输入上限和下限整数,并显示结果,直到用户输入的上限整数等于或
小于下限整数为止。*/
#include <stdio.h>
#include <math.h>
int main()
{
    int lower_limit, upper_limit;
    printf("Enter lower and upper integer limits: ");
    int status;
    while ((status = scanf("%d %d", &lower_limit, &upper_limit)) == 2)
    {
        if (lower_limit >= upper_limit)
        {
            printf("Done!\n");
            break;
        }
        int sum = 0; // 初始化,不能放前面,会出问题
        for (int i = lower_limit; i <= upper_limit; i++)
        {
            sum += pow(i, 2);
        }
        int low_2 = pow(lower_limit, 2);
        int up_2 = pow(upper_limit, 2);
        printf("The sums of the squares from %d to %d is %d\n", low_2, up_2, sum);
        printf("Enter next set of limits: ");
    }

    return 0;
}