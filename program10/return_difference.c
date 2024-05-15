/*编写一个程序,返回存储在double类型数组中最大值和最小值的差值,并在一个简单的程序中测试该函数*/
#include <stdio.h>

double find_difference(double arr[], int size);

int main()
{
    double numbers[] = {10.0, 25.2, 7.3, 42.5, 15.6, 98.7, 31.5};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    double difference = find_difference(numbers, size);
    printf("The difference between the maximum and minimum values in the array is: %.2f\n", difference);

    return 0;
}

double find_difference(double arr[], int size)
{
    double max = arr[0];
    double min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return max - min;
}
